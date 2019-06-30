/*
 * sb_mpc.cpp
 *
 *  Created on: Dec 22, 2016
 *      Author: ingerbha
 * 	Altered on: Mar 30, 2018. By: solveds
 * 	
 */

#include "sb_mpc.h"
#include "ship_model.h"
#include <iostream>
#include <iomanip>
#include <vector>

static const double DEG2RAD = M_PI/180.0f;
static const double RAD2DEG = 180.0f/M_PI;

simulationBasedMpc::simulationBasedMpc(){
	T_ = 600.0;
	DT_ = 1;
	method = LinearPrediction;

	P_ = 0.5;
	Q_ = 4;
	D_CLOSE_ = 400.0;
	D_SAFE_ = 60.0;
	K_COLL_ = 0.5;
	PHI_AH_ = 30.0;
	PHI_OT_ = 68.5;
	PHI_HO_ = 22.5;
	PHI_CR_ = 68.5;
	KAPPA_ = 3.0;
	K_P_ = 2.5;
	K_CHI_ = 1.3;			// Not used anymore
	K_CHI_SB_ = 0.9;		
	K_CHI_P_ = 10.0;
	K_DP_ = 2.0;
	K_DCHI_SB_ = 0.9;		
	K_DCHI_P_ = 0.2;
	
	P_ca_last_ = 1;
	Chi_ca_last_ = 0;
	
	print_cost = false;

	cost_ = INFINITY;

	Chi_ca_.resize(13);
	Chi_ca_ << -90.0,-75.0,-60.0,-45.0,-30.0,-15.0,0.0,15.0,30.0,45.0,60.0,75.0,90.0;
	Chi_ca_ *= DEG2RAD;
	P_ca_.resize(1);
	P_ca_ << 1.0;			

	asv = new shipModel(T_,DT_);

}


simulationBasedMpc::~simulationBasedMpc(){
}

double simulationBasedMpc::getT(){
	return T_;
}

double simulationBasedMpc::getDt(){
	return DT_;
}

double simulationBasedMpc::getP(){
	return P_;
}

double simulationBasedMpc::getQ(){
	return Q_;
}

double simulationBasedMpc::getDClose(){
	return D_CLOSE_;
}

double simulationBasedMpc::getDSafe(){
	return D_SAFE_;
}

double simulationBasedMpc::getKColl(){
	return K_COLL_;
}
double simulationBasedMpc::getPhiAH(){
	return PHI_AH_*RAD2DEG;
}

double simulationBasedMpc::getPhiOT(){
	return PHI_OT_*RAD2DEG;
}

double simulationBasedMpc::getPhiHO(){
	return PHI_HO_*RAD2DEG;
}

double simulationBasedMpc::getPhiCR(){
	return PHI_CR_*RAD2DEG;
}

double simulationBasedMpc::getKappa(){
	return KAPPA_;
}

double simulationBasedMpc::getKP(){
	return K_P_;
}

double simulationBasedMpc::getKChi(){
	return K_CHI_;
}

double simulationBasedMpc::getKChiSB(){
	return K_CHI_SB_;
}

double simulationBasedMpc::getKChiP(){
	return K_CHI_P_;
}

double simulationBasedMpc::getKdP(){
	return K_DP_;
}
double simulationBasedMpc::getKdChiSB(){
	return K_DCHI_SB_;
}

double simulationBasedMpc::getKdChiP(){
	return K_DCHI_P_;
}

double simulationBasedMpc::getPrintCost(){
	return print_cost;
}

Eigen::VectorXd simulationBasedMpc::getChiCA(){
	return Chi_ca_*RAD2DEG;
}

Eigen::VectorXd simulationBasedMpc::getPCA(){
	return P_ca_;
}

std::string simulationBasedMpc::getMethod(){
	std::string returnValue;
	switch (method){
		case EulerFirstOrder 	: returnValue = "EulerFirstOrder"; break;
		case LinearPrediction 	: returnValue = "LinearPrediction"; break;
		default 				: returnValue = "Failed";
	}
	return returnValue;
}

