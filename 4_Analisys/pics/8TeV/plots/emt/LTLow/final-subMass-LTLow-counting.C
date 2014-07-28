{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:05:34 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-3.78,337.5,34.02);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *e66a807ba88e40c08e63e13dcdc81870 = new THStack();
   e66a807ba88e40c08e63e13dcdc81870->SetName("e66a807ba88e40c08e63e13dcdc81870");
   e66a807ba88e40c08e63e13dcdc81870->SetTitle("WZ#rightarrow3l");
   e66a807ba88e40c08e63e13dcdc81870->SetMaximum(28.8);
   
   TH1F *e66a807ba88e40c08e63e13dcdc81870_stack_5 = new TH1F("e66a807ba88e40c08e63e13dcdc81870_stack_5","WZ#rightarrow3l",1,0,300);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->SetMinimum(0);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->SetMaximum(30.24);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->SetDirectory(0);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   e66a807ba88e40c08e63e13dcdc81870_stack_5->SetLineColor(ci);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetXaxis()->SetLabelFont(42);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetXaxis()->SetLabelSize(0.035);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetXaxis()->SetTitleSize(0.035);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetXaxis()->SetTitleFont(42);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetYaxis()->SetTitle("Events");
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetYaxis()->SetLabelFont(42);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetYaxis()->SetLabelSize(0.035);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetYaxis()->SetTitleSize(0.035);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetYaxis()->SetTitleFont(42);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetZaxis()->SetLabelFont(42);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetZaxis()->SetLabelSize(0.035);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetZaxis()->SetTitleSize(0.035);
   e66a807ba88e40c08e63e13dcdc81870_stack_5->GetZaxis()->SetTitleFont(42);
   e66a807ba88e40c08e63e13dcdc81870->SetHistogram(e66a807ba88e40c08e63e13dcdc81870_stack_5);
   
   
   TH1D *e66a807ba88e40c08e63e13dcdc81870 = new TH1D("e66a807ba88e40c08e63e13dcdc81870","WZ#rightarrow3l",1,0,300);
   e66a807ba88e40c08e63e13dcdc81870->SetBinContent(1,0.6442061);
   e66a807ba88e40c08e63e13dcdc81870->SetBinError(1,0.07911776);
   e66a807ba88e40c08e63e13dcdc81870->SetEntries(66.2982);

   ci = TColor::GetColor("#dc322f");
   e66a807ba88e40c08e63e13dcdc81870->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   e66a807ba88e40c08e63e13dcdc81870->SetLineColor(ci);
   e66a807ba88e40c08e63e13dcdc81870->GetXaxis()->SetLabelFont(42);
   e66a807ba88e40c08e63e13dcdc81870->GetXaxis()->SetLabelSize(0.035);
   e66a807ba88e40c08e63e13dcdc81870->GetXaxis()->SetTitleSize(0.035);
   e66a807ba88e40c08e63e13dcdc81870->GetXaxis()->SetTitleFont(42);
   e66a807ba88e40c08e63e13dcdc81870->GetYaxis()->SetLabelFont(42);
   e66a807ba88e40c08e63e13dcdc81870->GetYaxis()->SetLabelSize(0.035);
   e66a807ba88e40c08e63e13dcdc81870->GetYaxis()->SetTitleSize(0.035);
   e66a807ba88e40c08e63e13dcdc81870->GetYaxis()->SetTitleFont(42);
   e66a807ba88e40c08e63e13dcdc81870->GetZaxis()->SetLabelFont(42);
   e66a807ba88e40c08e63e13dcdc81870->GetZaxis()->SetLabelSize(0.035);
   e66a807ba88e40c08e63e13dcdc81870->GetZaxis()->SetTitleSize(0.035);
   e66a807ba88e40c08e63e13dcdc81870->GetZaxis()->SetTitleFont(42);
   e66a807ba88e40c08e63e13dcdc81870->Add(e66a807ba88e40c08e63e13dcdc81870,"hist");
   
   TH1D *5a731d60bfa24d4aaa853aadaca088d5 = new TH1D("5a731d60bfa24d4aaa853aadaca088d5","ZZ",1,0,300);
   5a731d60bfa24d4aaa853aadaca088d5->SetBinContent(1,0.7118346);
   5a731d60bfa24d4aaa853aadaca088d5->SetBinError(1,0.01926481);
   5a731d60bfa24d4aaa853aadaca088d5->SetEntries(1365.302);

   ci = TColor::GetColor("#50a634");
   5a731d60bfa24d4aaa853aadaca088d5->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   5a731d60bfa24d4aaa853aadaca088d5->SetLineColor(ci);
   5a731d60bfa24d4aaa853aadaca088d5->GetXaxis()->SetLabelFont(42);
   5a731d60bfa24d4aaa853aadaca088d5->GetXaxis()->SetLabelSize(0.035);
   5a731d60bfa24d4aaa853aadaca088d5->GetXaxis()->SetTitleSize(0.035);
   5a731d60bfa24d4aaa853aadaca088d5->GetXaxis()->SetTitleFont(42);
   5a731d60bfa24d4aaa853aadaca088d5->GetYaxis()->SetLabelFont(42);
   5a731d60bfa24d4aaa853aadaca088d5->GetYaxis()->SetLabelSize(0.035);
   5a731d60bfa24d4aaa853aadaca088d5->GetYaxis()->SetTitleSize(0.035);
   5a731d60bfa24d4aaa853aadaca088d5->GetYaxis()->SetTitleFont(42);
   5a731d60bfa24d4aaa853aadaca088d5->GetZaxis()->SetLabelFont(42);
   5a731d60bfa24d4aaa853aadaca088d5->GetZaxis()->SetLabelSize(0.035);
   5a731d60bfa24d4aaa853aadaca088d5->GetZaxis()->SetTitleSize(0.035);
   5a731d60bfa24d4aaa853aadaca088d5->GetZaxis()->SetTitleFont(42);
   e66a807ba88e40c08e63e13dcdc81870->Add(5a731d60bfa24d4aaa853aadaca088d5,"hist");
   
   TH1D *17a4ade5ac7e4da4806bfa2daad4bf7a = new TH1D("17a4ade5ac7e4da4806bfa2daad4bf7a","Charge mis-id",1,0,300);
   17a4ade5ac7e4da4806bfa2daad4bf7a->SetBinContent(1,0.09771032);
   17a4ade5ac7e4da4806bfa2daad4bf7a->SetBinError(1,0.01213049);
   17a4ade5ac7e4da4806bfa2daad4bf7a->SetEntries(64.88198);

   ci = TColor::GetColor("#9999cc");
   17a4ade5ac7e4da4806bfa2daad4bf7a->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   17a4ade5ac7e4da4806bfa2daad4bf7a->SetLineColor(ci);
   17a4ade5ac7e4da4806bfa2daad4bf7a->SetMarkerStyle(20);
   17a4ade5ac7e4da4806bfa2daad4bf7a->GetXaxis()->SetLabelFont(42);
   17a4ade5ac7e4da4806bfa2daad4bf7a->GetXaxis()->SetLabelSize(0.035);
   17a4ade5ac7e4da4806bfa2daad4bf7a->GetXaxis()->SetTitleSize(0.035);
   17a4ade5ac7e4da4806bfa2daad4bf7a->GetXaxis()->SetTitleFont(42);
   17a4ade5ac7e4da4806bfa2daad4bf7a->GetYaxis()->SetLabelFont(42);
   17a4ade5ac7e4da4806bfa2daad4bf7a->GetYaxis()->SetLabelSize(0.035);
   17a4ade5ac7e4da4806bfa2daad4bf7a->GetYaxis()->SetTitleSize(0.035);
   17a4ade5ac7e4da4806bfa2daad4bf7a->GetYaxis()->SetTitleFont(42);
   17a4ade5ac7e4da4806bfa2daad4bf7a->GetZaxis()->SetLabelFont(42);
   17a4ade5ac7e4da4806bfa2daad4bf7a->GetZaxis()->SetLabelSize(0.035);
   17a4ade5ac7e4da4806bfa2daad4bf7a->GetZaxis()->SetTitleSize(0.035);
   17a4ade5ac7e4da4806bfa2daad4bf7a->GetZaxis()->SetTitleFont(42);
   e66a807ba88e40c08e63e13dcdc81870->Add(17a4ade5ac7e4da4806bfa2daad4bf7a,"hist");
   
   TH1D *65ea3218060d4c799c6dda2c06f1aa5b = new TH1D("65ea3218060d4c799c6dda2c06f1aa5b","WZ#rightarrowl#tau#tau",1,0,300);
   65ea3218060d4c799c6dda2c06f1aa5b->SetBinContent(1,8.023399);
   65ea3218060d4c799c6dda2c06f1aa5b->SetBinError(1,0.2891706);
   65ea3218060d4c799c6dda2c06f1aa5b->SetEntries(769.8543);

   ci = TColor::GetColor("#268bd2");
   65ea3218060d4c799c6dda2c06f1aa5b->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   65ea3218060d4c799c6dda2c06f1aa5b->SetLineColor(ci);
   65ea3218060d4c799c6dda2c06f1aa5b->GetXaxis()->SetLabelFont(42);
   65ea3218060d4c799c6dda2c06f1aa5b->GetXaxis()->SetLabelSize(0.035);
   65ea3218060d4c799c6dda2c06f1aa5b->GetXaxis()->SetTitleSize(0.035);
   65ea3218060d4c799c6dda2c06f1aa5b->GetXaxis()->SetTitleFont(42);
   65ea3218060d4c799c6dda2c06f1aa5b->GetYaxis()->SetLabelFont(42);
   65ea3218060d4c799c6dda2c06f1aa5b->GetYaxis()->SetLabelSize(0.035);
   65ea3218060d4c799c6dda2c06f1aa5b->GetYaxis()->SetTitleSize(0.035);
   65ea3218060d4c799c6dda2c06f1aa5b->GetYaxis()->SetTitleFont(42);
   65ea3218060d4c799c6dda2c06f1aa5b->GetZaxis()->SetLabelFont(42);
   65ea3218060d4c799c6dda2c06f1aa5b->GetZaxis()->SetLabelSize(0.035);
   65ea3218060d4c799c6dda2c06f1aa5b->GetZaxis()->SetTitleSize(0.035);
   65ea3218060d4c799c6dda2c06f1aa5b->GetZaxis()->SetTitleFont(42);
   e66a807ba88e40c08e63e13dcdc81870->Add(65ea3218060d4c799c6dda2c06f1aa5b,"hist");
   
   TH1D *11b1369726a6403ba886cf43d2c5d0b6 = new TH1D("11b1369726a6403ba886cf43d2c5d0b6","Reducible bkg.",1,0,300);
   11b1369726a6403ba886cf43d2c5d0b6->SetBinContent(0,1e-05);
   11b1369726a6403ba886cf43d2c5d0b6->SetBinContent(1,9.350571);
   11b1369726a6403ba886cf43d2c5d0b6->SetBinContent(2,1e-05);
   11b1369726a6403ba886cf43d2c5d0b6->SetBinError(0,0.03516074);
   11b1369726a6403ba886cf43d2c5d0b6->SetBinError(1,1.418574);
   11b1369726a6403ba886cf43d2c5d0b6->SetBinError(2,0.03516074);
   11b1369726a6403ba886cf43d2c5d0b6->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   11b1369726a6403ba886cf43d2c5d0b6->SetFillColor(ci);
   11b1369726a6403ba886cf43d2c5d0b6->SetMarkerStyle(20);
   11b1369726a6403ba886cf43d2c5d0b6->GetXaxis()->SetLabelFont(42);
   11b1369726a6403ba886cf43d2c5d0b6->GetXaxis()->SetLabelSize(0.035);
   11b1369726a6403ba886cf43d2c5d0b6->GetXaxis()->SetTitleSize(0.035);
   11b1369726a6403ba886cf43d2c5d0b6->GetXaxis()->SetTitleFont(42);
   11b1369726a6403ba886cf43d2c5d0b6->GetYaxis()->SetLabelFont(42);
   11b1369726a6403ba886cf43d2c5d0b6->GetYaxis()->SetLabelSize(0.035);
   11b1369726a6403ba886cf43d2c5d0b6->GetYaxis()->SetTitleSize(0.035);
   11b1369726a6403ba886cf43d2c5d0b6->GetYaxis()->SetTitleFont(42);
   11b1369726a6403ba886cf43d2c5d0b6->GetZaxis()->SetLabelFont(42);
   11b1369726a6403ba886cf43d2c5d0b6->GetZaxis()->SetLabelSize(0.035);
   11b1369726a6403ba886cf43d2c5d0b6->GetZaxis()->SetTitleSize(0.035);
   11b1369726a6403ba886cf43d2c5d0b6->GetZaxis()->SetTitleFont(42);
   e66a807ba88e40c08e63e13dcdc81870->Add(11b1369726a6403ba886cf43d2c5d0b6,"hist");
   
   TH1D *6b7dcac7c9bd48428d91f245e332629c = new TH1D("6b7dcac7c9bd48428d91f245e332629c","VH H#rightarrowWW",1,0,300);
   6b7dcac7c9bd48428d91f245e332629c->SetBinContent(1,0.03515596);
   6b7dcac7c9bd48428d91f245e332629c->SetBinError(1,0.004249872);
   6b7dcac7c9bd48428d91f245e332629c->SetEntries(68.42993);

   ci = TColor::GetColor("#cb4b16");
   6b7dcac7c9bd48428d91f245e332629c->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   6b7dcac7c9bd48428d91f245e332629c->SetLineColor(ci);
   6b7dcac7c9bd48428d91f245e332629c->GetXaxis()->SetLabelFont(42);
   6b7dcac7c9bd48428d91f245e332629c->GetXaxis()->SetLabelSize(0.035);
   6b7dcac7c9bd48428d91f245e332629c->GetXaxis()->SetTitleSize(0.035);
   6b7dcac7c9bd48428d91f245e332629c->GetXaxis()->SetTitleFont(42);
   6b7dcac7c9bd48428d91f245e332629c->GetYaxis()->SetLabelFont(42);
   6b7dcac7c9bd48428d91f245e332629c->GetYaxis()->SetLabelSize(0.035);
   6b7dcac7c9bd48428d91f245e332629c->GetYaxis()->SetTitleSize(0.035);
   6b7dcac7c9bd48428d91f245e332629c->GetYaxis()->SetTitleFont(42);
   6b7dcac7c9bd48428d91f245e332629c->GetZaxis()->SetLabelFont(42);
   6b7dcac7c9bd48428d91f245e332629c->GetZaxis()->SetLabelSize(0.035);
   6b7dcac7c9bd48428d91f245e332629c->GetZaxis()->SetTitleSize(0.035);
   6b7dcac7c9bd48428d91f245e332629c->GetZaxis()->SetTitleFont(42);
   e66a807ba88e40c08e63e13dcdc81870->Add(6b7dcac7c9bd48428d91f245e332629c,"hist");
   
   TH1D *a05e0edbe15741f8b99ae2a7223030cb = new TH1D("a05e0edbe15741f8b99ae2a7223030cb","(1#times) m_{H} = 125",1,0,300);
   a05e0edbe15741f8b99ae2a7223030cb->SetBinContent(1,0.5572315);
   a05e0edbe15741f8b99ae2a7223030cb->SetBinError(1,0.04550961);
   a05e0edbe15741f8b99ae2a7223030cb->SetEntries(149.9219);
   a05e0edbe15741f8b99ae2a7223030cb->SetFillColor(1);
   a05e0edbe15741f8b99ae2a7223030cb->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   a05e0edbe15741f8b99ae2a7223030cb->SetLineColor(ci);
   a05e0edbe15741f8b99ae2a7223030cb->SetLineStyle(2);
   a05e0edbe15741f8b99ae2a7223030cb->SetLineWidth(4);
   a05e0edbe15741f8b99ae2a7223030cb->GetXaxis()->SetLabelFont(42);
   a05e0edbe15741f8b99ae2a7223030cb->GetXaxis()->SetLabelSize(0.035);
   a05e0edbe15741f8b99ae2a7223030cb->GetXaxis()->SetTitleSize(0.035);
   a05e0edbe15741f8b99ae2a7223030cb->GetXaxis()->SetTitleFont(42);
   a05e0edbe15741f8b99ae2a7223030cb->GetYaxis()->SetLabelFont(42);
   a05e0edbe15741f8b99ae2a7223030cb->GetYaxis()->SetLabelSize(0.035);
   a05e0edbe15741f8b99ae2a7223030cb->GetYaxis()->SetTitleSize(0.035);
   a05e0edbe15741f8b99ae2a7223030cb->GetYaxis()->SetTitleFont(42);
   a05e0edbe15741f8b99ae2a7223030cb->GetZaxis()->SetLabelFont(42);
   a05e0edbe15741f8b99ae2a7223030cb->GetZaxis()->SetLabelSize(0.035);
   a05e0edbe15741f8b99ae2a7223030cb->GetZaxis()->SetTitleSize(0.035);
   a05e0edbe15741f8b99ae2a7223030cb->GetZaxis()->SetTitleFont(42);
   e66a807ba88e40c08e63e13dcdc81870->Add(a05e0edbe15741f8b99ae2a7223030cb,"hist");
   e66a807ba88e40c08e63e13dcdc81870->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("e66a807ba88e40c08e63e13dcdc81870","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("5a731d60bfa24d4aaa853aadaca088d5","ZZ","f");

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
   entry=leg->AddEntry("17a4ade5ac7e4da4806bfa2daad4bf7a","Charge mis-id","f");

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
   entry=leg->AddEntry("65ea3218060d4c799c6dda2c06f1aa5b","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("11b1369726a6403ba886cf43d2c5d0b6","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("6b7dcac7c9bd48428d91f245e332629c","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("a05e0edbe15741f8b99ae2a7223030cb","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("7d734eba05df4bc9abb558331c2c7611","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_7e50c11f90ca400da6c800358cea72f5","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *7d734eba05df4bc9abb558331c2c7611 = new TH1D("7d734eba05df4bc9abb558331c2c7611","Bkg. Unc.",1,0,300);
   7d734eba05df4bc9abb558331c2c7611->SetBinContent(1,18.82772);
   7d734eba05df4bc9abb558331c2c7611->SetBinError(1,1.853597);
   7d734eba05df4bc9abb558331c2c7611->SetEntries(1);
   7d734eba05df4bc9abb558331c2c7611->SetFillColor(1);
   7d734eba05df4bc9abb558331c2c7611->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   7d734eba05df4bc9abb558331c2c7611->SetLineColor(ci);
   7d734eba05df4bc9abb558331c2c7611->SetMarkerSize(0);
   7d734eba05df4bc9abb558331c2c7611->GetXaxis()->SetLabelFont(42);
   7d734eba05df4bc9abb558331c2c7611->GetXaxis()->SetLabelSize(0.035);
   7d734eba05df4bc9abb558331c2c7611->GetXaxis()->SetTitleSize(0.035);
   7d734eba05df4bc9abb558331c2c7611->GetXaxis()->SetTitleFont(42);
   7d734eba05df4bc9abb558331c2c7611->GetYaxis()->SetLabelFont(42);
   7d734eba05df4bc9abb558331c2c7611->GetYaxis()->SetLabelSize(0.035);
   7d734eba05df4bc9abb558331c2c7611->GetYaxis()->SetTitleSize(0.035);
   7d734eba05df4bc9abb558331c2c7611->GetYaxis()->SetTitleFont(42);
   7d734eba05df4bc9abb558331c2c7611->GetZaxis()->SetLabelFont(42);
   7d734eba05df4bc9abb558331c2c7611->GetZaxis()->SetLabelSize(0.035);
   7d734eba05df4bc9abb558331c2c7611->GetZaxis()->SetTitleSize(0.035);
   7d734eba05df4bc9abb558331c2c7611->GetZaxis()->SetTitleFont(42);
   7d734eba05df4bc9abb558331c2c7611->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_7e50c11f90ca400da6c800358cea72f5");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,24);
   grae->SetPointError(0,0,0,4.864704,5.967055);
   
   TH1F *Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55 = new TH1F("Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55","Observed",100,149.9,151.1);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->SetMinimum(18.05212);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->SetMaximum(31.05023);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->SetDirectory(0);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->SetLineColor(ci);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_7e50c11f90ca400da6c800358cea72f55);
   
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
   entry=leg->AddEntry("e66a807ba88e40c08e63e13dcdc81870","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("5a731d60bfa24d4aaa853aadaca088d5","ZZ","f");

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
   entry=leg->AddEntry("17a4ade5ac7e4da4806bfa2daad4bf7a","Charge mis-id","f");

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
   entry=leg->AddEntry("65ea3218060d4c799c6dda2c06f1aa5b","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("11b1369726a6403ba886cf43d2c5d0b6","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("6b7dcac7c9bd48428d91f245e332629c","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("a05e0edbe15741f8b99ae2a7223030cb","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("7d734eba05df4bc9abb558331c2c7611","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_7e50c11f90ca400da6c800358cea72f5","Observed","P");
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
