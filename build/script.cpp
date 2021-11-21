#include "TTree.h"
#include "TFile.h"
#include "TH1F.h"
#include "TCanvas.h"

// Main program function
void script() {
	
	//Reads the data from the root file
	TFile* input = new TFile("total.root","read");
	
	//Gets data from the tree "Gold" within the root file
	TTree* tree = (TTree*)input->Get("Gold");
	
	//Gets the number of entires in "Gold" tree
	int entries = tree->GetEntries();
	
	//Gets the values of the data in the "Angle" branch
	double angle;
	tree->SetBranchAddress("Angle",&angle);
	
	//Defines a new histogram object
	TH1F* logHist = new TH1F("LogHist",								//Hist name
														"Particle Scattering",	//Hist title
														360,										//Num of bins
														-180,										//xmin
														180);										//xmax
	
	//Loop over all entires in the tree
	for(int i=0;i<entries;i++){
		
		//Gets entry i
		tree->GetEntry(i);
		
		//cout<<angle<<endl;
		
		//Puts entry i into a histogram
		logHist->Fill(angle);
	}
	
	//Generates line graph from histogram
	
	//TGraph* graph = new TGraph();
	//for (int i=1;i<=logHist->GetNbinsX(); i++){
		//graph->SetPoint(i-1,logHist->GetBinCenter(i),logHist->GetBinContent(i));
		//}
	
	
	
	//Creates canvas for new plot
	TCanvas* cv = new TCanvas();
	
	//graph->Draw("AL");
	
	//Sets axis titles
	logHist->GetXaxis()->SetTitle("Angle (Degrees)");
	logHist->GetYaxis()->SetTitle("log(Number of Detections)");
	
	//Draws plot
	logHist->Draw("L");
	
	//Sets y axis to be log scale
	cv->SetLogy();
	//Saves plot
	cv->SaveAs("LogHist.root");
	cv->Print("LogHist.eps");
	
}