void simulationBasedMpc::setMethod(int i){
	switch (i){
	case 0 : method = EulerFirstOrder; break;
	case 1 : method = LinearPrediction; break;
	}
}

void simulationBasedMpc::setT(double T){
	T_ = T;
}

void simulationBasedMpc::setDt(double dt){
	DT_ = dt;
}

void simulationBasedMpc::setP(double p){
	P_ = p;
}

void simulationBasedMpc::setQ(double q){
	Q_ = q;
}

void simulationBasedMpc::setDClose(double d_close){
	D_CLOSE_ = d_close;
}

void simulationBasedMpc::setDSafe(double d_safe){
	D_SAFE_ = d_safe;
}

void simulationBasedMpc::setKColl(double k_coll){
	K_COLL_ = k_coll;
}

void simulationBasedMpc::setPhiAH(double phi_AH){
	PHI_AH_ = phi_AH*DEG2RAD;
}

void simulationBasedMpc::setPhiOT(double phi_OT){
	PHI_OT_ = phi_OT*DEG2RAD;
}

void simulationBasedMpc::setPhiHO(double phi_HO){
	PHI_HO_ = phi_HO*DEG2RAD;
}

void simulationBasedMpc::setPhiCR(double phi_CR){
	PHI_CR_ = phi_CR*DEG2RAD;
}

void simulationBasedMpc::setKappa(double kappa){
	KAPPA_ = kappa;
}

void simulationBasedMpc::setKP(double K_P){
	K_P_ = K_P;
}

void simulationBasedMpc::setKChi(double K_Chi){
	K_CHI_ = K_Chi;
}

void simulationBasedMpc::setKChiSB(double K_Chi_SB){
	K_CHI_SB_ = K_Chi_SB;
}

void simulationBasedMpc::setKChiP(double K_Chi_P){
	K_CHI_P_ = K_Chi_P;
}

void simulationBasedMpc::setKdP(double K_dP){
	K_DP_ = K_dP;
}

void simulationBasedMpc::setKdChiSB(double K_dChi_SB){
	K_DCHI_SB_ = K_dChi_SB;
}

void simulationBasedMpc::setKdChiP(double K_dChi_P){
	K_DCHI_P_ = K_dChi_P;
}

void simulationBasedMpc::setPrintCost(double print_Cost){
	print_cost = print_Cost;
}

void simulationBasedMpc::setChiCA(Eigen::VectorXd Chi_ca){
	Chi_ca_.resize(Chi_ca.size());
	Chi_ca_ = Chi_ca*DEG2RAD;
}

void simulationBasedMpc::setPCA(Eigen::VectorXd P_ca){
	P_ca_.resize(P_ca.size());
	P_ca_ = P_ca;
}

