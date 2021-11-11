// Main program function
void script() {
	
	//Reads the data from the root file
	TFile* input = new TFile("output_t0.root","read");
	
	//Gets data from the tree "Gold" within the root file
	TTree* tree = (TTree*)input->Get("Gold");
	
	//Gets the number of entires in "Gold" tree
	int entries = tree->GetEntries();
	
	//Gets the values of the data in the "Angle" branch
	double angle;
	tree->SetBranchAddress("Angle",&angle);
	
	//Defines a new histogram object
	TH1F* logHist = new TH1F("LogHist","Histogram",360,0,360);
	
	//Loop over all entires in the tree
	for(int i=0;i<entries;i++){
		
		//Gets entry i
		tree->GetEntry(i);
		
		//cout<<angle<<endl;
		
		//Puts entry i into a histogram
		logHist->Fill(angle);
	}
	
	//Creates canvas for new plot
	TCanvas* cv = new TCanvas();
	//Makes the y axis log scale
	cv->SetLogy();
	
	logHist->Draw();
	
	//input->Close();
	
}
