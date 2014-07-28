{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:01:17 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-0.7875001,337.5,7.0875);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *a3b124175c3e4142a9048b937a76b35c = new THStack();
   a3b124175c3e4142a9048b937a76b35c->SetName("a3b124175c3e4142a9048b937a76b35c");
   a3b124175c3e4142a9048b937a76b35c->SetTitle("WZ#rightarrow3l");
   a3b124175c3e4142a9048b937a76b35c->SetMaximum(6);
   
   TH1F *a3b124175c3e4142a9048b937a76b35c_stack_5 = new TH1F("a3b124175c3e4142a9048b937a76b35c_stack_5","WZ#rightarrow3l",1,0,300);
   a3b124175c3e4142a9048b937a76b35c_stack_5->SetMinimum(0);
   a3b124175c3e4142a9048b937a76b35c_stack_5->SetMaximum(6.3);
   a3b124175c3e4142a9048b937a76b35c_stack_5->SetDirectory(0);
   a3b124175c3e4142a9048b937a76b35c_stack_5->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   a3b124175c3e4142a9048b937a76b35c_stack_5->SetLineColor(ci);
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetXaxis()->SetLabelFont(42);
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetXaxis()->SetLabelSize(0.035);
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetXaxis()->SetTitleSize(0.035);
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetXaxis()->SetTitleFont(42);
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetYaxis()->SetTitle("Events");
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetYaxis()->SetLabelFont(42);
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetYaxis()->SetLabelSize(0.035);
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetYaxis()->SetTitleSize(0.035);
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetYaxis()->SetTitleFont(42);
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetZaxis()->SetLabelFont(42);
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetZaxis()->SetLabelSize(0.035);
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetZaxis()->SetTitleSize(0.035);
   a3b124175c3e4142a9048b937a76b35c_stack_5->GetZaxis()->SetTitleFont(42);
   a3b124175c3e4142a9048b937a76b35c->SetHistogram(a3b124175c3e4142a9048b937a76b35c_stack_5);
   
   
   TH1D *a3b124175c3e4142a9048b937a76b35c = new TH1D("a3b124175c3e4142a9048b937a76b35c","WZ#rightarrow3l",1,0,300);
   a3b124175c3e4142a9048b937a76b35c->SetBinContent(1,0.1784135);
   a3b124175c3e4142a9048b937a76b35c->SetBinError(1,0.03409523);
   a3b124175c3e4142a9048b937a76b35c->SetEntries(27.38218);

   ci = TColor::GetColor("#dc322f");
   a3b124175c3e4142a9048b937a76b35c->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   a3b124175c3e4142a9048b937a76b35c->SetLineColor(ci);
   a3b124175c3e4142a9048b937a76b35c->GetXaxis()->SetLabelFont(42);
   a3b124175c3e4142a9048b937a76b35c->GetXaxis()->SetLabelSize(0.035);
   a3b124175c3e4142a9048b937a76b35c->GetXaxis()->SetTitleSize(0.035);
   a3b124175c3e4142a9048b937a76b35c->GetXaxis()->SetTitleFont(42);
   a3b124175c3e4142a9048b937a76b35c->GetYaxis()->SetLabelFont(42);
   a3b124175c3e4142a9048b937a76b35c->GetYaxis()->SetLabelSize(0.035);
   a3b124175c3e4142a9048b937a76b35c->GetYaxis()->SetTitleSize(0.035);
   a3b124175c3e4142a9048b937a76b35c->GetYaxis()->SetTitleFont(42);
   a3b124175c3e4142a9048b937a76b35c->GetZaxis()->SetLabelFont(42);
   a3b124175c3e4142a9048b937a76b35c->GetZaxis()->SetLabelSize(0.035);
   a3b124175c3e4142a9048b937a76b35c->GetZaxis()->SetTitleSize(0.035);
   a3b124175c3e4142a9048b937a76b35c->GetZaxis()->SetTitleFont(42);
   a3b124175c3e4142a9048b937a76b35c->Add(a3b124175c3e4142a9048b937a76b35c,"hist");
   
   TH1D *ce8fc134f41b4a81bf4425487c604dc3 = new TH1D("ce8fc134f41b4a81bf4425487c604dc3","ZZ",1,0,300);
   ce8fc134f41b4a81bf4425487c604dc3->SetBinContent(1,0.2354758);
   ce8fc134f41b4a81bf4425487c604dc3->SetBinError(1,0.01351127);
   ce8fc134f41b4a81bf4425487c604dc3->SetEntries(303.7389);

   ci = TColor::GetColor("#50a634");
   ce8fc134f41b4a81bf4425487c604dc3->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   ce8fc134f41b4a81bf4425487c604dc3->SetLineColor(ci);
   ce8fc134f41b4a81bf4425487c604dc3->GetXaxis()->SetLabelFont(42);
   ce8fc134f41b4a81bf4425487c604dc3->GetXaxis()->SetLabelSize(0.035);
   ce8fc134f41b4a81bf4425487c604dc3->GetXaxis()->SetTitleSize(0.035);
   ce8fc134f41b4a81bf4425487c604dc3->GetXaxis()->SetTitleFont(42);
   ce8fc134f41b4a81bf4425487c604dc3->GetYaxis()->SetLabelFont(42);
   ce8fc134f41b4a81bf4425487c604dc3->GetYaxis()->SetLabelSize(0.035);
   ce8fc134f41b4a81bf4425487c604dc3->GetYaxis()->SetTitleSize(0.035);
   ce8fc134f41b4a81bf4425487c604dc3->GetYaxis()->SetTitleFont(42);
   ce8fc134f41b4a81bf4425487c604dc3->GetZaxis()->SetLabelFont(42);
   ce8fc134f41b4a81bf4425487c604dc3->GetZaxis()->SetLabelSize(0.035);
   ce8fc134f41b4a81bf4425487c604dc3->GetZaxis()->SetTitleSize(0.035);
   ce8fc134f41b4a81bf4425487c604dc3->GetZaxis()->SetTitleFont(42);
   a3b124175c3e4142a9048b937a76b35c->Add(ce8fc134f41b4a81bf4425487c604dc3,"hist");
   
   TH1D *b213012da1b744d0a42dee802a58f0e8 = new TH1D("b213012da1b744d0a42dee802a58f0e8","Charge mis-id",1,0,300);
   b213012da1b744d0a42dee802a58f0e8->SetBinContent(1,0.3855373);
   b213012da1b744d0a42dee802a58f0e8->SetBinError(1,0.0303735);
   b213012da1b744d0a42dee802a58f0e8->SetEntries(161.1346);

   ci = TColor::GetColor("#9999cc");
   b213012da1b744d0a42dee802a58f0e8->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   b213012da1b744d0a42dee802a58f0e8->SetLineColor(ci);
   b213012da1b744d0a42dee802a58f0e8->SetMarkerStyle(20);
   b213012da1b744d0a42dee802a58f0e8->GetXaxis()->SetLabelFont(42);
   b213012da1b744d0a42dee802a58f0e8->GetXaxis()->SetLabelSize(0.035);
   b213012da1b744d0a42dee802a58f0e8->GetXaxis()->SetTitleSize(0.035);
   b213012da1b744d0a42dee802a58f0e8->GetXaxis()->SetTitleFont(42);
   b213012da1b744d0a42dee802a58f0e8->GetYaxis()->SetLabelFont(42);
   b213012da1b744d0a42dee802a58f0e8->GetYaxis()->SetLabelSize(0.035);
   b213012da1b744d0a42dee802a58f0e8->GetYaxis()->SetTitleSize(0.035);
   b213012da1b744d0a42dee802a58f0e8->GetYaxis()->SetTitleFont(42);
   b213012da1b744d0a42dee802a58f0e8->GetZaxis()->SetLabelFont(42);
   b213012da1b744d0a42dee802a58f0e8->GetZaxis()->SetLabelSize(0.035);
   b213012da1b744d0a42dee802a58f0e8->GetZaxis()->SetTitleSize(0.035);
   b213012da1b744d0a42dee802a58f0e8->GetZaxis()->SetTitleFont(42);
   a3b124175c3e4142a9048b937a76b35c->Add(b213012da1b744d0a42dee802a58f0e8,"hist");
   
   TH1D *9c48b83735d148a0bacf5898965076c2 = new TH1D("9c48b83735d148a0bacf5898965076c2","WZ#rightarrowl#tau#tau",1,0,300);
   9c48b83735d148a0bacf5898965076c2->SetBinContent(1,1.084304);
   9c48b83735d148a0bacf5898965076c2->SetBinError(1,0.08365477);
   9c48b83735d148a0bacf5898965076c2->SetEntries(168.0045);

   ci = TColor::GetColor("#268bd2");
   9c48b83735d148a0bacf5898965076c2->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   9c48b83735d148a0bacf5898965076c2->SetLineColor(ci);
   9c48b83735d148a0bacf5898965076c2->GetXaxis()->SetLabelFont(42);
   9c48b83735d148a0bacf5898965076c2->GetXaxis()->SetLabelSize(0.035);
   9c48b83735d148a0bacf5898965076c2->GetXaxis()->SetTitleSize(0.035);
   9c48b83735d148a0bacf5898965076c2->GetXaxis()->SetTitleFont(42);
   9c48b83735d148a0bacf5898965076c2->GetYaxis()->SetLabelFont(42);
   9c48b83735d148a0bacf5898965076c2->GetYaxis()->SetLabelSize(0.035);
   9c48b83735d148a0bacf5898965076c2->GetYaxis()->SetTitleSize(0.035);
   9c48b83735d148a0bacf5898965076c2->GetYaxis()->SetTitleFont(42);
   9c48b83735d148a0bacf5898965076c2->GetZaxis()->SetLabelFont(42);
   9c48b83735d148a0bacf5898965076c2->GetZaxis()->SetLabelSize(0.035);
   9c48b83735d148a0bacf5898965076c2->GetZaxis()->SetTitleSize(0.035);
   9c48b83735d148a0bacf5898965076c2->GetZaxis()->SetTitleFont(42);
   a3b124175c3e4142a9048b937a76b35c->Add(9c48b83735d148a0bacf5898965076c2,"hist");
   
   TH1D *b4b29a04a5c24638b0affa29217bcb10 = new TH1D("b4b29a04a5c24638b0affa29217bcb10","Reducible bkg.",1,0,300);
   b4b29a04a5c24638b0affa29217bcb10->SetBinContent(0,1e-05);
   b4b29a04a5c24638b0affa29217bcb10->SetBinContent(1,1.139546);
   b4b29a04a5c24638b0affa29217bcb10->SetBinContent(2,0.000349219);
   b4b29a04a5c24638b0affa29217bcb10->SetBinError(0,0.01319375);
   b4b29a04a5c24638b0affa29217bcb10->SetBinError(1,0.294082);
   b4b29a04a5c24638b0affa29217bcb10->SetBinError(2,0.000349219);
   b4b29a04a5c24638b0affa29217bcb10->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   b4b29a04a5c24638b0affa29217bcb10->SetFillColor(ci);
   b4b29a04a5c24638b0affa29217bcb10->SetMarkerStyle(20);
   b4b29a04a5c24638b0affa29217bcb10->GetXaxis()->SetLabelFont(42);
   b4b29a04a5c24638b0affa29217bcb10->GetXaxis()->SetLabelSize(0.035);
   b4b29a04a5c24638b0affa29217bcb10->GetXaxis()->SetTitleSize(0.035);
   b4b29a04a5c24638b0affa29217bcb10->GetXaxis()->SetTitleFont(42);
   b4b29a04a5c24638b0affa29217bcb10->GetYaxis()->SetLabelFont(42);
   b4b29a04a5c24638b0affa29217bcb10->GetYaxis()->SetLabelSize(0.035);
   b4b29a04a5c24638b0affa29217bcb10->GetYaxis()->SetTitleSize(0.035);
   b4b29a04a5c24638b0affa29217bcb10->GetYaxis()->SetTitleFont(42);
   b4b29a04a5c24638b0affa29217bcb10->GetZaxis()->SetLabelFont(42);
   b4b29a04a5c24638b0affa29217bcb10->GetZaxis()->SetLabelSize(0.035);
   b4b29a04a5c24638b0affa29217bcb10->GetZaxis()->SetTitleSize(0.035);
   b4b29a04a5c24638b0affa29217bcb10->GetZaxis()->SetTitleFont(42);
   a3b124175c3e4142a9048b937a76b35c->Add(b4b29a04a5c24638b0affa29217bcb10,"hist");
   
   TH1D *dc1a3f84f3364bd4aedec03d0f664b33 = new TH1D("dc1a3f84f3364bd4aedec03d0f664b33","VH H#rightarrowWW",1,0,300);
   dc1a3f84f3364bd4aedec03d0f664b33->SetBinContent(1,0.00855704);
   dc1a3f84f3364bd4aedec03d0f664b33->SetBinError(1,0.001099629);
   dc1a3f84f3364bd4aedec03d0f664b33->SetEntries(60.55566);

   ci = TColor::GetColor("#cb4b16");
   dc1a3f84f3364bd4aedec03d0f664b33->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   dc1a3f84f3364bd4aedec03d0f664b33->SetLineColor(ci);
   dc1a3f84f3364bd4aedec03d0f664b33->GetXaxis()->SetLabelFont(42);
   dc1a3f84f3364bd4aedec03d0f664b33->GetXaxis()->SetLabelSize(0.035);
   dc1a3f84f3364bd4aedec03d0f664b33->GetXaxis()->SetTitleSize(0.035);
   dc1a3f84f3364bd4aedec03d0f664b33->GetXaxis()->SetTitleFont(42);
   dc1a3f84f3364bd4aedec03d0f664b33->GetYaxis()->SetLabelFont(42);
   dc1a3f84f3364bd4aedec03d0f664b33->GetYaxis()->SetLabelSize(0.035);
   dc1a3f84f3364bd4aedec03d0f664b33->GetYaxis()->SetTitleSize(0.035);
   dc1a3f84f3364bd4aedec03d0f664b33->GetYaxis()->SetTitleFont(42);
   dc1a3f84f3364bd4aedec03d0f664b33->GetZaxis()->SetLabelFont(42);
   dc1a3f84f3364bd4aedec03d0f664b33->GetZaxis()->SetLabelSize(0.035);
   dc1a3f84f3364bd4aedec03d0f664b33->GetZaxis()->SetTitleSize(0.035);
   dc1a3f84f3364bd4aedec03d0f664b33->GetZaxis()->SetTitleFont(42);
   a3b124175c3e4142a9048b937a76b35c->Add(dc1a3f84f3364bd4aedec03d0f664b33,"hist");
   
   TH1D *1dabe25448c64bc086dba6c12b4a10f7 = new TH1D("1dabe25448c64bc086dba6c12b4a10f7","(1#times) m_{H} = 125",1,0,300);
   1dabe25448c64bc086dba6c12b4a10f7->SetBinContent(1,0.1817865);
   1dabe25448c64bc086dba6c12b4a10f7->SetBinError(1,0.01410627);
   1dabe25448c64bc086dba6c12b4a10f7->SetEntries(166.073);
   1dabe25448c64bc086dba6c12b4a10f7->SetFillColor(1);
   1dabe25448c64bc086dba6c12b4a10f7->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   1dabe25448c64bc086dba6c12b4a10f7->SetLineColor(ci);
   1dabe25448c64bc086dba6c12b4a10f7->SetLineStyle(2);
   1dabe25448c64bc086dba6c12b4a10f7->SetLineWidth(4);
   1dabe25448c64bc086dba6c12b4a10f7->GetXaxis()->SetLabelFont(42);
   1dabe25448c64bc086dba6c12b4a10f7->GetXaxis()->SetLabelSize(0.035);
   1dabe25448c64bc086dba6c12b4a10f7->GetXaxis()->SetTitleSize(0.035);
   1dabe25448c64bc086dba6c12b4a10f7->GetXaxis()->SetTitleFont(42);
   1dabe25448c64bc086dba6c12b4a10f7->GetYaxis()->SetLabelFont(42);
   1dabe25448c64bc086dba6c12b4a10f7->GetYaxis()->SetLabelSize(0.035);
   1dabe25448c64bc086dba6c12b4a10f7->GetYaxis()->SetTitleSize(0.035);
   1dabe25448c64bc086dba6c12b4a10f7->GetYaxis()->SetTitleFont(42);
   1dabe25448c64bc086dba6c12b4a10f7->GetZaxis()->SetLabelFont(42);
   1dabe25448c64bc086dba6c12b4a10f7->GetZaxis()->SetLabelSize(0.035);
   1dabe25448c64bc086dba6c12b4a10f7->GetZaxis()->SetTitleSize(0.035);
   1dabe25448c64bc086dba6c12b4a10f7->GetZaxis()->SetTitleFont(42);
   a3b124175c3e4142a9048b937a76b35c->Add(1dabe25448c64bc086dba6c12b4a10f7,"hist");
   a3b124175c3e4142a9048b937a76b35c->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("a3b124175c3e4142a9048b937a76b35c","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("ce8fc134f41b4a81bf4425487c604dc3","ZZ","f");

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
   entry=leg->AddEntry("b213012da1b744d0a42dee802a58f0e8","Charge mis-id","f");

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
   entry=leg->AddEntry("9c48b83735d148a0bacf5898965076c2","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("b4b29a04a5c24638b0affa29217bcb10","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dc1a3f84f3364bd4aedec03d0f664b33","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("1dabe25448c64bc086dba6c12b4a10f7","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("78de776ef6eb40229b2bc717c5b27cde","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_2f13ef78458e46c4812911c7c5f9edc1","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *78de776ef6eb40229b2bc717c5b27cde = new TH1D("78de776ef6eb40229b2bc717c5b27cde","Bkg. Unc.",1,0,300);
   78de776ef6eb40229b2bc717c5b27cde->SetBinContent(1,3.023277);
   78de776ef6eb40229b2bc717c5b27cde->SetBinError(1,0.9248489);
   78de776ef6eb40229b2bc717c5b27cde->SetEntries(1);
   78de776ef6eb40229b2bc717c5b27cde->SetFillColor(1);
   78de776ef6eb40229b2bc717c5b27cde->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   78de776ef6eb40229b2bc717c5b27cde->SetLineColor(ci);
   78de776ef6eb40229b2bc717c5b27cde->SetMarkerSize(0);
   78de776ef6eb40229b2bc717c5b27cde->GetXaxis()->SetLabelFont(42);
   78de776ef6eb40229b2bc717c5b27cde->GetXaxis()->SetLabelSize(0.035);
   78de776ef6eb40229b2bc717c5b27cde->GetXaxis()->SetTitleSize(0.035);
   78de776ef6eb40229b2bc717c5b27cde->GetXaxis()->SetTitleFont(42);
   78de776ef6eb40229b2bc717c5b27cde->GetYaxis()->SetLabelFont(42);
   78de776ef6eb40229b2bc717c5b27cde->GetYaxis()->SetLabelSize(0.035);
   78de776ef6eb40229b2bc717c5b27cde->GetYaxis()->SetTitleSize(0.035);
   78de776ef6eb40229b2bc717c5b27cde->GetYaxis()->SetTitleFont(42);
   78de776ef6eb40229b2bc717c5b27cde->GetZaxis()->SetLabelFont(42);
   78de776ef6eb40229b2bc717c5b27cde->GetZaxis()->SetLabelSize(0.035);
   78de776ef6eb40229b2bc717c5b27cde->GetZaxis()->SetTitleSize(0.035);
   78de776ef6eb40229b2bc717c5b27cde->GetZaxis()->SetTitleFont(42);
   78de776ef6eb40229b2bc717c5b27cde->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_2f13ef78458e46c4812911c7c5f9edc1");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,5);
   grae->SetPointError(0,0,0,2.159724,3.382539);
   
   TH1F *Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15 = new TH1F("Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15","Observed",100,149.9,151.1);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->SetMinimum(2.286049);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->SetMaximum(8.936766);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->SetDirectory(0);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->SetLineColor(ci);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_2f13ef78458e46c4812911c7c5f9edc15);
   
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
   entry=leg->AddEntry("a3b124175c3e4142a9048b937a76b35c","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("ce8fc134f41b4a81bf4425487c604dc3","ZZ","f");

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
   entry=leg->AddEntry("b213012da1b744d0a42dee802a58f0e8","Charge mis-id","f");

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
   entry=leg->AddEntry("9c48b83735d148a0bacf5898965076c2","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("b4b29a04a5c24638b0affa29217bcb10","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dc1a3f84f3364bd4aedec03d0f664b33","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("1dabe25448c64bc086dba6c12b4a10f7","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("78de776ef6eb40229b2bc717c5b27cde","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_2f13ef78458e46c4812911c7c5f9edc1","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
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