void simulationBasedMpc::getBestControlOffset(double &u_os_best, double &psi_os_best, double u_d, double psi_d, const Eigen::Matrix<double,6,1>& asv_state, const Eigen::Matrix<double,-1,9>& obst_states){
	double cost = INFINITY;
	double cost_i = 0;
	double cost_k;
	int n_obst;
	
	// Debug parameters - Remove later - Start
	double cost_h = 0;		
	double cost_max = 0.0;	
	double psi_max = 0.0; 	
	double cost_h1 = 0;		
	double cost_h2 = 0;		
	double dist = 0;
	double min_dist = 400;
	Eigen::VectorXd costMatrix(13);
	Eigen::VectorXd costMatrixH1(13);
	Eigen::VectorXd costMatrixH2(13);
	Eigen::Vector2d d;
	Eigen::VectorXd distMatrix(13);	
	double n_samp = T_/DT_;
	// Debug parameters - Remove later - End


	if (obst_states.rows() == 0){
		u_os_best = 1;
		psi_os_best = 0;
		P_ca_last_ = 1;
		Chi_ca_last_ = 0;
		return;
	}else{
		for (int i = 0; i < obst_states.rows(); i++){
			obstacle *obst = new obstacle(obst_states.row(i), T_, DT_);
			obst_vect.push_back(obst);
		}
		n_obst = obst_vect.size();
	}
	

		
	for (int i = 0; i < Chi_ca_.size(); i++){
		for (int j = 0; j < P_ca_.size(); j++){

			switch(method){
			case EulerFirstOrder : asv->eulersMethod(asv_state, u_d*P_ca_[j], psi_d + Chi_ca_[i]);
					break;
			case LinearPrediction : asv->linearPrediction(asv_state, u_d*P_ca_[j], psi_d + Chi_ca_[i]);
					break;
			}
			

			cost_i = -1;
			for (int k = 0; k < n_obst; k++){

				cost_k = costFunction(P_ca_[j], Chi_ca_[i], k);
				if (cost_k > cost_i){			//! Maximizing cost associated with this scenario
					cost_i = cost_k;	
				}
			}
			
			
			
			if (true){//Debug- Cost - To present the Cost associated to each Control Behaviour [Only 1 obstacle as k = 0]
			cost_h = costFunction(0, Chi_ca_[i], 0);
			costMatrix(i)= cost_h;
			if (cost_h > cost_max){
				cost_max = cost_h;
				psi_max = Chi_ca_[i];
			}
			
			 // H1(Collision Costs) & H2(COLREGS)
			cost_h1 = costFunction(4, Chi_ca_[i], 0);
			costMatrixH1(i)= cost_h1;
			cost_h2 = costFunction(5, Chi_ca_[i], 0);
			costMatrixH2(i)= cost_h2;
			
				min_dist = 400;
				for (int m = 0; m < n_samp-1; m++){

					d(0) = obst_vect[0]->x_(m) - asv->x(m);			// dx = North
					d(1) = obst_vect[0]->y_[m] - asv->y[m];			// dy = East
					dist = d.norm();
					if (dist < min_dist){
						min_dist = dist; 	
						}
				}
			// Distance matrix - Displays the Lowest Distance for each Control Behaviour
			distMatrix(i)= min_dist;
			
			//***** Debug-End
			}
			
			
			//! Find the optimal Control Behaviour - Minimizing H2-hazard
			if (cost_i < cost){			
				cost = cost_i; 			
				u_os_best = P_ca_[j];
				psi_os_best = Chi_ca_[i];
			}
		}
	}
	
	
	if (print_cost != 0){ //Enable print_cost to see Costvectors (Tot,H1,H2,Distance)
		Eigen::Vector2d d_vec;					
		d_vec(0) = obst_vect[0]->x_(0);			// dx (North)
		d_vec(1) = obst_vect[0]->y_[0];			// dy (East)
		double distance = d_vec.norm();			
		std::cout << std::setprecision(2) << std::fixed;
	
		std::cout << "CostVector: " << costMatrix.transpose()  << " | CostVec H1: " << costMatrixH1.transpose() << " | dist: " << distance << " | psi_os: " << (180.0f/M_PI)*psi_os_best << std::endl;
		std::cout << "CostVector: " << costMatrix.transpose() << " | DistVec " << distMatrix.transpose() <<  " | dist: " << distance << " | psi_os: " << (180.0f/M_PI)*psi_os_best << std::endl;		
		//std::cout << "CostVec H2: " << costMatrixH2.transpose() << " | DistVec " << distMatrix.transpose() <<  " | dist: " << distance << " | psi_os: " << (180.0f/M_PI)*psi_os_best << std::endl;		
		//std::cout << "CostVec H1: " << costMatrixH1.transpose() << " | CostVec H2: " << costMatrixH2.transpose() << " | Heading_d:  " << (180.0f/M_PI)*psi_d << " Heading_os: " << (180.0f/M_PI)*psi_os_best << " | dx: " << obst_states(0) << " dy: " << obst_states(1) << std::endl;
	}
				

	if (print_cost == 2){// Visualize the lowest cost trajectory of the ASV
		std::cout << "AutoNaut w/ lowest cost heading offset: " << (180.0f/M_PI)*psi_os_best << " psi_d: " << (180.0f/M_PI)*psi_d << " u_d: " << u_d << " u_os_best: " << u_os_best << " | Obstacle: dx: " << obst_states(0) << " dy: " << obst_states(1) << std::endl;
		asv->linearPrediction(asv_state, u_d*u_os_best, psi_d + psi_os_best);
		//for (int i = 0; i < n_samp; i++){
		for (int i = 0; i < 30; i++){
			std::cout << i << ".(x,y,psi,u,v): " << asv->x(i) << " " << asv->y(i) << " " << (180.0f/M_PI)*asv->psi(i) << " " << asv->u(i) << " " << asv->v(i) << std::endl;
		}
		std::cout << " " << std::endl;
	}
	
	
	
	for (int k = 0; k < n_obst; k++){
		delete(obst_vect[k]);
	}
	obst_vect.clear();

	P_ca_last_ = u_os_best;
	Chi_ca_last_ = psi_os_best;
}


