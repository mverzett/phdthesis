{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:04:57 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-1.1025,337.5,9.9225);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *f05b3485ce8b4a27b67b736b468bb9a1 = new THStack();
   f05b3485ce8b4a27b67b736b468bb9a1->SetName("f05b3485ce8b4a27b67b736b468bb9a1");
   f05b3485ce8b4a27b67b736b468bb9a1->SetTitle("WZ#rightarrow3l");
   f05b3485ce8b4a27b67b736b468bb9a1->SetMaximum(8.4);
   
   TH1F *f05b3485ce8b4a27b67b736b468bb9a1_stack_2 = new TH1F("f05b3485ce8b4a27b67b736b468bb9a1_stack_2","WZ#rightarrow3l",1,0,300);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->SetMinimum(0);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->SetMaximum(8.82);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->SetDirectory(0);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->SetLineColor(ci);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetXaxis()->SetLabelFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetXaxis()->SetLabelSize(0.035);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetXaxis()->SetTitleSize(0.035);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetXaxis()->SetTitleFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetYaxis()->SetTitle("Events");
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetYaxis()->SetLabelFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetYaxis()->SetLabelSize(0.035);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetYaxis()->SetTitleSize(0.035);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetYaxis()->SetTitleFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetZaxis()->SetLabelFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetZaxis()->SetLabelSize(0.035);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetZaxis()->SetTitleSize(0.035);
   f05b3485ce8b4a27b67b736b468bb9a1_stack_2->GetZaxis()->SetTitleFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->SetHistogram(f05b3485ce8b4a27b67b736b468bb9a1_stack_2);
   
   
   TH1D *f05b3485ce8b4a27b67b736b468bb9a1 = new TH1D("f05b3485ce8b4a27b67b736b468bb9a1","WZ#rightarrow3l",1,0,300);
   f05b3485ce8b4a27b67b736b468bb9a1->SetBinContent(1,0.345937);
   f05b3485ce8b4a27b67b736b468bb9a1->SetBinError(1,0.05860333);
   f05b3485ce8b4a27b67b736b468bb9a1->SetEntries(34.84573);

   ci = TColor::GetColor("#dc322f");
   f05b3485ce8b4a27b67b736b468bb9a1->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   f05b3485ce8b4a27b67b736b468bb9a1->SetLineColor(ci);
   f05b3485ce8b4a27b67b736b468bb9a1->GetXaxis()->SetLabelFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->GetXaxis()->SetLabelSize(0.035);
   f05b3485ce8b4a27b67b736b468bb9a1->GetXaxis()->SetTitleSize(0.035);
   f05b3485ce8b4a27b67b736b468bb9a1->GetXaxis()->SetTitleFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->GetYaxis()->SetLabelFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->GetYaxis()->SetLabelSize(0.035);
   f05b3485ce8b4a27b67b736b468bb9a1->GetYaxis()->SetTitleSize(0.035);
   f05b3485ce8b4a27b67b736b468bb9a1->GetYaxis()->SetTitleFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->GetZaxis()->SetLabelFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->GetZaxis()->SetLabelSize(0.035);
   f05b3485ce8b4a27b67b736b468bb9a1->GetZaxis()->SetTitleSize(0.035);
   f05b3485ce8b4a27b67b736b468bb9a1->GetZaxis()->SetTitleFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->Add(f05b3485ce8b4a27b67b736b468bb9a1,"hist");
   
   TH1D *5e3d426e6488486ca825fe17f44d1d03 = new TH1D("5e3d426e6488486ca825fe17f44d1d03","ZZ",1,0,300);
   5e3d426e6488486ca825fe17f44d1d03->SetBinContent(1,0.06037506);
   5e3d426e6488486ca825fe17f44d1d03->SetBinContent(2,0.0005540796);
   5e3d426e6488486ca825fe17f44d1d03->SetBinError(1,0.005536942);
   5e3d426e6488486ca825fe17f44d1d03->SetBinError(2,0.0005540796);
   5e3d426e6488486ca825fe17f44d1d03->SetEntries(118.8982);

   ci = TColor::GetColor("#50a634");
   5e3d426e6488486ca825fe17f44d1d03->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   5e3d426e6488486ca825fe17f44d1d03->SetLineColor(ci);
   5e3d426e6488486ca825fe17f44d1d03->GetXaxis()->SetLabelFont(42);
   5e3d426e6488486ca825fe17f44d1d03->GetXaxis()->SetLabelSize(0.035);
   5e3d426e6488486ca825fe17f44d1d03->GetXaxis()->SetTitleSize(0.035);
   5e3d426e6488486ca825fe17f44d1d03->GetXaxis()->SetTitleFont(42);
   5e3d426e6488486ca825fe17f44d1d03->GetYaxis()->SetLabelFont(42);
   5e3d426e6488486ca825fe17f44d1d03->GetYaxis()->SetLabelSize(0.035);
   5e3d426e6488486ca825fe17f44d1d03->GetYaxis()->SetTitleSize(0.035);
   5e3d426e6488486ca825fe17f44d1d03->GetYaxis()->SetTitleFont(42);
   5e3d426e6488486ca825fe17f44d1d03->GetZaxis()->SetLabelFont(42);
   5e3d426e6488486ca825fe17f44d1d03->GetZaxis()->SetLabelSize(0.035);
   5e3d426e6488486ca825fe17f44d1d03->GetZaxis()->SetTitleSize(0.035);
   5e3d426e6488486ca825fe17f44d1d03->GetZaxis()->SetTitleFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->Add(5e3d426e6488486ca825fe17f44d1d03,"hist");
   
   TH1D *b32c216f48f34c2ebccb21ac957a1685 = new TH1D("b32c216f48f34c2ebccb21ac957a1685","Charge mis-id",1,0,300);
   b32c216f48f34c2ebccb21ac957a1685->SetBinContent(1,0.1759328);
   b32c216f48f34c2ebccb21ac957a1685->SetBinError(1,0.01685761);
   b32c216f48f34c2ebccb21ac957a1685->SetEntries(108.9185);

   ci = TColor::GetColor("#9999cc");
   b32c216f48f34c2ebccb21ac957a1685->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   b32c216f48f34c2ebccb21ac957a1685->SetLineColor(ci);
   b32c216f48f34c2ebccb21ac957a1685->SetMarkerStyle(20);
   b32c216f48f34c2ebccb21ac957a1685->GetXaxis()->SetLabelFont(42);
   b32c216f48f34c2ebccb21ac957a1685->GetXaxis()->SetLabelSize(0.035);
   b32c216f48f34c2ebccb21ac957a1685->GetXaxis()->SetTitleSize(0.035);
   b32c216f48f34c2ebccb21ac957a1685->GetXaxis()->SetTitleFont(42);
   b32c216f48f34c2ebccb21ac957a1685->GetYaxis()->SetLabelFont(42);
   b32c216f48f34c2ebccb21ac957a1685->GetYaxis()->SetLabelSize(0.035);
   b32c216f48f34c2ebccb21ac957a1685->GetYaxis()->SetTitleSize(0.035);
   b32c216f48f34c2ebccb21ac957a1685->GetYaxis()->SetTitleFont(42);
   b32c216f48f34c2ebccb21ac957a1685->GetZaxis()->SetLabelFont(42);
   b32c216f48f34c2ebccb21ac957a1685->GetZaxis()->SetLabelSize(0.035);
   b32c216f48f34c2ebccb21ac957a1685->GetZaxis()->SetTitleSize(0.035);
   b32c216f48f34c2ebccb21ac957a1685->GetZaxis()->SetTitleFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->Add(b32c216f48f34c2ebccb21ac957a1685,"hist");
   
   TH1D *cd69251ca6a94b7da1fae051b57c0e0e = new TH1D("cd69251ca6a94b7da1fae051b57c0e0e","WZ#rightarrowl#tau#tau",1,0,300);
   cd69251ca6a94b7da1fae051b57c0e0e->SetBinContent(1,0.2084237);
   cd69251ca6a94b7da1fae051b57c0e0e->SetBinError(1,0.04626398);
   cd69251ca6a94b7da1fae051b57c0e0e->SetEntries(20.29589);

   ci = TColor::GetColor("#268bd2");
   cd69251ca6a94b7da1fae051b57c0e0e->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   cd69251ca6a94b7da1fae051b57c0e0e->SetLineColor(ci);
   cd69251ca6a94b7da1fae051b57c0e0e->GetXaxis()->SetLabelFont(42);
   cd69251ca6a94b7da1fae051b57c0e0e->GetXaxis()->SetLabelSize(0.035);
   cd69251ca6a94b7da1fae051b57c0e0e->GetXaxis()->SetTitleSize(0.035);
   cd69251ca6a94b7da1fae051b57c0e0e->GetXaxis()->SetTitleFont(42);
   cd69251ca6a94b7da1fae051b57c0e0e->GetYaxis()->SetLabelFont(42);
   cd69251ca6a94b7da1fae051b57c0e0e->GetYaxis()->SetLabelSize(0.035);
   cd69251ca6a94b7da1fae051b57c0e0e->GetYaxis()->SetTitleSize(0.035);
   cd69251ca6a94b7da1fae051b57c0e0e->GetYaxis()->SetTitleFont(42);
   cd69251ca6a94b7da1fae051b57c0e0e->GetZaxis()->SetLabelFont(42);
   cd69251ca6a94b7da1fae051b57c0e0e->GetZaxis()->SetLabelSize(0.035);
   cd69251ca6a94b7da1fae051b57c0e0e->GetZaxis()->SetTitleSize(0.035);
   cd69251ca6a94b7da1fae051b57c0e0e->GetZaxis()->SetTitleFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->Add(cd69251ca6a94b7da1fae051b57c0e0e,"hist");
   
   TH1D *b5de47f3fcd640b9b3074ad5e6412cfb = new TH1D("b5de47f3fcd640b9b3074ad5e6412cfb","Reducible bkg.",1,0,300);
   b5de47f3fcd640b9b3074ad5e6412cfb->SetBinContent(0,1e-05);
   b5de47f3fcd640b9b3074ad5e6412cfb->SetBinContent(1,3.53347);
   b5de47f3fcd640b9b3074ad5e6412cfb->SetBinContent(2,0.08461236);
   b5de47f3fcd640b9b3074ad5e6412cfb->SetBinError(0,0.03901837);
   b5de47f3fcd640b9b3074ad5e6412cfb->SetBinError(1,0.6623622);
   b5de47f3fcd640b9b3074ad5e6412cfb->SetBinError(2,0.05986537);
   b5de47f3fcd640b9b3074ad5e6412cfb->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   b5de47f3fcd640b9b3074ad5e6412cfb->SetFillColor(ci);
   b5de47f3fcd640b9b3074ad5e6412cfb->SetMarkerStyle(20);
   b5de47f3fcd640b9b3074ad5e6412cfb->GetXaxis()->SetLabelFont(42);
   b5de47f3fcd640b9b3074ad5e6412cfb->GetXaxis()->SetLabelSize(0.035);
   b5de47f3fcd640b9b3074ad5e6412cfb->GetXaxis()->SetTitleSize(0.035);
   b5de47f3fcd640b9b3074ad5e6412cfb->GetXaxis()->SetTitleFont(42);
   b5de47f3fcd640b9b3074ad5e6412cfb->GetYaxis()->SetLabelFont(42);
   b5de47f3fcd640b9b3074ad5e6412cfb->GetYaxis()->SetLabelSize(0.035);
   b5de47f3fcd640b9b3074ad5e6412cfb->GetYaxis()->SetTitleSize(0.035);
   b5de47f3fcd640b9b3074ad5e6412cfb->GetYaxis()->SetTitleFont(42);
   b5de47f3fcd640b9b3074ad5e6412cfb->GetZaxis()->SetLabelFont(42);
   b5de47f3fcd640b9b3074ad5e6412cfb->GetZaxis()->SetLabelSize(0.035);
   b5de47f3fcd640b9b3074ad5e6412cfb->GetZaxis()->SetTitleSize(0.035);
   b5de47f3fcd640b9b3074ad5e6412cfb->GetZaxis()->SetTitleFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->Add(b5de47f3fcd640b9b3074ad5e6412cfb,"hist");
   
   TH1D *8b00002a2d084f139dd44b54fec55804 = new TH1D("8b00002a2d084f139dd44b54fec55804","VH H#rightarrowWW",1,0,300);
   8b00002a2d084f139dd44b54fec55804->SetBinContent(1,0.001852927);
   8b00002a2d084f139dd44b54fec55804->SetBinError(1,0.0008874311);
   8b00002a2d084f139dd44b54fec55804->SetEntries(4.359607);

   ci = TColor::GetColor("#cb4b16");
   8b00002a2d084f139dd44b54fec55804->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   8b00002a2d084f139dd44b54fec55804->SetLineColor(ci);
   8b00002a2d084f139dd44b54fec55804->GetXaxis()->SetLabelFont(42);
   8b00002a2d084f139dd44b54fec55804->GetXaxis()->SetLabelSize(0.035);
   8b00002a2d084f139dd44b54fec55804->GetXaxis()->SetTitleSize(0.035);
   8b00002a2d084f139dd44b54fec55804->GetXaxis()->SetTitleFont(42);
   8b00002a2d084f139dd44b54fec55804->GetYaxis()->SetLabelFont(42);
   8b00002a2d084f139dd44b54fec55804->GetYaxis()->SetLabelSize(0.035);
   8b00002a2d084f139dd44b54fec55804->GetYaxis()->SetTitleSize(0.035);
   8b00002a2d084f139dd44b54fec55804->GetYaxis()->SetTitleFont(42);
   8b00002a2d084f139dd44b54fec55804->GetZaxis()->SetLabelFont(42);
   8b00002a2d084f139dd44b54fec55804->GetZaxis()->SetLabelSize(0.035);
   8b00002a2d084f139dd44b54fec55804->GetZaxis()->SetTitleSize(0.035);
   8b00002a2d084f139dd44b54fec55804->GetZaxis()->SetTitleFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->Add(8b00002a2d084f139dd44b54fec55804,"hist");
   
   TH1D *c3a0feda13e94217abbf85cb21d12121 = new TH1D("c3a0feda13e94217abbf85cb21d12121","(1#times) m_{H} = 125",1,0,300);
   c3a0feda13e94217abbf85cb21d12121->SetBinContent(1,0.01824118);
   c3a0feda13e94217abbf85cb21d12121->SetBinError(1,0.008244722);
   c3a0feda13e94217abbf85cb21d12121->SetEntries(4.895013);
   c3a0feda13e94217abbf85cb21d12121->SetFillColor(1);
   c3a0feda13e94217abbf85cb21d12121->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   c3a0feda13e94217abbf85cb21d12121->SetLineColor(ci);
   c3a0feda13e94217abbf85cb21d12121->SetLineStyle(2);
   c3a0feda13e94217abbf85cb21d12121->SetLineWidth(4);
   c3a0feda13e94217abbf85cb21d12121->GetXaxis()->SetLabelFont(42);
   c3a0feda13e94217abbf85cb21d12121->GetXaxis()->SetLabelSize(0.035);
   c3a0feda13e94217abbf85cb21d12121->GetXaxis()->SetTitleSize(0.035);
   c3a0feda13e94217abbf85cb21d12121->GetXaxis()->SetTitleFont(42);
   c3a0feda13e94217abbf85cb21d12121->GetYaxis()->SetLabelFont(42);
   c3a0feda13e94217abbf85cb21d12121->GetYaxis()->SetLabelSize(0.035);
   c3a0feda13e94217abbf85cb21d12121->GetYaxis()->SetTitleSize(0.035);
   c3a0feda13e94217abbf85cb21d12121->GetYaxis()->SetTitleFont(42);
   c3a0feda13e94217abbf85cb21d12121->GetZaxis()->SetLabelFont(42);
   c3a0feda13e94217abbf85cb21d12121->GetZaxis()->SetLabelSize(0.035);
   c3a0feda13e94217abbf85cb21d12121->GetZaxis()->SetTitleSize(0.035);
   c3a0feda13e94217abbf85cb21d12121->GetZaxis()->SetTitleFont(42);
   f05b3485ce8b4a27b67b736b468bb9a1->Add(c3a0feda13e94217abbf85cb21d12121,"hist");
   f05b3485ce8b4a27b67b736b468bb9a1->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("f05b3485ce8b4a27b67b736b468bb9a1","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("5e3d426e6488486ca825fe17f44d1d03","ZZ","f");

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
   entry=leg->AddEntry("b32c216f48f34c2ebccb21ac957a1685","Charge mis-id","f");

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
   entry=leg->AddEntry("cd69251ca6a94b7da1fae051b57c0e0e","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("b5de47f3fcd640b9b3074ad5e6412cfb","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("8b00002a2d084f139dd44b54fec55804","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("c3a0feda13e94217abbf85cb21d12121","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("55b6fbf1c82841c8b81df1843960920c","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_a2860612a2d34e04a9bfbf76b59091ef","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *55b6fbf1c82841c8b81df1843960920c = new TH1D("55b6fbf1c82841c8b81df1843960920c","Bkg. Unc.",1,0,300);
   55b6fbf1c82841c8b81df1843960920c->SetBinContent(1,4.324138);
   55b6fbf1c82841c8b81df1843960920c->SetBinError(1,3.533946);
   55b6fbf1c82841c8b81df1843960920c->SetEntries(1);
   55b6fbf1c82841c8b81df1843960920c->SetFillColor(1);
   55b6fbf1c82841c8b81df1843960920c->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   55b6fbf1c82841c8b81df1843960920c->SetLineColor(ci);
   55b6fbf1c82841c8b81df1843960920c->SetMarkerSize(0);
   55b6fbf1c82841c8b81df1843960920c->GetXaxis()->SetLabelFont(42);
   55b6fbf1c82841c8b81df1843960920c->GetXaxis()->SetLabelSize(0.035);
   55b6fbf1c82841c8b81df1843960920c->GetXaxis()->SetTitleSize(0.035);
   55b6fbf1c82841c8b81df1843960920c->GetXaxis()->SetTitleFont(42);
   55b6fbf1c82841c8b81df1843960920c->GetYaxis()->SetLabelFont(42);
   55b6fbf1c82841c8b81df1843960920c->GetYaxis()->SetLabelSize(0.035);
   55b6fbf1c82841c8b81df1843960920c->GetYaxis()->SetTitleSize(0.035);
   55b6fbf1c82841c8b81df1843960920c->GetYaxis()->SetTitleFont(42);
   55b6fbf1c82841c8b81df1843960920c->GetZaxis()->SetLabelFont(42);
   55b6fbf1c82841c8b81df1843960920c->GetZaxis()->SetLabelSize(0.035);
   55b6fbf1c82841c8b81df1843960920c->GetZaxis()->SetTitleSize(0.035);
   55b6fbf1c82841c8b81df1843960920c->GetZaxis()->SetTitleFont(42);
   55b6fbf1c82841c8b81df1843960920c->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_a2860612a2d34e04a9bfbf76b59091ef");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,7);
   grae->SetPointError(0,0,0,2.581513,3.770356);
   
   TH1F *Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2 = new TH1F("Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2","Observed",100,149.9,151.1);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->SetMinimum(3.783301);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->SetMaximum(11.40554);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->SetDirectory(0);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->SetLineColor(ci);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_a2860612a2d34e04a9bfbf76b59091ef2);
   
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
   entry=leg->AddEntry("f05b3485ce8b4a27b67b736b468bb9a1","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("5e3d426e6488486ca825fe17f44d1d03","ZZ","f");

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
   entry=leg->AddEntry("b32c216f48f34c2ebccb21ac957a1685","Charge mis-id","f");

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
   entry=leg->AddEntry("cd69251ca6a94b7da1fae051b57c0e0e","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("b5de47f3fcd640b9b3074ad5e6412cfb","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("8b00002a2d084f139dd44b54fec55804","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("c3a0feda13e94217abbf85cb21d12121","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("55b6fbf1c82841c8b81df1843960920c","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_a2860612a2d34e04a9bfbf76b59091ef","Observed","P");
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
