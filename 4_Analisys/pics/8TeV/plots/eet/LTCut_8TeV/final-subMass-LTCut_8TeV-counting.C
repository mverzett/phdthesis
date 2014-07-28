{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:12:05 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-2.522254,337.5,22.70029);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *dbced15114b34fa0a492676c0f3ca3a8 = new THStack();
   dbced15114b34fa0a492676c0f3ca3a8->SetName("dbced15114b34fa0a492676c0f3ca3a8");
   dbced15114b34fa0a492676c0f3ca3a8->SetTitle("WZ#rightarrow3l");
   dbced15114b34fa0a492676c0f3ca3a8->SetMaximum(19.21717);
   
   TH1F *dbced15114b34fa0a492676c0f3ca3a8_stack_1 = new TH1F("dbced15114b34fa0a492676c0f3ca3a8_stack_1","WZ#rightarrow3l",1,0,300);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->SetMinimum(0);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->SetMaximum(20.17803);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->SetDirectory(0);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->SetLineColor(ci);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetXaxis()->SetLabelFont(42);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetXaxis()->SetLabelSize(0.035);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetXaxis()->SetTitleSize(0.035);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetXaxis()->SetTitleFont(42);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetYaxis()->SetTitle("Events");
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetYaxis()->SetLabelFont(42);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetYaxis()->SetLabelSize(0.035);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetYaxis()->SetTitleSize(0.035);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetYaxis()->SetTitleFont(42);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetZaxis()->SetLabelFont(42);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetZaxis()->SetLabelSize(0.035);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetZaxis()->SetTitleSize(0.035);
   dbced15114b34fa0a492676c0f3ca3a8_stack_1->GetZaxis()->SetTitleFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->SetHistogram(dbced15114b34fa0a492676c0f3ca3a8_stack_1);
   
   
   TH1D *dbced15114b34fa0a492676c0f3ca3a8 = new TH1D("dbced15114b34fa0a492676c0f3ca3a8","WZ#rightarrow3l",1,0,300);
   dbced15114b34fa0a492676c0f3ca3a8->SetBinContent(1,0.5706147);
   dbced15114b34fa0a492676c0f3ca3a8->SetBinError(1,0.07353998);
   dbced15114b34fa0a492676c0f3ca3a8->SetEntries(60.20588);

   ci = TColor::GetColor("#dc322f");
   dbced15114b34fa0a492676c0f3ca3a8->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   dbced15114b34fa0a492676c0f3ca3a8->SetLineColor(ci);
   dbced15114b34fa0a492676c0f3ca3a8->GetXaxis()->SetLabelFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->GetXaxis()->SetLabelSize(0.035);
   dbced15114b34fa0a492676c0f3ca3a8->GetXaxis()->SetTitleSize(0.035);
   dbced15114b34fa0a492676c0f3ca3a8->GetXaxis()->SetTitleFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->GetYaxis()->SetLabelFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->GetYaxis()->SetLabelSize(0.035);
   dbced15114b34fa0a492676c0f3ca3a8->GetYaxis()->SetTitleSize(0.035);
   dbced15114b34fa0a492676c0f3ca3a8->GetYaxis()->SetTitleFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->GetZaxis()->SetLabelFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->GetZaxis()->SetLabelSize(0.035);
   dbced15114b34fa0a492676c0f3ca3a8->GetZaxis()->SetTitleSize(0.035);
   dbced15114b34fa0a492676c0f3ca3a8->GetZaxis()->SetTitleFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->Add(dbced15114b34fa0a492676c0f3ca3a8,"hist");
   
   TH1D *9a2971827ad54ea5856af25159d9e354 = new TH1D("9a2971827ad54ea5856af25159d9e354","ZZ",1,0,300);
   9a2971827ad54ea5856af25159d9e354->SetBinContent(1,0.4335607);
   9a2971827ad54ea5856af25159d9e354->SetBinContent(2,0.000959878);
   9a2971827ad54ea5856af25159d9e354->SetBinError(1,0.01435836);
   9a2971827ad54ea5856af25159d9e354->SetBinError(2,0.0006827117);
   9a2971827ad54ea5856af25159d9e354->SetEntries(911.7809);

   ci = TColor::GetColor("#50a634");
   9a2971827ad54ea5856af25159d9e354->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   9a2971827ad54ea5856af25159d9e354->SetLineColor(ci);
   9a2971827ad54ea5856af25159d9e354->GetXaxis()->SetLabelFont(42);
   9a2971827ad54ea5856af25159d9e354->GetXaxis()->SetLabelSize(0.035);
   9a2971827ad54ea5856af25159d9e354->GetXaxis()->SetTitleSize(0.035);
   9a2971827ad54ea5856af25159d9e354->GetXaxis()->SetTitleFont(42);
   9a2971827ad54ea5856af25159d9e354->GetYaxis()->SetLabelFont(42);
   9a2971827ad54ea5856af25159d9e354->GetYaxis()->SetLabelSize(0.035);
   9a2971827ad54ea5856af25159d9e354->GetYaxis()->SetTitleSize(0.035);
   9a2971827ad54ea5856af25159d9e354->GetYaxis()->SetTitleFont(42);
   9a2971827ad54ea5856af25159d9e354->GetZaxis()->SetLabelFont(42);
   9a2971827ad54ea5856af25159d9e354->GetZaxis()->SetLabelSize(0.035);
   9a2971827ad54ea5856af25159d9e354->GetZaxis()->SetTitleSize(0.035);
   9a2971827ad54ea5856af25159d9e354->GetZaxis()->SetTitleFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->Add(9a2971827ad54ea5856af25159d9e354,"hist");
   
   TH1D *b0643d6654314b249b0196b37ab802e9 = new TH1D("b0643d6654314b249b0196b37ab802e9","Charge mis-id",1,0,300);
   b0643d6654314b249b0196b37ab802e9->SetBinContent(1,1.58703);
   b0643d6654314b249b0196b37ab802e9->SetBinContent(2,0.004358273);
   b0643d6654314b249b0196b37ab802e9->SetBinError(1,0.05186776);
   b0643d6654314b249b0196b37ab802e9->SetBinError(2,0.002717697);
   b0643d6654314b249b0196b37ab802e9->SetEntries(938.2417);

   ci = TColor::GetColor("#9999cc");
   b0643d6654314b249b0196b37ab802e9->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   b0643d6654314b249b0196b37ab802e9->SetLineColor(ci);
   b0643d6654314b249b0196b37ab802e9->SetMarkerStyle(20);
   b0643d6654314b249b0196b37ab802e9->GetXaxis()->SetLabelFont(42);
   b0643d6654314b249b0196b37ab802e9->GetXaxis()->SetLabelSize(0.035);
   b0643d6654314b249b0196b37ab802e9->GetXaxis()->SetTitleSize(0.035);
   b0643d6654314b249b0196b37ab802e9->GetXaxis()->SetTitleFont(42);
   b0643d6654314b249b0196b37ab802e9->GetYaxis()->SetLabelFont(42);
   b0643d6654314b249b0196b37ab802e9->GetYaxis()->SetLabelSize(0.035);
   b0643d6654314b249b0196b37ab802e9->GetYaxis()->SetTitleSize(0.035);
   b0643d6654314b249b0196b37ab802e9->GetYaxis()->SetTitleFont(42);
   b0643d6654314b249b0196b37ab802e9->GetZaxis()->SetLabelFont(42);
   b0643d6654314b249b0196b37ab802e9->GetZaxis()->SetLabelSize(0.035);
   b0643d6654314b249b0196b37ab802e9->GetZaxis()->SetTitleSize(0.035);
   b0643d6654314b249b0196b37ab802e9->GetZaxis()->SetTitleFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->Add(b0643d6654314b249b0196b37ab802e9,"hist");
   
   TH1D *5c09ff088bc24213ab8faa97b91fee35 = new TH1D("5c09ff088bc24213ab8faa97b91fee35","WZ#rightarrowl#tau#tau",1,0,300);
   5c09ff088bc24213ab8faa97b91fee35->SetBinContent(1,4.994947);
   5c09ff088bc24213ab8faa97b91fee35->SetBinError(1,0.2201307);
   5c09ff088bc24213ab8faa97b91fee35->SetEntries(514.8737);

   ci = TColor::GetColor("#268bd2");
   5c09ff088bc24213ab8faa97b91fee35->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   5c09ff088bc24213ab8faa97b91fee35->SetLineColor(ci);
   5c09ff088bc24213ab8faa97b91fee35->GetXaxis()->SetLabelFont(42);
   5c09ff088bc24213ab8faa97b91fee35->GetXaxis()->SetLabelSize(0.035);
   5c09ff088bc24213ab8faa97b91fee35->GetXaxis()->SetTitleSize(0.035);
   5c09ff088bc24213ab8faa97b91fee35->GetXaxis()->SetTitleFont(42);
   5c09ff088bc24213ab8faa97b91fee35->GetYaxis()->SetLabelFont(42);
   5c09ff088bc24213ab8faa97b91fee35->GetYaxis()->SetLabelSize(0.035);
   5c09ff088bc24213ab8faa97b91fee35->GetYaxis()->SetTitleSize(0.035);
   5c09ff088bc24213ab8faa97b91fee35->GetYaxis()->SetTitleFont(42);
   5c09ff088bc24213ab8faa97b91fee35->GetZaxis()->SetLabelFont(42);
   5c09ff088bc24213ab8faa97b91fee35->GetZaxis()->SetLabelSize(0.035);
   5c09ff088bc24213ab8faa97b91fee35->GetZaxis()->SetTitleSize(0.035);
   5c09ff088bc24213ab8faa97b91fee35->GetZaxis()->SetTitleFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->Add(5c09ff088bc24213ab8faa97b91fee35,"hist");
   
   TH1D *3f10bbffabd44849b68e3adeac45b8c7 = new TH1D("3f10bbffabd44849b68e3adeac45b8c7","Reducible bkg.",1,0,300);
   3f10bbffabd44849b68e3adeac45b8c7->SetBinContent(0,1e-05);
   3f10bbffabd44849b68e3adeac45b8c7->SetBinContent(1,7.772019);
   3f10bbffabd44849b68e3adeac45b8c7->SetBinContent(2,0.03091503);
   3f10bbffabd44849b68e3adeac45b8c7->SetBinError(0,0.02476575);
   3f10bbffabd44849b68e3adeac45b8c7->SetBinError(1,0.9661106);
   3f10bbffabd44849b68e3adeac45b8c7->SetBinError(2,0.01634733);
   3f10bbffabd44849b68e3adeac45b8c7->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   3f10bbffabd44849b68e3adeac45b8c7->SetFillColor(ci);
   3f10bbffabd44849b68e3adeac45b8c7->SetMarkerStyle(20);
   3f10bbffabd44849b68e3adeac45b8c7->GetXaxis()->SetLabelFont(42);
   3f10bbffabd44849b68e3adeac45b8c7->GetXaxis()->SetLabelSize(0.035);
   3f10bbffabd44849b68e3adeac45b8c7->GetXaxis()->SetTitleSize(0.035);
   3f10bbffabd44849b68e3adeac45b8c7->GetXaxis()->SetTitleFont(42);
   3f10bbffabd44849b68e3adeac45b8c7->GetYaxis()->SetLabelFont(42);
   3f10bbffabd44849b68e3adeac45b8c7->GetYaxis()->SetLabelSize(0.035);
   3f10bbffabd44849b68e3adeac45b8c7->GetYaxis()->SetTitleSize(0.035);
   3f10bbffabd44849b68e3adeac45b8c7->GetYaxis()->SetTitleFont(42);
   3f10bbffabd44849b68e3adeac45b8c7->GetZaxis()->SetLabelFont(42);
   3f10bbffabd44849b68e3adeac45b8c7->GetZaxis()->SetLabelSize(0.035);
   3f10bbffabd44849b68e3adeac45b8c7->GetZaxis()->SetTitleSize(0.035);
   3f10bbffabd44849b68e3adeac45b8c7->GetZaxis()->SetTitleFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->Add(3f10bbffabd44849b68e3adeac45b8c7,"hist");
   
   TH1D *d7f887de6c8440c78cbbbc2b25851c53 = new TH1D("d7f887de6c8440c78cbbbc2b25851c53","VH H#rightarrowWW",1,0,300);
   d7f887de6c8440c78cbbbc2b25851c53->SetBinContent(1,0.03243933);
   d7f887de6c8440c78cbbbc2b25851c53->SetBinError(1,0.003893305);
   d7f887de6c8440c78cbbbc2b25851c53->SetEntries(69.42354);

   ci = TColor::GetColor("#cb4b16");
   d7f887de6c8440c78cbbbc2b25851c53->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   d7f887de6c8440c78cbbbc2b25851c53->SetLineColor(ci);
   d7f887de6c8440c78cbbbc2b25851c53->GetXaxis()->SetLabelFont(42);
   d7f887de6c8440c78cbbbc2b25851c53->GetXaxis()->SetLabelSize(0.035);
   d7f887de6c8440c78cbbbc2b25851c53->GetXaxis()->SetTitleSize(0.035);
   d7f887de6c8440c78cbbbc2b25851c53->GetXaxis()->SetTitleFont(42);
   d7f887de6c8440c78cbbbc2b25851c53->GetYaxis()->SetLabelFont(42);
   d7f887de6c8440c78cbbbc2b25851c53->GetYaxis()->SetLabelSize(0.035);
   d7f887de6c8440c78cbbbc2b25851c53->GetYaxis()->SetTitleSize(0.035);
   d7f887de6c8440c78cbbbc2b25851c53->GetYaxis()->SetTitleFont(42);
   d7f887de6c8440c78cbbbc2b25851c53->GetZaxis()->SetLabelFont(42);
   d7f887de6c8440c78cbbbc2b25851c53->GetZaxis()->SetLabelSize(0.035);
   d7f887de6c8440c78cbbbc2b25851c53->GetZaxis()->SetTitleSize(0.035);
   d7f887de6c8440c78cbbbc2b25851c53->GetZaxis()->SetTitleFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->Add(d7f887de6c8440c78cbbbc2b25851c53,"hist");
   
   TH1D *9261ea8cf94e4ed0a6400699844cf855 = new TH1D("9261ea8cf94e4ed0a6400699844cf855","(1#times) m_{H} = 125",1,0,300);
   9261ea8cf94e4ed0a6400699844cf855->SetBinContent(1,0.6237007);
   9261ea8cf94e4ed0a6400699844cf855->SetBinError(1,0.04613904);
   9261ea8cf94e4ed0a6400699844cf855->SetEntries(182.7323);
   9261ea8cf94e4ed0a6400699844cf855->SetFillColor(1);
   9261ea8cf94e4ed0a6400699844cf855->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   9261ea8cf94e4ed0a6400699844cf855->SetLineColor(ci);
   9261ea8cf94e4ed0a6400699844cf855->SetLineStyle(2);
   9261ea8cf94e4ed0a6400699844cf855->SetLineWidth(4);
   9261ea8cf94e4ed0a6400699844cf855->GetXaxis()->SetLabelFont(42);
   9261ea8cf94e4ed0a6400699844cf855->GetXaxis()->SetLabelSize(0.035);
   9261ea8cf94e4ed0a6400699844cf855->GetXaxis()->SetTitleSize(0.035);
   9261ea8cf94e4ed0a6400699844cf855->GetXaxis()->SetTitleFont(42);
   9261ea8cf94e4ed0a6400699844cf855->GetYaxis()->SetLabelFont(42);
   9261ea8cf94e4ed0a6400699844cf855->GetYaxis()->SetLabelSize(0.035);
   9261ea8cf94e4ed0a6400699844cf855->GetYaxis()->SetTitleSize(0.035);
   9261ea8cf94e4ed0a6400699844cf855->GetYaxis()->SetTitleFont(42);
   9261ea8cf94e4ed0a6400699844cf855->GetZaxis()->SetLabelFont(42);
   9261ea8cf94e4ed0a6400699844cf855->GetZaxis()->SetLabelSize(0.035);
   9261ea8cf94e4ed0a6400699844cf855->GetZaxis()->SetTitleSize(0.035);
   9261ea8cf94e4ed0a6400699844cf855->GetZaxis()->SetTitleFont(42);
   dbced15114b34fa0a492676c0f3ca3a8->Add(9261ea8cf94e4ed0a6400699844cf855,"hist");
   dbced15114b34fa0a492676c0f3ca3a8->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("dbced15114b34fa0a492676c0f3ca3a8","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("9a2971827ad54ea5856af25159d9e354","ZZ","f");

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
   entry=leg->AddEntry("b0643d6654314b249b0196b37ab802e9","Charge mis-id","f");

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
   entry=leg->AddEntry("5c09ff088bc24213ab8faa97b91fee35","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("3f10bbffabd44849b68e3adeac45b8c7","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("d7f887de6c8440c78cbbbc2b25851c53","VH H#rightarrowWW","f");

   ci = TColor::GetColor("#cb4b16");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cb4b16");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("9261ea8cf94e4ed0a6400699844cf855","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f52837ae13664c56ac6eff37efff4ebf","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_257e54d1b6f4421ea568e2e662325598","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *f52837ae13664c56ac6eff37efff4ebf = new TH1D("f52837ae13664c56ac6eff37efff4ebf","Bkg. Unc.",1,0,300);
   f52837ae13664c56ac6eff37efff4ebf->SetBinContent(1,15.35817);
   f52837ae13664c56ac6eff37efff4ebf->SetBinError(1,2.191864);
   f52837ae13664c56ac6eff37efff4ebf->SetEntries(1);
   f52837ae13664c56ac6eff37efff4ebf->SetFillColor(1);
   f52837ae13664c56ac6eff37efff4ebf->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   f52837ae13664c56ac6eff37efff4ebf->SetLineColor(ci);
   f52837ae13664c56ac6eff37efff4ebf->SetMarkerSize(0);
   f52837ae13664c56ac6eff37efff4ebf->GetXaxis()->SetLabelFont(42);
   f52837ae13664c56ac6eff37efff4ebf->GetXaxis()->SetLabelSize(0.035);
   f52837ae13664c56ac6eff37efff4ebf->GetXaxis()->SetTitleSize(0.035);
   f52837ae13664c56ac6eff37efff4ebf->GetXaxis()->SetTitleFont(42);
   f52837ae13664c56ac6eff37efff4ebf->GetYaxis()->SetLabelFont(42);
   f52837ae13664c56ac6eff37efff4ebf->GetYaxis()->SetLabelSize(0.035);
   f52837ae13664c56ac6eff37efff4ebf->GetYaxis()->SetTitleSize(0.035);
   f52837ae13664c56ac6eff37efff4ebf->GetYaxis()->SetTitleFont(42);
   f52837ae13664c56ac6eff37efff4ebf->GetZaxis()->SetLabelFont(42);
   f52837ae13664c56ac6eff37efff4ebf->GetZaxis()->SetLabelSize(0.035);
   f52837ae13664c56ac6eff37efff4ebf->GetZaxis()->SetTitleSize(0.035);
   f52837ae13664c56ac6eff37efff4ebf->GetZaxis()->SetTitleFont(42);
   f52837ae13664c56ac6eff37efff4ebf->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_257e54d1b6f4421ea568e2e662325598");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,15);
   grae->SetPointError(0,0,0,3.829449,4.958839);
   
   TH1F *Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981 = new TH1F("Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981","Observed",100,149.9,151.1);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->SetMinimum(10.29172);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->SetMaximum(20.83767);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->SetDirectory(0);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->SetLineColor(ci);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_257e54d1b6f4421ea568e2e6623255981);
   
   grae->Draw("pe,");
   
   leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("dbced15114b34fa0a492676c0f3ca3a8","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("9a2971827ad54ea5856af25159d9e354","ZZ","f");

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
   entry=leg->AddEntry("b0643d6654314b249b0196b37ab802e9","Charge mis-id","f");

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
   entry=leg->AddEntry("5c09ff088bc24213ab8faa97b91fee35","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("3f10bbffabd44849b68e3adeac45b8c7","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("d7f887de6c8440c78cbbbc2b25851c53","VH H#rightarrowWW","f");

   ci = TColor::GetColor("#cb4b16");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cb4b16");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("9261ea8cf94e4ed0a6400699844cf855","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f52837ae13664c56ac6eff37efff4ebf","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_257e54d1b6f4421ea568e2e662325598","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
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