double simulationBasedMpc::costFunction(double P_ca, double Chi_ca, int k){
	double dist, phi, phi_o, psi_o, psi_rel, R, C, k_coll, d_safe_i;
	Eigen::Vector2d d, los, los_inv, v_o, v_s;
	bool mu, OT, SB, HO, CR;
	double d_safe = D_SAFE_;
	double d_close = D_CLOSE_;
	double H0 = 0;
	double H1 = 0;
	double H2 = 0;
	double cost = 0;
	double t = 0;
	double t0 = 0;
	int n_samp = T_/DT_;		
	bool PA;					 
	double VD_angle = 0;
	double VO_angle = 0;

	bool onlyH1 = false;
	bool onlyH2 = false;
	bool print_parameters = false;	
	if(true){//Debug: Reuqired to print CostVectors (H1,H2,Tot)
	if (P_ca == 4){
		onlyH1 = true;
		P_ca = 1;
	}
	if (P_ca == 5){
		onlyH2 = true;
		P_ca = 1;
	}
	
	if (P_ca == 0){
		print_parameters = true;	//Debug parameters - Set TRUE if you want to see when OT CR HO SB are activated
		P_ca = 1;
	}
	}

	for (int i = 0; i < n_samp-1; i++){

		t += DT_;

		d(0) = obst_vect[k]->x_(i) - asv->x(i);			// dx (North)
		d(1) = obst_vect[k]->y_[i] - asv->y[i];			// dy (East)
		dist = d.norm();
		
		R = 0;
		C = 0;
		mu = 0;
		if (dist < d_close){				// Obstacle is CLOSE

			v_o(0) = obst_vect[k]->u_[i];
			v_o(1) = obst_vect[k]->v_[i];
			rot2d(obst_vect[k]->psi_,v_o);

			v_s(0) = asv->u[i];
			v_s(1) = asv->v[i];
			rot2d(asv->psi[i],v_s);

			psi_o = obst_vect[k]->psi_;
			while(psi_o <= -M_PI) psi_o += 2*M_PI;
			while (psi_o > M_PI) psi_o -= 2*M_PI;

			phi = atan2(d(1),d(0)) - asv->psi[i];			
			while(phi <= -M_PI) phi += 2*M_PI;
			while (phi > M_PI) phi -= 2*M_PI;

			psi_rel = psi_o - asv->psi[i];
			while(psi_rel < -M_PI) psi_rel += 2*M_PI;
			while(psi_rel > M_PI) psi_rel -= 2*M_PI;

			los = d/dist;
			los_inv = -d/dist;
			
			
			/* // Calculating d_safe - Dynamic d_safe dependant on obstacle speed and size. (Caused some problems)
			if (phi < PHI_AH_*DEG2RAD){//v_s.dot(los) > cos(PHI_AH_*DEG2RAD)*v_s.norm()){ // obst ahead
				d_safe_i = d_safe + asv->getL()/2;
			}else if (phi > PHI_OT_*DEG2RAD){//v_s.dot(los) > cos(PHI_OT_*DEG2RAD)*v_s.norm()){ // obst behind
				d_safe_i = 0.5*d_safe + asv->getL()/2;

			}else{
				d_safe_i = d_safe + asv->getW()/2;
			}

			phi_o = atan2(-d(1),-d(0)) - obst_vect[k]->psi_;			// Relative bearing from Obstacle to AutoNaut
			while(phi_o <= -M_PI) phi_o += 2*M_PI;
			while (phi_o > M_PI) phi_o -= 2*M_PI;



			if (phi_o < PHI_AH_*DEG2RAD){//v_o.dot(los_inv) > cos(PHI_AH_*DEG2RAD)*v_o.norm()){ // ship ahead
				d_safe_i += d_safe + obst_vect[k]->getL()/2;
			}else if(phi_o > PHI_OT_*DEG2RAD){//v_o.dot(los_inv) > cos(PHI_OT_*DEG2RAD)*v_o.norm()){ // ship behind
				d_safe_i += 0.5*d_safe + obst_vect[k]->getL()/2;
			}else{
				d_safe_i += d_safe + obst_vect[k]->getW()/2;
			}

			// Ship Overtakes Obstacle 
			if (v_s.dot(v_o) > cos(PHI_OT_*DEG2RAD)*v_s.norm()*v_o.norm() && v_s.norm() > v_o.norm()){
				d_safe_i = d_safe + asv->getL()/2 + obst_vect[k]->getL()/2;
			}
			*/
			
			
			d_safe_i = D_SAFE_;			
			
			// ** Hazard Evaluation Criterion
			if (dist < d_safe_i){
				R = (1/pow(fabs(t-t0),P_))*pow(d_safe/dist,Q_);			// R = Collision risk factor
				k_coll = K_COLL_*asv->getL()*obst_vect[k]->getL();		// k_coll = Collision cost
				//C = k_coll*pow(v_s.norm()*v_o.norm(),2);				// C = Cost associated with collision with obstacle, had some issue inside D_SAFE due to the kinetic energy. 
				C = k_coll;												
			}
			
			
			// Passing
			VD_angle = (-d.dot(v_s))/(dist*v_s.norm());
			VO_angle = (v_s.dot(v_o))/(v_s.norm()*v_o.norm());
		
			PA = v_o.norm() > 0.05 && (RAD2DEG*phi > 90) && (VO_angle < VD_angle);
			
			// ** COLREGS article - Defining OT, HO, CR
			// Overtaken by obstacle
			OT = v_s.dot(v_o) > cos(PHI_OT_*DEG2RAD)*v_s.norm()*v_o.norm()
					&& v_s.norm() < v_o.norm();
			
			// Obstacle on starboard side
			SB = phi >= 0;
			
			// Obstacle Head-on
			HO = v_o.norm() > 0.05
					&& v_s.dot(v_o) < -cos(PHI_HO_*DEG2RAD)*v_s.norm()*v_o.norm()
					&& v_s.dot(los) > cos(PHI_AH_*DEG2RAD)*v_s.norm();


			// Crossing situation
			CR = v_o.norm() > 0.05 && v_s.dot(v_o) < cos(PHI_CR_*DEG2RAD)*v_s.norm()*v_o.norm()
					&& (SB && psi_rel < 0 && (!PA));
			

			mu = ( SB && HO ) || ( CR && !OT);	//Denotes violation of COLREGS rule 14 & 15
			
			

		H0 = C*R + KAPPA_*mu;
		

		if (H0 > H1){
			H1 = H0;  // Maximizing the cost with regards to time
		}
	}

	//H2 = K_P_*(1-P_ca) + K_CHI_*pow(Chi_ca,2) + deltaP(P_ca) + deltaChi(Chi_ca); 		// Original H2
	//H2 = K_P_*(1-P_ca) + sideChi(Chi_ca) + deltaP(P_ca) + deltaChi(Chi_ca);			// P_ca has only one Speed offset
	H2 = sideChi(Chi_ca) + deltaChi(Chi_ca);
	
	
	cost =  H1 + H2;
	
	if(onlyH2){
		cost = H2;
	}
	if(onlyH1){
		cost = H1;
	}
	
				
	if (print_parameters){ //Debug: Print COLREGS: (OT,SB,HO,CR,PA)
		//HO: 
			//std::cout << i << ".(OT,SB,HO,CR): " << OT << " " << SB << " " << HO << " " << CR << " | mu: " << mu << " | Chi_ca: " << RAD2DEG*Chi_ca << " phi: " << RAD2DEG*phi << " |HO: |vs|,|vo|: " << v_s.norm() << " " << v_o.norm() << " dot(vsvo,vslos): " <<  v_s.dot(v_o) << " " << v_s.dot(los) << " | -cos(HO)|vs||vo|: " << -cos(PHI_HO_*DEG2RAD)*v_s.norm()*v_o.norm() << " | cos(AH)|vs|: "<< cos(PHI_AH_*DEG2RAD)*v_s.norm() << " AH: " << (v_s.dot(los) > cos(PHI_AH_*DEG2RAD)*v_s.norm()) << " HO: " << (v_s.dot(v_o) < -cos(PHI_HO_*DEG2RAD)*v_s.norm()*v_o.norm()) <<  " | dx " << d(0) << " dy " << d(1) << " | psi_rel: " << psi_rel*RAD2DEG << std::endl;
		//CR: 
			if(print_cost == 3){
				//std::cout << i << ".(OT,SB,HO,CR,PA): " << OT << " " << SB << " " << HO << " " << CR << " " << PA << " | mu: " << mu << " | Chi: " << RAD2DEG*Chi_ca << " phi: " << RAD2DEG*phi << " | CR: norm(vs,vo): " << v_s.norm() << " " << v_o.norm() << " vs⋅vo: " << v_s.dot(v_o) << " cos(CR)|vs||vo|: " << cos(PHI_CR_*DEG2RAD)*v_s.norm()*v_o.norm() << " | vs.vo < cos(CR)|vs||vo|: " << (v_s.dot(v_o) < cos(PHI_CR_*DEG2RAD)*v_s.norm()*v_o.norm()) << " | dist " << dist << " dx " << d(0) << " dy " << d(1) << " | psi_rel: " << psi_rel*RAD2DEG << " psi(asv,obs): " << asv->psi[i]*RAD2DEG << " " <<  psi_o*RAD2DEG << std::endl;				
				std::cout << i << ".(OT,SB,HO,CR,PA): " << OT << " " << SB << " " << HO << " " << CR << " " << PA << " | mu: " << mu << " | Chi: " << RAD2DEG*Chi_ca << " | Chi[rad]: " << Chi_ca << " phi: " << RAD2DEG*phi << " | dist " << dist << " dx " << d(0) << " dy " << d(1) << " | psi_rel: " << psi_rel*RAD2DEG << " cost(i): " << cost  << " sideChi(Chi_ca):" <<  sideChi(Chi_ca)  << " deltaChi(Chi_ca): " << deltaChi(Chi_ca) << " R: " << R << " C: " << C << std::endl;				

				if (i==25)
					break;
			}
			}
		}
		

	return cost;
}

double simulationBasedMpc::deltaP(double P_ca){
	return K_DP_*std::abs(P_ca_last_ - P_ca);
}

double simulationBasedMpc::sideChi(double Chi_ca){		//! Change name to Chi
	double dChi = Chi_ca - Chi_ca_last_;
	if (dChi >= 0){
		return K_CHI_SB_*pow(Chi_ca,2);
	}else{
		return K_CHI_P_*pow(Chi_ca,2);
	}
} 

double simulationBasedMpc::deltaChi(double Chi_ca){			
	double dChi = Chi_ca - Chi_ca_last_;
	if (dChi > 0){
		return K_DCHI_SB_*pow(dChi,2);
	}else if (dChi < 0){
		return K_DCHI_P_*pow(dChi,2);
	}else{
		return 0;
	}
}


void simulationBasedMpc::rot2d(double yaw, Eigen::Vector2d &res){
	Eigen::Matrix2d R;
	R << cos(yaw), -sin(yaw),
		 sin(yaw), cos(yaw);
	res = R*res;
}

