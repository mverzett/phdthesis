{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 03:58:50 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-17.0625,337.5,153.5625);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *a5900276fe334407b532e0cf3ffb9d16 = new THStack();
   a5900276fe334407b532e0cf3ffb9d16->SetName("a5900276fe334407b532e0cf3ffb9d16");
   a5900276fe334407b532e0cf3ffb9d16->SetTitle("ZZ");
   a5900276fe334407b532e0cf3ffb9d16->SetMaximum(130);
   
   TH1F *a5900276fe334407b532e0cf3ffb9d16_stack_15 = new TH1F("a5900276fe334407b532e0cf3ffb9d16_stack_15","ZZ",1,0,300);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->SetMinimum(0);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->SetMaximum(136.5);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->SetDirectory(0);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   a5900276fe334407b532e0cf3ffb9d16_stack_15->SetLineColor(ci);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetXaxis()->SetLabelFont(42);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetXaxis()->SetLabelSize(0.035);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetXaxis()->SetTitleSize(0.035);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetXaxis()->SetTitleFont(42);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetYaxis()->SetTitle("Events");
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetYaxis()->SetLabelFont(42);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetYaxis()->SetLabelSize(0.035);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetYaxis()->SetTitleSize(0.035);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetYaxis()->SetTitleFont(42);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetZaxis()->SetLabelFont(42);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetZaxis()->SetLabelSize(0.035);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetZaxis()->SetTitleSize(0.035);
   a5900276fe334407b532e0cf3ffb9d16_stack_15->GetZaxis()->SetTitleFont(42);
   a5900276fe334407b532e0cf3ffb9d16->SetHistogram(a5900276fe334407b532e0cf3ffb9d16_stack_15);
   
   
   TH1D *a5900276fe334407b532e0cf3ffb9d16 = new TH1D("a5900276fe334407b532e0cf3ffb9d16","ZZ",1,0,300);
   a5900276fe334407b532e0cf3ffb9d16->SetBinContent(1,0.8102282);
   a5900276fe334407b532e0cf3ffb9d16->SetBinContent(2,0.006910645);
   a5900276fe334407b532e0cf3ffb9d16->SetBinError(1,0.02531646);
   a5900276fe334407b532e0cf3ffb9d16->SetBinError(2,0.002353327);
   a5900276fe334407b532e0cf3ffb9d16->SetEntries(1024.256);

   ci = TColor::GetColor("#50a634");
   a5900276fe334407b532e0cf3ffb9d16->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   a5900276fe334407b532e0cf3ffb9d16->SetLineColor(ci);
   a5900276fe334407b532e0cf3ffb9d16->GetXaxis()->SetLabelFont(42);
   a5900276fe334407b532e0cf3ffb9d16->GetXaxis()->SetLabelSize(0.035);
   a5900276fe334407b532e0cf3ffb9d16->GetXaxis()->SetTitleSize(0.035);
   a5900276fe334407b532e0cf3ffb9d16->GetXaxis()->SetTitleFont(42);
   a5900276fe334407b532e0cf3ffb9d16->GetYaxis()->SetLabelFont(42);
   a5900276fe334407b532e0cf3ffb9d16->GetYaxis()->SetLabelSize(0.035);
   a5900276fe334407b532e0cf3ffb9d16->GetYaxis()->SetTitleSize(0.035);
   a5900276fe334407b532e0cf3ffb9d16->GetYaxis()->SetTitleFont(42);
   a5900276fe334407b532e0cf3ffb9d16->GetZaxis()->SetLabelFont(42);
   a5900276fe334407b532e0cf3ffb9d16->GetZaxis()->SetLabelSize(0.035);
   a5900276fe334407b532e0cf3ffb9d16->GetZaxis()->SetTitleSize(0.035);
   a5900276fe334407b532e0cf3ffb9d16->GetZaxis()->SetTitleFont(42);
   a5900276fe334407b532e0cf3ffb9d16->Add(a5900276fe334407b532e0cf3ffb9d16,"hist");
   
   TH1D *97e3900ac1af440a94ce252cec704334 = new TH1D("97e3900ac1af440a94ce252cec704334","Charge mis-id",1,0,300);
   97e3900ac1af440a94ce252cec704334->SetBinContent(1,2.130782);
   97e3900ac1af440a94ce252cec704334->SetBinContent(2,0.006844862);
   97e3900ac1af440a94ce252cec704334->SetBinError(1,0.07020454);
   97e3900ac1af440a94ce252cec704334->SetBinError(2,0.003546464);
   97e3900ac1af440a94ce252cec704334->SetEntries(921.9579);

   ci = TColor::GetColor("#9999cc");
   97e3900ac1af440a94ce252cec704334->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   97e3900ac1af440a94ce252cec704334->SetLineColor(ci);
   97e3900ac1af440a94ce252cec704334->SetMarkerStyle(20);
   97e3900ac1af440a94ce252cec704334->GetXaxis()->SetLabelFont(42);
   97e3900ac1af440a94ce252cec704334->GetXaxis()->SetLabelSize(0.035);
   97e3900ac1af440a94ce252cec704334->GetXaxis()->SetTitleSize(0.035);
   97e3900ac1af440a94ce252cec704334->GetXaxis()->SetTitleFont(42);
   97e3900ac1af440a94ce252cec704334->GetYaxis()->SetLabelFont(42);
   97e3900ac1af440a94ce252cec704334->GetYaxis()->SetLabelSize(0.035);
   97e3900ac1af440a94ce252cec704334->GetYaxis()->SetTitleSize(0.035);
   97e3900ac1af440a94ce252cec704334->GetYaxis()->SetTitleFont(42);
   97e3900ac1af440a94ce252cec704334->GetZaxis()->SetLabelFont(42);
   97e3900ac1af440a94ce252cec704334->GetZaxis()->SetLabelSize(0.035);
   97e3900ac1af440a94ce252cec704334->GetZaxis()->SetTitleSize(0.035);
   97e3900ac1af440a94ce252cec704334->GetZaxis()->SetTitleFont(42);
   a5900276fe334407b532e0cf3ffb9d16->Add(97e3900ac1af440a94ce252cec704334,"hist");
   
   TH1D *7a5e0409d2374b78b2b13bc0e0658aac = new TH1D("7a5e0409d2374b78b2b13bc0e0658aac","WZ#rightarrow3l",1,0,300);
   7a5e0409d2374b78b2b13bc0e0658aac->SetBinContent(1,9.568695);
   7a5e0409d2374b78b2b13bc0e0658aac->SetBinContent(2,0.1503489);
   7a5e0409d2374b78b2b13bc0e0658aac->SetBinError(1,0.2528123);
   7a5e0409d2374b78b2b13bc0e0658aac->SetBinError(2,0.0325705);
   7a5e0409d2374b78b2b13bc0e0658aac->SetEntries(1432.548);

   ci = TColor::GetColor("#dc322f");
   7a5e0409d2374b78b2b13bc0e0658aac->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   7a5e0409d2374b78b2b13bc0e0658aac->SetLineColor(ci);
   7a5e0409d2374b78b2b13bc0e0658aac->GetXaxis()->SetLabelFont(42);
   7a5e0409d2374b78b2b13bc0e0658aac->GetXaxis()->SetLabelSize(0.035);
   7a5e0409d2374b78b2b13bc0e0658aac->GetXaxis()->SetTitleSize(0.035);
   7a5e0409d2374b78b2b13bc0e0658aac->GetXaxis()->SetTitleFont(42);
   7a5e0409d2374b78b2b13bc0e0658aac->GetYaxis()->SetLabelFont(42);
   7a5e0409d2374b78b2b13bc0e0658aac->GetYaxis()->SetLabelSize(0.035);
   7a5e0409d2374b78b2b13bc0e0658aac->GetYaxis()->SetTitleSize(0.035);
   7a5e0409d2374b78b2b13bc0e0658aac->GetYaxis()->SetTitleFont(42);
   7a5e0409d2374b78b2b13bc0e0658aac->GetZaxis()->SetLabelFont(42);
   7a5e0409d2374b78b2b13bc0e0658aac->GetZaxis()->SetLabelSize(0.035);
   7a5e0409d2374b78b2b13bc0e0658aac->GetZaxis()->SetTitleSize(0.035);
   7a5e0409d2374b78b2b13bc0e0658aac->GetZaxis()->SetTitleFont(42);
   a5900276fe334407b532e0cf3ffb9d16->Add(7a5e0409d2374b78b2b13bc0e0658aac,"hist");
   
   TH1D *04cd30c9406a47b6945266d9cb452370 = new TH1D("04cd30c9406a47b6945266d9cb452370","WZ#rightarrowl#tau#tau",1,0,300);
   04cd30c9406a47b6945266d9cb452370->SetBinContent(1,4.011403);
   04cd30c9406a47b6945266d9cb452370->SetBinContent(2,6.469742e-06);
   04cd30c9406a47b6945266d9cb452370->SetBinError(1,0.1629518);
   04cd30c9406a47b6945266d9cb452370->SetBinError(2,6.469742e-06);
   04cd30c9406a47b6945266d9cb452370->SetEntries(606.0026);

   ci = TColor::GetColor("#268bd2");
   04cd30c9406a47b6945266d9cb452370->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   04cd30c9406a47b6945266d9cb452370->SetLineColor(ci);
   04cd30c9406a47b6945266d9cb452370->GetXaxis()->SetLabelFont(42);
   04cd30c9406a47b6945266d9cb452370->GetXaxis()->SetLabelSize(0.035);
   04cd30c9406a47b6945266d9cb452370->GetXaxis()->SetTitleSize(0.035);
   04cd30c9406a47b6945266d9cb452370->GetXaxis()->SetTitleFont(42);
   04cd30c9406a47b6945266d9cb452370->GetYaxis()->SetLabelFont(42);
   04cd30c9406a47b6945266d9cb452370->GetYaxis()->SetLabelSize(0.035);
   04cd30c9406a47b6945266d9cb452370->GetYaxis()->SetTitleSize(0.035);
   04cd30c9406a47b6945266d9cb452370->GetYaxis()->SetTitleFont(42);
   04cd30c9406a47b6945266d9cb452370->GetZaxis()->SetLabelFont(42);
   04cd30c9406a47b6945266d9cb452370->GetZaxis()->SetLabelSize(0.035);
   04cd30c9406a47b6945266d9cb452370->GetZaxis()->SetTitleSize(0.035);
   04cd30c9406a47b6945266d9cb452370->GetZaxis()->SetTitleFont(42);
   a5900276fe334407b532e0cf3ffb9d16->Add(04cd30c9406a47b6945266d9cb452370,"hist");
   
   TH1D *43c165891c674a4993d1422581c69a4c = new TH1D("43c165891c674a4993d1422581c69a4c","Reducible bkg.",1,0,300);
   43c165891c674a4993d1422581c69a4c->SetBinContent(0,1e-05);
   43c165891c674a4993d1422581c69a4c->SetBinContent(1,31.34496);
   43c165891c674a4993d1422581c69a4c->SetBinContent(2,0.4573899);
   43c165891c674a4993d1422581c69a4c->SetBinError(0,0.02185275);
   43c165891c674a4993d1422581c69a4c->SetBinError(1,1.837531);
   43c165891c674a4993d1422581c69a4c->SetBinError(2,0.1837964);
   43c165891c674a4993d1422581c69a4c->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   43c165891c674a4993d1422581c69a4c->SetFillColor(ci);
   43c165891c674a4993d1422581c69a4c->SetMarkerStyle(20);
   43c165891c674a4993d1422581c69a4c->GetXaxis()->SetLabelFont(42);
   43c165891c674a4993d1422581c69a4c->GetXaxis()->SetLabelSize(0.035);
   43c165891c674a4993d1422581c69a4c->GetXaxis()->SetTitleSize(0.035);
   43c165891c674a4993d1422581c69a4c->GetXaxis()->SetTitleFont(42);
   43c165891c674a4993d1422581c69a4c->GetYaxis()->SetLabelFont(42);
   43c165891c674a4993d1422581c69a4c->GetYaxis()->SetLabelSize(0.035);
   43c165891c674a4993d1422581c69a4c->GetYaxis()->SetTitleSize(0.035);
   43c165891c674a4993d1422581c69a4c->GetYaxis()->SetTitleFont(42);
   43c165891c674a4993d1422581c69a4c->GetZaxis()->SetLabelFont(42);
   43c165891c674a4993d1422581c69a4c->GetZaxis()->SetLabelSize(0.035);
   43c165891c674a4993d1422581c69a4c->GetZaxis()->SetTitleSize(0.035);
   43c165891c674a4993d1422581c69a4c->GetZaxis()->SetTitleFont(42);
   a5900276fe334407b532e0cf3ffb9d16->Add(43c165891c674a4993d1422581c69a4c,"hist");
   a5900276fe334407b532e0cf3ffb9d16->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("a5900276fe334407b532e0cf3ffb9d16","ZZ","f");

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
   entry=leg->AddEntry("97e3900ac1af440a94ce252cec704334","Charge mis-id","f");

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
   entry=leg->AddEntry("7a5e0409d2374b78b2b13bc0e0658aac","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("04cd30c9406a47b6945266d9cb452370","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("43c165891c674a4993d1422581c69a4c","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("234c9ab8eeb34bd5ac55a22f30fcde16","Bkg. Unc.","f");
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
   
   TH1D *234c9ab8eeb34bd5ac55a22f30fcde16 = new TH1D("234c9ab8eeb34bd5ac55a22f30fcde16","Bkg. Unc.",1,0,300);
   234c9ab8eeb34bd5ac55a22f30fcde16->SetBinContent(1,47.86606);
   234c9ab8eeb34bd5ac55a22f30fcde16->SetBinError(1,2.512717);
   234c9ab8eeb34bd5ac55a22f30fcde16->SetEntries(1);
   234c9ab8eeb34bd5ac55a22f30fcde16->SetFillColor(1);
   234c9ab8eeb34bd5ac55a22f30fcde16->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   234c9ab8eeb34bd5ac55a22f30fcde16->SetLineColor(ci);
   234c9ab8eeb34bd5ac55a22f30fcde16->SetMarkerSize(0);
   234c9ab8eeb34bd5ac55a22f30fcde16->GetXaxis()->SetLabelFont(42);
   234c9ab8eeb34bd5ac55a22f30fcde16->GetXaxis()->SetLabelSize(0.035);
   234c9ab8eeb34bd5ac55a22f30fcde16->GetXaxis()->SetTitleSize(0.035);
   234c9ab8eeb34bd5ac55a22f30fcde16->GetXaxis()->SetTitleFont(42);
   234c9ab8eeb34bd5ac55a22f30fcde16->GetYaxis()->SetLabelFont(42);
   234c9ab8eeb34bd5ac55a22f30fcde16->GetYaxis()->SetLabelSize(0.035);
   234c9ab8eeb34bd5ac55a22f30fcde16->GetYaxis()->SetTitleSize(0.035);
   234c9ab8eeb34bd5ac55a22f30fcde16->GetYaxis()->SetTitleFont(42);
   234c9ab8eeb34bd5ac55a22f30fcde16->GetZaxis()->SetLabelFont(42);
   234c9ab8eeb34bd5ac55a22f30fcde16->GetZaxis()->SetLabelSize(0.035);
   234c9ab8eeb34bd5ac55a22f30fcde16->GetZaxis()->SetTitleSize(0.035);
   234c9ab8eeb34bd5ac55a22f30fcde16->GetZaxis()->SetTitleFont(42);
   234c9ab8eeb34bd5ac55a22f30fcde16->Draw("hist pe2,same");
   
   TH1D *1d1c34eba6314a789bc1cef6eb7909fc = new TH1D("1d1c34eba6314a789bc1cef6eb7909fc","Observed",1,0,300);
   1d1c34eba6314a789bc1cef6eb7909fc->SetBinContent(1,65);
   1d1c34eba6314a789bc1cef6eb7909fc->SetBinError(1,8.062258);
   1d1c34eba6314a789bc1cef6eb7909fc->SetEntries(65);
   1d1c34eba6314a789bc1cef6eb7909fc->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   1d1c34eba6314a789bc1cef6eb7909fc->SetLineColor(ci);
   1d1c34eba6314a789bc1cef6eb7909fc->SetMarkerStyle(20);
   1d1c34eba6314a789bc1cef6eb7909fc->GetXaxis()->SetLabelFont(42);
   1d1c34eba6314a789bc1cef6eb7909fc->GetXaxis()->SetLabelSize(0.035);
   1d1c34eba6314a789bc1cef6eb7909fc->GetXaxis()->SetTitleSize(0.035);
   1d1c34eba6314a789bc1cef6eb7909fc->GetXaxis()->SetTitleFont(42);
   1d1c34eba6314a789bc1cef6eb7909fc->GetYaxis()->SetLabelFont(42);
   1d1c34eba6314a789bc1cef6eb7909fc->GetYaxis()->SetLabelSize(0.035);
   1d1c34eba6314a789bc1cef6eb7909fc->GetYaxis()->SetTitleSize(0.035);
   1d1c34eba6314a789bc1cef6eb7909fc->GetYaxis()->SetTitleFont(42);
   1d1c34eba6314a789bc1cef6eb7909fc->GetZaxis()->SetLabelFont(42);
   1d1c34eba6314a789bc1cef6eb7909fc->GetZaxis()->SetLabelSize(0.035);
   1d1c34eba6314a789bc1cef6eb7909fc->GetZaxis()->SetTitleSize(0.035);
   1d1c34eba6314a789bc1cef6eb7909fc->GetZaxis()->SetTitleFont(42);
   1d1c34eba6314a789bc1cef6eb7909fc->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("a5900276fe334407b532e0cf3ffb9d16","ZZ","f");

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
   entry=leg->AddEntry("97e3900ac1af440a94ce252cec704334","Charge mis-id","f");

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
   entry=leg->AddEntry("7a5e0409d2374b78b2b13bc0e0658aac","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("04cd30c9406a47b6945266d9cb452370","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("43c165891c674a4993d1422581c69a4c","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("234c9ab8eeb34bd5ac55a22f30fcde16","Bkg. Unc.","f");
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
   TLatex *   tex = new TLatex(0.18,0.96,"Mauro Verzetti Ph.D. Thesis 7 TeV 5.0 fb^{-1}");
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
