#include <math.h>

#include "TTree.h"
#include "TFile.h"
#include "TH1F.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TMath.h"

// Main program function
void script() {
	
	//Reads the data from the root file
	TFile* input = new TFile("plots/total_1.root","read");
	

	//Gets data from the tree "Gold" within the root file
	TTree* tree = (TTree*)input->Get("Gold");
	
	//Gets the number of entires in "Gold" tree
	int entries = tree->GetEntries();
	
	//Gets the values of the data in the "Angle" branch
	double angle;
	tree->SetBranchAddress("Angle",&angle);

	//Defines a new histogram object
	TH1F* logHist = new TH1F("LogHist",				//Hist name
							"Particle Scattering",	//Hist title
							180,					//Num of bins
							0,						//xmin
							180);					//xmax


	//Loop over all entires in the tree
	for(int i=0;i<entries;i++){
		
		//Gets entry i
		tree->GetEntry(i);
		
		//Makes x axis abs(angle)
		if (angle < 0){angle = -angle;}
		
		//Puts entry i into a histogram
		logHist->Fill(angle);

	}
	
	//Creates canvas for new plot
	TCanvas* cv = new TCanvas();

	//Sets axis titles
	logHist->GetXaxis()->SetTitle("|Angle (Degrees)|");
	logHist->GetYaxis()->SetTitle("Number of Detections");
	
	//Draws plot
	logHist->Draw();
	logHist->Rebin(4);
	logHist->GetYaxis()->SetNdivisions(2);
	logHist->Write();
	
	//Sets y axis to be log scale
	cv->SetLogy();
	//Saves plot
	cv->SaveAs("plots/LogHist1_abs.root");
	cv->Print("plots/LogHist1_abs.eps");
	

}
