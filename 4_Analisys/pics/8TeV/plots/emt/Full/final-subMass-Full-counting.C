{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:04:45 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-6.4575,337.5,58.1175);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *125f4ab0dee547cbb11c4126be48d4d8 = new THStack();
   125f4ab0dee547cbb11c4126be48d4d8->SetName("125f4ab0dee547cbb11c4126be48d4d8");
   125f4ab0dee547cbb11c4126be48d4d8->SetTitle("WZ#rightarrow3l");
   125f4ab0dee547cbb11c4126be48d4d8->SetMaximum(49.2);
   
   TH1F *125f4ab0dee547cbb11c4126be48d4d8_stack_1 = new TH1F("125f4ab0dee547cbb11c4126be48d4d8_stack_1","WZ#rightarrow3l",1,0,300);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->SetMinimum(0);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->SetMaximum(51.66);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->SetDirectory(0);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->SetLineColor(ci);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetXaxis()->SetLabelFont(42);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetXaxis()->SetLabelSize(0.035);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetXaxis()->SetTitleSize(0.035);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetXaxis()->SetTitleFont(42);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetYaxis()->SetTitle("Events");
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetYaxis()->SetLabelFont(42);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetYaxis()->SetLabelSize(0.035);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetYaxis()->SetTitleSize(0.035);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetYaxis()->SetTitleFont(42);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetZaxis()->SetLabelFont(42);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetZaxis()->SetLabelSize(0.035);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetZaxis()->SetTitleSize(0.035);
   125f4ab0dee547cbb11c4126be48d4d8_stack_1->GetZaxis()->SetTitleFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->SetHistogram(125f4ab0dee547cbb11c4126be48d4d8_stack_1);
   
   
   TH1D *125f4ab0dee547cbb11c4126be48d4d8 = new TH1D("125f4ab0dee547cbb11c4126be48d4d8","WZ#rightarrow3l",1,0,300);
   125f4ab0dee547cbb11c4126be48d4d8->SetBinContent(1,2.026484);
   125f4ab0dee547cbb11c4126be48d4d8->SetBinContent(2,0.02154404);
   125f4ab0dee547cbb11c4126be48d4d8->SetBinError(1,0.145418);
   125f4ab0dee547cbb11c4126be48d4d8->SetBinError(2,0.01524058);
   125f4ab0dee547cbb11c4126be48d4d8->SetEntries(194.2002);

   ci = TColor::GetColor("#dc322f");
   125f4ab0dee547cbb11c4126be48d4d8->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   125f4ab0dee547cbb11c4126be48d4d8->SetLineColor(ci);
   125f4ab0dee547cbb11c4126be48d4d8->GetXaxis()->SetLabelFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->GetXaxis()->SetLabelSize(0.035);
   125f4ab0dee547cbb11c4126be48d4d8->GetXaxis()->SetTitleSize(0.035);
   125f4ab0dee547cbb11c4126be48d4d8->GetXaxis()->SetTitleFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->GetYaxis()->SetLabelFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->GetYaxis()->SetLabelSize(0.035);
   125f4ab0dee547cbb11c4126be48d4d8->GetYaxis()->SetTitleSize(0.035);
   125f4ab0dee547cbb11c4126be48d4d8->GetYaxis()->SetTitleFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->GetZaxis()->SetLabelFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->GetZaxis()->SetLabelSize(0.035);
   125f4ab0dee547cbb11c4126be48d4d8->GetZaxis()->SetTitleSize(0.035);
   125f4ab0dee547cbb11c4126be48d4d8->GetZaxis()->SetTitleFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->Add(125f4ab0dee547cbb11c4126be48d4d8,"hist");
   
   TH1D *a29a383fe48f45faa63f564565044107 = new TH1D("a29a383fe48f45faa63f564565044107","ZZ",1,0,300);
   a29a383fe48f45faa63f564565044107->SetBinContent(1,1.435525);
   a29a383fe48f45faa63f564565044107->SetBinContent(2,0.0007050788);
   a29a383fe48f45faa63f564565044107->SetBinError(1,0.02755306);
   a29a383fe48f45faa63f564565044107->SetBinError(2,0.000637957);
   a29a383fe48f45faa63f564565044107->SetEntries(2714.45);

   ci = TColor::GetColor("#50a634");
   a29a383fe48f45faa63f564565044107->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   a29a383fe48f45faa63f564565044107->SetLineColor(ci);
   a29a383fe48f45faa63f564565044107->GetXaxis()->SetLabelFont(42);
   a29a383fe48f45faa63f564565044107->GetXaxis()->SetLabelSize(0.035);
   a29a383fe48f45faa63f564565044107->GetXaxis()->SetTitleSize(0.035);
   a29a383fe48f45faa63f564565044107->GetXaxis()->SetTitleFont(42);
   a29a383fe48f45faa63f564565044107->GetYaxis()->SetLabelFont(42);
   a29a383fe48f45faa63f564565044107->GetYaxis()->SetLabelSize(0.035);
   a29a383fe48f45faa63f564565044107->GetYaxis()->SetTitleSize(0.035);
   a29a383fe48f45faa63f564565044107->GetYaxis()->SetTitleFont(42);
   a29a383fe48f45faa63f564565044107->GetZaxis()->SetLabelFont(42);
   a29a383fe48f45faa63f564565044107->GetZaxis()->SetLabelSize(0.035);
   a29a383fe48f45faa63f564565044107->GetZaxis()->SetTitleSize(0.035);
   a29a383fe48f45faa63f564565044107->GetZaxis()->SetTitleFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->Add(a29a383fe48f45faa63f564565044107,"hist");
   
   TH1D *f9e4076c8174450bac1bff63a82f368e = new TH1D("f9e4076c8174450bac1bff63a82f368e","Charge mis-id",1,0,300);
   f9e4076c8174450bac1bff63a82f368e->SetBinContent(1,0.2576468);
   f9e4076c8174450bac1bff63a82f368e->SetBinError(1,0.02227264);
   f9e4076c8174450bac1bff63a82f368e->SetEntries(133.8154);

   ci = TColor::GetColor("#9999cc");
   f9e4076c8174450bac1bff63a82f368e->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   f9e4076c8174450bac1bff63a82f368e->SetLineColor(ci);
   f9e4076c8174450bac1bff63a82f368e->SetMarkerStyle(20);
   f9e4076c8174450bac1bff63a82f368e->GetXaxis()->SetLabelFont(42);
   f9e4076c8174450bac1bff63a82f368e->GetXaxis()->SetLabelSize(0.035);
   f9e4076c8174450bac1bff63a82f368e->GetXaxis()->SetTitleSize(0.035);
   f9e4076c8174450bac1bff63a82f368e->GetXaxis()->SetTitleFont(42);
   f9e4076c8174450bac1bff63a82f368e->GetYaxis()->SetLabelFont(42);
   f9e4076c8174450bac1bff63a82f368e->GetYaxis()->SetLabelSize(0.035);
   f9e4076c8174450bac1bff63a82f368e->GetYaxis()->SetTitleSize(0.035);
   f9e4076c8174450bac1bff63a82f368e->GetYaxis()->SetTitleFont(42);
   f9e4076c8174450bac1bff63a82f368e->GetZaxis()->SetLabelFont(42);
   f9e4076c8174450bac1bff63a82f368e->GetZaxis()->SetLabelSize(0.035);
   f9e4076c8174450bac1bff63a82f368e->GetZaxis()->SetTitleSize(0.035);
   f9e4076c8174450bac1bff63a82f368e->GetZaxis()->SetTitleFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->Add(f9e4076c8174450bac1bff63a82f368e,"hist");
   
   TH1D *9c55837f6d9349298ac491cec4031024 = new TH1D("9c55837f6d9349298ac491cec4031024","WZ#rightarrowl#tau#tau",1,0,300);
   9c55837f6d9349298ac491cec4031024->SetBinContent(1,17.15364);
   9c55837f6d9349298ac491cec4031024->SetBinContent(2,0.02273599);
   9c55837f6d9349298ac491cec4031024->SetBinError(1,0.4236076);
   9c55837f6d9349298ac491cec4031024->SetBinError(2,0.01612053);
   9c55837f6d9349298ac491cec4031024->SetEntries(1639.778);

   ci = TColor::GetColor("#268bd2");
   9c55837f6d9349298ac491cec4031024->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   9c55837f6d9349298ac491cec4031024->SetLineColor(ci);
   9c55837f6d9349298ac491cec4031024->GetXaxis()->SetLabelFont(42);
   9c55837f6d9349298ac491cec4031024->GetXaxis()->SetLabelSize(0.035);
   9c55837f6d9349298ac491cec4031024->GetXaxis()->SetTitleSize(0.035);
   9c55837f6d9349298ac491cec4031024->GetXaxis()->SetTitleFont(42);
   9c55837f6d9349298ac491cec4031024->GetYaxis()->SetLabelFont(42);
   9c55837f6d9349298ac491cec4031024->GetYaxis()->SetLabelSize(0.035);
   9c55837f6d9349298ac491cec4031024->GetYaxis()->SetTitleSize(0.035);
   9c55837f6d9349298ac491cec4031024->GetYaxis()->SetTitleFont(42);
   9c55837f6d9349298ac491cec4031024->GetZaxis()->SetLabelFont(42);
   9c55837f6d9349298ac491cec4031024->GetZaxis()->SetLabelSize(0.035);
   9c55837f6d9349298ac491cec4031024->GetZaxis()->SetTitleSize(0.035);
   9c55837f6d9349298ac491cec4031024->GetZaxis()->SetTitleFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->Add(9c55837f6d9349298ac491cec4031024,"hist");
   
   TH1D *2c65d6ba9b25447185c02b040680cc28 = new TH1D("2c65d6ba9b25447185c02b040680cc28","Reducible bkg.",1,0,300);
   2c65d6ba9b25447185c02b040680cc28->SetBinContent(0,1e-05);
   2c65d6ba9b25447185c02b040680cc28->SetBinContent(1,17.49776);
   2c65d6ba9b25447185c02b040680cc28->SetBinContent(2,0.01558676);
   2c65d6ba9b25447185c02b040680cc28->SetBinError(0,0.03442961);
   2c65d6ba9b25447185c02b040680cc28->SetBinError(1,1.945916);
   2c65d6ba9b25447185c02b040680cc28->SetBinError(2,0.01167944);
   2c65d6ba9b25447185c02b040680cc28->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   2c65d6ba9b25447185c02b040680cc28->SetFillColor(ci);
   2c65d6ba9b25447185c02b040680cc28->SetMarkerStyle(20);
   2c65d6ba9b25447185c02b040680cc28->GetXaxis()->SetLabelFont(42);
   2c65d6ba9b25447185c02b040680cc28->GetXaxis()->SetLabelSize(0.035);
   2c65d6ba9b25447185c02b040680cc28->GetXaxis()->SetTitleSize(0.035);
   2c65d6ba9b25447185c02b040680cc28->GetXaxis()->SetTitleFont(42);
   2c65d6ba9b25447185c02b040680cc28->GetYaxis()->SetLabelFont(42);
   2c65d6ba9b25447185c02b040680cc28->GetYaxis()->SetLabelSize(0.035);
   2c65d6ba9b25447185c02b040680cc28->GetYaxis()->SetTitleSize(0.035);
   2c65d6ba9b25447185c02b040680cc28->GetYaxis()->SetTitleFont(42);
   2c65d6ba9b25447185c02b040680cc28->GetZaxis()->SetLabelFont(42);
   2c65d6ba9b25447185c02b040680cc28->GetZaxis()->SetLabelSize(0.035);
   2c65d6ba9b25447185c02b040680cc28->GetZaxis()->SetTitleSize(0.035);
   2c65d6ba9b25447185c02b040680cc28->GetZaxis()->SetTitleFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->Add(2c65d6ba9b25447185c02b040680cc28,"hist");
   
   TH1D *fcf11f0baffa4d328facc181e70f96af = new TH1D("fcf11f0baffa4d328facc181e70f96af","VH H#rightarrowWW",1,0,300);
   fcf11f0baffa4d328facc181e70f96af->SetBinContent(1,0.107935);
   fcf11f0baffa4d328facc181e70f96af->SetBinError(1,0.007488967);
   fcf11f0baffa4d328facc181e70f96af->SetEntries(207.7212);

   ci = TColor::GetColor("#cb4b16");
   fcf11f0baffa4d328facc181e70f96af->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   fcf11f0baffa4d328facc181e70f96af->SetLineColor(ci);
   fcf11f0baffa4d328facc181e70f96af->GetXaxis()->SetLabelFont(42);
   fcf11f0baffa4d328facc181e70f96af->GetXaxis()->SetLabelSize(0.035);
   fcf11f0baffa4d328facc181e70f96af->GetXaxis()->SetTitleSize(0.035);
   fcf11f0baffa4d328facc181e70f96af->GetXaxis()->SetTitleFont(42);
   fcf11f0baffa4d328facc181e70f96af->GetYaxis()->SetLabelFont(42);
   fcf11f0baffa4d328facc181e70f96af->GetYaxis()->SetLabelSize(0.035);
   fcf11f0baffa4d328facc181e70f96af->GetYaxis()->SetTitleSize(0.035);
   fcf11f0baffa4d328facc181e70f96af->GetYaxis()->SetTitleFont(42);
   fcf11f0baffa4d328facc181e70f96af->GetZaxis()->SetLabelFont(42);
   fcf11f0baffa4d328facc181e70f96af->GetZaxis()->SetLabelSize(0.035);
   fcf11f0baffa4d328facc181e70f96af->GetZaxis()->SetTitleSize(0.035);
   fcf11f0baffa4d328facc181e70f96af->GetZaxis()->SetTitleFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->Add(fcf11f0baffa4d328facc181e70f96af,"hist");
   
   TH1D *ca9247a9ba07476fb7d3daac3a90cba2 = new TH1D("ca9247a9ba07476fb7d3daac3a90cba2","(1#times) m_{H} = 125",1,0,300);
   ca9247a9ba07476fb7d3daac3a90cba2->SetBinContent(1,1.992841);
   ca9247a9ba07476fb7d3daac3a90cba2->SetBinContent(2,0.004212867);
   ca9247a9ba07476fb7d3daac3a90cba2->SetBinError(1,0.08868645);
   ca9247a9ba07476fb7d3daac3a90cba2->SetBinError(2,0.004212867);
   ca9247a9ba07476fb7d3daac3a90cba2->SetEntries(504.9296);
   ca9247a9ba07476fb7d3daac3a90cba2->SetFillColor(1);
   ca9247a9ba07476fb7d3daac3a90cba2->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   ca9247a9ba07476fb7d3daac3a90cba2->SetLineColor(ci);
   ca9247a9ba07476fb7d3daac3a90cba2->SetLineStyle(2);
   ca9247a9ba07476fb7d3daac3a90cba2->SetLineWidth(4);
   ca9247a9ba07476fb7d3daac3a90cba2->GetXaxis()->SetLabelFont(42);
   ca9247a9ba07476fb7d3daac3a90cba2->GetXaxis()->SetLabelSize(0.035);
   ca9247a9ba07476fb7d3daac3a90cba2->GetXaxis()->SetTitleSize(0.035);
   ca9247a9ba07476fb7d3daac3a90cba2->GetXaxis()->SetTitleFont(42);
   ca9247a9ba07476fb7d3daac3a90cba2->GetYaxis()->SetLabelFont(42);
   ca9247a9ba07476fb7d3daac3a90cba2->GetYaxis()->SetLabelSize(0.035);
   ca9247a9ba07476fb7d3daac3a90cba2->GetYaxis()->SetTitleSize(0.035);
   ca9247a9ba07476fb7d3daac3a90cba2->GetYaxis()->SetTitleFont(42);
   ca9247a9ba07476fb7d3daac3a90cba2->GetZaxis()->SetLabelFont(42);
   ca9247a9ba07476fb7d3daac3a90cba2->GetZaxis()->SetLabelSize(0.035);
   ca9247a9ba07476fb7d3daac3a90cba2->GetZaxis()->SetTitleSize(0.035);
   ca9247a9ba07476fb7d3daac3a90cba2->GetZaxis()->SetTitleFont(42);
   125f4ab0dee547cbb11c4126be48d4d8->Add(ca9247a9ba07476fb7d3daac3a90cba2,"hist");
   125f4ab0dee547cbb11c4126be48d4d8->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("125f4ab0dee547cbb11c4126be48d4d8","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("a29a383fe48f45faa63f564565044107","ZZ","f");

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
   entry=leg->AddEntry("f9e4076c8174450bac1bff63a82f368e","Charge mis-id","f");

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
   entry=leg->AddEntry("9c55837f6d9349298ac491cec4031024","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("2c65d6ba9b25447185c02b040680cc28","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("fcf11f0baffa4d328facc181e70f96af","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("ca9247a9ba07476fb7d3daac3a90cba2","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("89e20b21526943e5a906794aad2584ba","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_9b88977d0a7342978350fef9f4e7b530","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *89e20b21526943e5a906794aad2584ba = new TH1D("89e20b21526943e5a906794aad2584ba","Bkg. Unc.",1,0,300);
   89e20b21526943e5a906794aad2584ba->SetBinContent(1,38.37106);
   89e20b21526943e5a906794aad2584ba->SetBinError(1,5.15108);
   89e20b21526943e5a906794aad2584ba->SetEntries(1);
   89e20b21526943e5a906794aad2584ba->SetFillColor(1);
   89e20b21526943e5a906794aad2584ba->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   89e20b21526943e5a906794aad2584ba->SetLineColor(ci);
   89e20b21526943e5a906794aad2584ba->SetMarkerSize(0);
   89e20b21526943e5a906794aad2584ba->GetXaxis()->SetLabelFont(42);
   89e20b21526943e5a906794aad2584ba->GetXaxis()->SetLabelSize(0.035);
   89e20b21526943e5a906794aad2584ba->GetXaxis()->SetTitleSize(0.035);
   89e20b21526943e5a906794aad2584ba->GetXaxis()->SetTitleFont(42);
   89e20b21526943e5a906794aad2584ba->GetYaxis()->SetLabelFont(42);
   89e20b21526943e5a906794aad2584ba->GetYaxis()->SetLabelSize(0.035);
   89e20b21526943e5a906794aad2584ba->GetYaxis()->SetTitleSize(0.035);
   89e20b21526943e5a906794aad2584ba->GetYaxis()->SetTitleFont(42);
   89e20b21526943e5a906794aad2584ba->GetZaxis()->SetLabelFont(42);
   89e20b21526943e5a906794aad2584ba->GetZaxis()->SetLabelSize(0.035);
   89e20b21526943e5a906794aad2584ba->GetZaxis()->SetTitleSize(0.035);
   89e20b21526943e5a906794aad2584ba->GetZaxis()->SetTitleFont(42);
   89e20b21526943e5a906794aad2584ba->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_9b88977d0a7342978350fef9f4e7b530");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,41);
   grae->SetPointError(0,0,0,6.377022,7.45534);
   
   TH1F *Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301 = new TH1F("Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301","Observed",100,149.9,151.1);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->SetMinimum(33.23974);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->SetMaximum(49.83858);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->SetDirectory(0);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->SetLineColor(ci);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_9b88977d0a7342978350fef9f4e7b5301);
   
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
   entry=leg->AddEntry("125f4ab0dee547cbb11c4126be48d4d8","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("a29a383fe48f45faa63f564565044107","ZZ","f");

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
   entry=leg->AddEntry("f9e4076c8174450bac1bff63a82f368e","Charge mis-id","f");

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
   entry=leg->AddEntry("9c55837f6d9349298ac491cec4031024","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("2c65d6ba9b25447185c02b040680cc28","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("fcf11f0baffa4d328facc181e70f96af","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("ca9247a9ba07476fb7d3daac3a90cba2","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("89e20b21526943e5a906794aad2584ba","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_9b88977d0a7342978350fef9f4e7b530","Observed","P");
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
