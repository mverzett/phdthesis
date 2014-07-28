{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:07:08 2014) by ROOT version5.32/00
   TCanvas *adsf = new TCanvas("adsf", "asdf",0,0,700,500);
   gStyle->SetOptTitle(0);
   adsf->SetHighLightColor(2);
   adsf->Range(0,0,1,1);
   adsf->SetFillColor(0);
   adsf->SetBorderMode(0);
   adsf->SetBorderSize(2);
   adsf->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: up
   TPad *up = new TPad("up", "up",0,0,1,1);
   up->Draw();
   up->cd();
   up->Range(-37.5,-91.87501,337.5,826.875);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *0d23955339814d748061bc94af970d9d = new THStack();
   0d23955339814d748061bc94af970d9d->SetName("0d23955339814d748061bc94af970d9d");
   0d23955339814d748061bc94af970d9d->SetTitle("ZZ");
   0d23955339814d748061bc94af970d9d->SetMaximum(700);
   
   TH1F *0d23955339814d748061bc94af970d9d_stack_10 = new TH1F("0d23955339814d748061bc94af970d9d_stack_10","ZZ",1,0,300);
   0d23955339814d748061bc94af970d9d_stack_10->SetMinimum(0);
   0d23955339814d748061bc94af970d9d_stack_10->SetMaximum(735);
   0d23955339814d748061bc94af970d9d_stack_10->SetDirectory(0);
   0d23955339814d748061bc94af970d9d_stack_10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   0d23955339814d748061bc94af970d9d_stack_10->SetLineColor(ci);
   0d23955339814d748061bc94af970d9d_stack_10->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   0d23955339814d748061bc94af970d9d_stack_10->GetXaxis()->SetLabelFont(42);
   0d23955339814d748061bc94af970d9d_stack_10->GetXaxis()->SetLabelSize(0.035);
   0d23955339814d748061bc94af970d9d_stack_10->GetXaxis()->SetTitleSize(0.035);
   0d23955339814d748061bc94af970d9d_stack_10->GetXaxis()->SetTitleFont(42);
   0d23955339814d748061bc94af970d9d_stack_10->GetYaxis()->SetTitle("Events");
   0d23955339814d748061bc94af970d9d_stack_10->GetYaxis()->SetLabelFont(42);
   0d23955339814d748061bc94af970d9d_stack_10->GetYaxis()->SetLabelSize(0.035);
   0d23955339814d748061bc94af970d9d_stack_10->GetYaxis()->SetTitleSize(0.035);
   0d23955339814d748061bc94af970d9d_stack_10->GetYaxis()->SetTitleFont(42);
   0d23955339814d748061bc94af970d9d_stack_10->GetZaxis()->SetLabelFont(42);
   0d23955339814d748061bc94af970d9d_stack_10->GetZaxis()->SetLabelSize(0.035);
   0d23955339814d748061bc94af970d9d_stack_10->GetZaxis()->SetTitleSize(0.035);
   0d23955339814d748061bc94af970d9d_stack_10->GetZaxis()->SetTitleFont(42);
   0d23955339814d748061bc94af970d9d->SetHistogram(0d23955339814d748061bc94af970d9d_stack_10);
   
   
   TH1D *0d23955339814d748061bc94af970d9d = new TH1D("0d23955339814d748061bc94af970d9d","ZZ",1,0,300);
   0d23955339814d748061bc94af970d9d->SetBinContent(1,1.691716);
   0d23955339814d748061bc94af970d9d->SetBinContent(2,0.01346977);
   0d23955339814d748061bc94af970d9d->SetBinError(1,0.03011167);
   0d23955339814d748061bc94af970d9d->SetBinError(2,0.002672255);
   0d23955339814d748061bc94af970d9d->SetEntries(3156.349);

   ci = TColor::GetColor("#50a634");
   0d23955339814d748061bc94af970d9d->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   0d23955339814d748061bc94af970d9d->SetLineColor(ci);
   0d23955339814d748061bc94af970d9d->GetXaxis()->SetLabelFont(42);
   0d23955339814d748061bc94af970d9d->GetXaxis()->SetLabelSize(0.035);
   0d23955339814d748061bc94af970d9d->GetXaxis()->SetTitleSize(0.035);
   0d23955339814d748061bc94af970d9d->GetXaxis()->SetTitleFont(42);
   0d23955339814d748061bc94af970d9d->GetYaxis()->SetLabelFont(42);
   0d23955339814d748061bc94af970d9d->GetYaxis()->SetLabelSize(0.035);
   0d23955339814d748061bc94af970d9d->GetYaxis()->SetTitleSize(0.035);
   0d23955339814d748061bc94af970d9d->GetYaxis()->SetTitleFont(42);
   0d23955339814d748061bc94af970d9d->GetZaxis()->SetLabelFont(42);
   0d23955339814d748061bc94af970d9d->GetZaxis()->SetLabelSize(0.035);
   0d23955339814d748061bc94af970d9d->GetZaxis()->SetTitleSize(0.035);
   0d23955339814d748061bc94af970d9d->GetZaxis()->SetTitleFont(42);
   0d23955339814d748061bc94af970d9d->Add(0d23955339814d748061bc94af970d9d,"hist");
   
   TH1D *ccb5dfd1d004455f9b45e21c0131ca20 = new TH1D("ccb5dfd1d004455f9b45e21c0131ca20","Charge mis-id",1,0,300);
   ccb5dfd1d004455f9b45e21c0131ca20->SetBinContent(1,9.58061);
   ccb5dfd1d004455f9b45e21c0131ca20->SetBinContent(2,0.06303032);
   ccb5dfd1d004455f9b45e21c0131ca20->SetBinError(1,0.1321823);
   ccb5dfd1d004455f9b45e21c0131ca20->SetBinError(2,0.01205256);
   ccb5dfd1d004455f9b45e21c0131ca20->SetEntries(5254.525);

   ci = TColor::GetColor("#9999cc");
   ccb5dfd1d004455f9b45e21c0131ca20->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   ccb5dfd1d004455f9b45e21c0131ca20->SetLineColor(ci);
   ccb5dfd1d004455f9b45e21c0131ca20->SetMarkerStyle(20);
   ccb5dfd1d004455f9b45e21c0131ca20->GetXaxis()->SetLabelFont(42);
   ccb5dfd1d004455f9b45e21c0131ca20->GetXaxis()->SetLabelSize(0.035);
   ccb5dfd1d004455f9b45e21c0131ca20->GetXaxis()->SetTitleSize(0.035);
   ccb5dfd1d004455f9b45e21c0131ca20->GetXaxis()->SetTitleFont(42);
   ccb5dfd1d004455f9b45e21c0131ca20->GetYaxis()->SetLabelFont(42);
   ccb5dfd1d004455f9b45e21c0131ca20->GetYaxis()->SetLabelSize(0.035);
   ccb5dfd1d004455f9b45e21c0131ca20->GetYaxis()->SetTitleSize(0.035);
   ccb5dfd1d004455f9b45e21c0131ca20->GetYaxis()->SetTitleFont(42);
   ccb5dfd1d004455f9b45e21c0131ca20->GetZaxis()->SetLabelFont(42);
   ccb5dfd1d004455f9b45e21c0131ca20->GetZaxis()->SetLabelSize(0.035);
   ccb5dfd1d004455f9b45e21c0131ca20->GetZaxis()->SetTitleSize(0.035);
   ccb5dfd1d004455f9b45e21c0131ca20->GetZaxis()->SetTitleFont(42);
   0d23955339814d748061bc94af970d9d->Add(ccb5dfd1d004455f9b45e21c0131ca20,"hist");
   
   TH1D *2395480db8fa402dbf52ffb72f57796f = new TH1D("2395480db8fa402dbf52ffb72f57796f","WZ#rightarrow3l",1,0,300);
   2395480db8fa402dbf52ffb72f57796f->SetBinContent(1,27.48656);
   2395480db8fa402dbf52ffb72f57796f->SetBinContent(2,0.3268784);
   2395480db8fa402dbf52ffb72f57796f->SetBinError(1,0.5420574);
   2395480db8fa402dbf52ffb72f57796f->SetBinError(2,0.05960884);
   2395480db8fa402dbf52ffb72f57796f->SetEntries(2571.284);

   ci = TColor::GetColor("#dc322f");
   2395480db8fa402dbf52ffb72f57796f->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   2395480db8fa402dbf52ffb72f57796f->SetLineColor(ci);
   2395480db8fa402dbf52ffb72f57796f->GetXaxis()->SetLabelFont(42);
   2395480db8fa402dbf52ffb72f57796f->GetXaxis()->SetLabelSize(0.035);
   2395480db8fa402dbf52ffb72f57796f->GetXaxis()->SetTitleSize(0.035);
   2395480db8fa402dbf52ffb72f57796f->GetXaxis()->SetTitleFont(42);
   2395480db8fa402dbf52ffb72f57796f->GetYaxis()->SetLabelFont(42);
   2395480db8fa402dbf52ffb72f57796f->GetYaxis()->SetLabelSize(0.035);
   2395480db8fa402dbf52ffb72f57796f->GetYaxis()->SetTitleSize(0.035);
   2395480db8fa402dbf52ffb72f57796f->GetYaxis()->SetTitleFont(42);
   2395480db8fa402dbf52ffb72f57796f->GetZaxis()->SetLabelFont(42);
   2395480db8fa402dbf52ffb72f57796f->GetZaxis()->SetLabelSize(0.035);
   2395480db8fa402dbf52ffb72f57796f->GetZaxis()->SetTitleSize(0.035);
   2395480db8fa402dbf52ffb72f57796f->GetZaxis()->SetTitleFont(42);
   0d23955339814d748061bc94af970d9d->Add(2395480db8fa402dbf52ffb72f57796f,"hist");
   
   TH1D *40190ae20cc749adb448493a5c53e612 = new TH1D("40190ae20cc749adb448493a5c53e612","WZ#rightarrowl#tau#tau",1,0,300);
   40190ae20cc749adb448493a5c53e612->SetBinContent(1,10.01696);
   40190ae20cc749adb448493a5c53e612->SetBinContent(2,0.09260725);
   40190ae20cc749adb448493a5c53e612->SetBinError(1,0.3233447);
   40190ae20cc749adb448493a5c53e612->SetBinError(2,0.03171882);
   40190ae20cc749adb448493a5c53e612->SetEntries(959.7102);

   ci = TColor::GetColor("#268bd2");
   40190ae20cc749adb448493a5c53e612->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   40190ae20cc749adb448493a5c53e612->SetLineColor(ci);
   40190ae20cc749adb448493a5c53e612->GetXaxis()->SetLabelFont(42);
   40190ae20cc749adb448493a5c53e612->GetXaxis()->SetLabelSize(0.035);
   40190ae20cc749adb448493a5c53e612->GetXaxis()->SetTitleSize(0.035);
   40190ae20cc749adb448493a5c53e612->GetXaxis()->SetTitleFont(42);
   40190ae20cc749adb448493a5c53e612->GetYaxis()->SetLabelFont(42);
   40190ae20cc749adb448493a5c53e612->GetYaxis()->SetLabelSize(0.035);
   40190ae20cc749adb448493a5c53e612->GetYaxis()->SetTitleSize(0.035);
   40190ae20cc749adb448493a5c53e612->GetYaxis()->SetTitleFont(42);
   40190ae20cc749adb448493a5c53e612->GetZaxis()->SetLabelFont(42);
   40190ae20cc749adb448493a5c53e612->GetZaxis()->SetLabelSize(0.035);
   40190ae20cc749adb448493a5c53e612->GetZaxis()->SetTitleSize(0.035);
   40190ae20cc749adb448493a5c53e612->GetZaxis()->SetTitleFont(42);
   0d23955339814d748061bc94af970d9d->Add(40190ae20cc749adb448493a5c53e612,"hist");
   
   TH1D *7cd72e656bdf4313a178298451f756ec = new TH1D("7cd72e656bdf4313a178298451f756ec","Reducible bkg.",1,0,300);
   7cd72e656bdf4313a178298451f756ec->SetBinContent(0,1e-05);
   7cd72e656bdf4313a178298451f756ec->SetBinContent(1,263.1424);
   7cd72e656bdf4313a178298451f756ec->SetBinContent(2,1.401418);
   7cd72e656bdf4313a178298451f756ec->SetBinError(0,0.06807055);
   7cd72e656bdf4313a178298451f756ec->SetBinError(1,8.482221);
   7cd72e656bdf4313a178298451f756ec->SetBinError(2,0.5941717);
   7cd72e656bdf4313a178298451f756ec->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   7cd72e656bdf4313a178298451f756ec->SetFillColor(ci);
   7cd72e656bdf4313a178298451f756ec->SetMarkerStyle(20);
   7cd72e656bdf4313a178298451f756ec->GetXaxis()->SetLabelFont(42);
   7cd72e656bdf4313a178298451f756ec->GetXaxis()->SetLabelSize(0.035);
   7cd72e656bdf4313a178298451f756ec->GetXaxis()->SetTitleSize(0.035);
   7cd72e656bdf4313a178298451f756ec->GetXaxis()->SetTitleFont(42);
   7cd72e656bdf4313a178298451f756ec->GetYaxis()->SetLabelFont(42);
   7cd72e656bdf4313a178298451f756ec->GetYaxis()->SetLabelSize(0.035);
   7cd72e656bdf4313a178298451f756ec->GetYaxis()->SetTitleSize(0.035);
   7cd72e656bdf4313a178298451f756ec->GetYaxis()->SetTitleFont(42);
   7cd72e656bdf4313a178298451f756ec->GetZaxis()->SetLabelFont(42);
   7cd72e656bdf4313a178298451f756ec->GetZaxis()->SetLabelSize(0.035);
   7cd72e656bdf4313a178298451f756ec->GetZaxis()->SetTitleSize(0.035);
   7cd72e656bdf4313a178298451f756ec->GetZaxis()->SetTitleFont(42);
   0d23955339814d748061bc94af970d9d->Add(7cd72e656bdf4313a178298451f756ec,"hist");
   0d23955339814d748061bc94af970d9d->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("0d23955339814d748061bc94af970d9d","ZZ","f");

   ci = TColor::GetColor("#50a634");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#50a634");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ccb5dfd1d004455f9b45e21c0131ca20","Charge mis-id","f");

   ci = TColor::GetColor("#9999cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#9999cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2395480db8fa402dbf52ffb72f57796f","WZ#rightarrow3l","f");

   ci = TColor::GetColor("#dc322f");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#dc322f");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("40190ae20cc749adb448493a5c53e612","WZ#rightarrowl#tau#tau","f");

   ci = TColor::GetColor("#268bd2");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("7cd72e656bdf4313a178298451f756ec","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("66b9e28bf2b5471bb7c5dc0188be39ff","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *66b9e28bf2b5471bb7c5dc0188be39ff = new TH1D("66b9e28bf2b5471bb7c5dc0188be39ff","Bkg. Unc.",1,0,300);
   66b9e28bf2b5471bb7c5dc0188be39ff->SetBinContent(1,311.9183);
   66b9e28bf2b5471bb7c5dc0188be39ff->SetBinError(1,18.60424);
   66b9e28bf2b5471bb7c5dc0188be39ff->SetEntries(1);
   66b9e28bf2b5471bb7c5dc0188be39ff->SetFillColor(1);
   66b9e28bf2b5471bb7c5dc0188be39ff->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   66b9e28bf2b5471bb7c5dc0188be39ff->SetLineColor(ci);
   66b9e28bf2b5471bb7c5dc0188be39ff->SetMarkerSize(0);
   66b9e28bf2b5471bb7c5dc0188be39ff->GetXaxis()->SetLabelFont(42);
   66b9e28bf2b5471bb7c5dc0188be39ff->GetXaxis()->SetLabelSize(0.035);
   66b9e28bf2b5471bb7c5dc0188be39ff->GetXaxis()->SetTitleSize(0.035);
   66b9e28bf2b5471bb7c5dc0188be39ff->GetXaxis()->SetTitleFont(42);
   66b9e28bf2b5471bb7c5dc0188be39ff->GetYaxis()->SetLabelFont(42);
   66b9e28bf2b5471bb7c5dc0188be39ff->GetYaxis()->SetLabelSize(0.035);
   66b9e28bf2b5471bb7c5dc0188be39ff->GetYaxis()->SetTitleSize(0.035);
   66b9e28bf2b5471bb7c5dc0188be39ff->GetYaxis()->SetTitleFont(42);
   66b9e28bf2b5471bb7c5dc0188be39ff->GetZaxis()->SetLabelFont(42);
   66b9e28bf2b5471bb7c5dc0188be39ff->GetZaxis()->SetLabelSize(0.035);
   66b9e28bf2b5471bb7c5dc0188be39ff->GetZaxis()->SetTitleSize(0.035);
   66b9e28bf2b5471bb7c5dc0188be39ff->GetZaxis()->SetTitleFont(42);
   66b9e28bf2b5471bb7c5dc0188be39ff->Draw("hist pe2,same");
   
   TH1D *ab8d5b4a88a844cd9d4d23e19cbb8ad3 = new TH1D("ab8d5b4a88a844cd9d4d23e19cbb8ad3","Observed",1,0,300);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->SetBinContent(1,350);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->SetBinContent(2,2);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->SetBinError(1,18.70829);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->SetBinError(2,1.414214);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->SetEntries(350);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->SetLineColor(ci);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->SetMarkerStyle(20);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->GetXaxis()->SetLabelFont(42);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->GetXaxis()->SetLabelSize(0.035);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->GetXaxis()->SetTitleSize(0.035);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->GetXaxis()->SetTitleFont(42);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->GetYaxis()->SetLabelFont(42);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->GetYaxis()->SetLabelSize(0.035);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->GetYaxis()->SetTitleSize(0.035);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->GetYaxis()->SetTitleFont(42);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->GetZaxis()->SetLabelFont(42);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->GetZaxis()->SetLabelSize(0.035);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->GetZaxis()->SetTitleSize(0.035);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->GetZaxis()->SetTitleFont(42);
   ab8d5b4a88a844cd9d4d23e19cbb8ad3->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("0d23955339814d748061bc94af970d9d","ZZ","f");

   ci = TColor::GetColor("#50a634");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#50a634");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ccb5dfd1d004455f9b45e21c0131ca20","Charge mis-id","f");

   ci = TColor::GetColor("#9999cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#9999cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2395480db8fa402dbf52ffb72f57796f","WZ#rightarrow3l","f");

   ci = TColor::GetColor("#dc322f");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#dc322f");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("40190ae20cc749adb448493a5c53e612","WZ#rightarrowl#tau#tau","f");

   ci = TColor::GetColor("#268bd2");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("7cd72e656bdf4313a178298451f756ec","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("66b9e28bf2b5471bb7c5dc0188be39ff","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.18,0.96,"Mauro Verzetti Ph.D. Thesis 8 TeV 19.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   up->Modified();
   adsf->cd();
   adsf->Modified();
   adsf->cd();
   adsf->SetSelected(adsf);
}
