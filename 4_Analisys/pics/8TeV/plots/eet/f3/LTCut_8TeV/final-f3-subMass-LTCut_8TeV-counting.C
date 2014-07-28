{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:12:47 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-57.2918,337.5,515.6262);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *4de24440470f46daa650e2ba4ce1da71 = new THStack();
   4de24440470f46daa650e2ba4ce1da71->SetName("4de24440470f46daa650e2ba4ce1da71");
   4de24440470f46daa650e2ba4ce1da71->SetTitle("ZZ");
   4de24440470f46daa650e2ba4ce1da71->SetMaximum(436.5089);
   
   TH1F *4de24440470f46daa650e2ba4ce1da71_stack_7 = new TH1F("4de24440470f46daa650e2ba4ce1da71_stack_7","ZZ",1,0,300);
   4de24440470f46daa650e2ba4ce1da71_stack_7->SetMinimum(0);
   4de24440470f46daa650e2ba4ce1da71_stack_7->SetMaximum(458.3344);
   4de24440470f46daa650e2ba4ce1da71_stack_7->SetDirectory(0);
   4de24440470f46daa650e2ba4ce1da71_stack_7->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   4de24440470f46daa650e2ba4ce1da71_stack_7->SetLineColor(ci);
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetXaxis()->SetLabelFont(42);
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetXaxis()->SetLabelSize(0.035);
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetXaxis()->SetTitleSize(0.035);
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetXaxis()->SetTitleFont(42);
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetYaxis()->SetTitle("Events");
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetYaxis()->SetLabelFont(42);
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetYaxis()->SetLabelSize(0.035);
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetYaxis()->SetTitleSize(0.035);
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetYaxis()->SetTitleFont(42);
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetZaxis()->SetLabelFont(42);
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetZaxis()->SetLabelSize(0.035);
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetZaxis()->SetTitleSize(0.035);
   4de24440470f46daa650e2ba4ce1da71_stack_7->GetZaxis()->SetTitleFont(42);
   4de24440470f46daa650e2ba4ce1da71->SetHistogram(4de24440470f46daa650e2ba4ce1da71_stack_7);
   
   
   TH1D *4de24440470f46daa650e2ba4ce1da71 = new TH1D("4de24440470f46daa650e2ba4ce1da71","ZZ",1,0,300);
   4de24440470f46daa650e2ba4ce1da71->SetBinContent(1,0.7414842);
   4de24440470f46daa650e2ba4ce1da71->SetBinContent(2,0.007160089);
   4de24440470f46daa650e2ba4ce1da71->SetBinError(1,0.01913631);
   4de24440470f46daa650e2ba4ce1da71->SetBinError(2,0.001904374);
   4de24440470f46daa650e2ba4ce1da71->SetEntries(1501.368);

   ci = TColor::GetColor("#50a634");
   4de24440470f46daa650e2ba4ce1da71->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   4de24440470f46daa650e2ba4ce1da71->SetLineColor(ci);
   4de24440470f46daa650e2ba4ce1da71->GetXaxis()->SetLabelFont(42);
   4de24440470f46daa650e2ba4ce1da71->GetXaxis()->SetLabelSize(0.035);
   4de24440470f46daa650e2ba4ce1da71->GetXaxis()->SetTitleSize(0.035);
   4de24440470f46daa650e2ba4ce1da71->GetXaxis()->SetTitleFont(42);
   4de24440470f46daa650e2ba4ce1da71->GetYaxis()->SetLabelFont(42);
   4de24440470f46daa650e2ba4ce1da71->GetYaxis()->SetLabelSize(0.035);
   4de24440470f46daa650e2ba4ce1da71->GetYaxis()->SetTitleSize(0.035);
   4de24440470f46daa650e2ba4ce1da71->GetYaxis()->SetTitleFont(42);
   4de24440470f46daa650e2ba4ce1da71->GetZaxis()->SetLabelFont(42);
   4de24440470f46daa650e2ba4ce1da71->GetZaxis()->SetLabelSize(0.035);
   4de24440470f46daa650e2ba4ce1da71->GetZaxis()->SetTitleSize(0.035);
   4de24440470f46daa650e2ba4ce1da71->GetZaxis()->SetTitleFont(42);
   4de24440470f46daa650e2ba4ce1da71->Add(4de24440470f46daa650e2ba4ce1da71,"hist");
   
   TH1D *f2e74cdd418a4f4cac83da32bea92c45 = new TH1D("f2e74cdd418a4f4cac83da32bea92c45","Charge mis-id",1,0,300);
   f2e74cdd418a4f4cac83da32bea92c45->SetBinContent(1,41.84279);
   f2e74cdd418a4f4cac83da32bea92c45->SetBinContent(2,0.3591964);
   f2e74cdd418a4f4cac83da32bea92c45->SetBinError(1,0.2699089);
   f2e74cdd418a4f4cac83da32bea92c45->SetBinError(2,0.03097382);
   f2e74cdd418a4f4cac83da32bea92c45->SetEntries(24044.63);

   ci = TColor::GetColor("#9999cc");
   f2e74cdd418a4f4cac83da32bea92c45->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   f2e74cdd418a4f4cac83da32bea92c45->SetLineColor(ci);
   f2e74cdd418a4f4cac83da32bea92c45->SetMarkerStyle(20);
   f2e74cdd418a4f4cac83da32bea92c45->GetXaxis()->SetLabelFont(42);
   f2e74cdd418a4f4cac83da32bea92c45->GetXaxis()->SetLabelSize(0.035);
   f2e74cdd418a4f4cac83da32bea92c45->GetXaxis()->SetTitleSize(0.035);
   f2e74cdd418a4f4cac83da32bea92c45->GetXaxis()->SetTitleFont(42);
   f2e74cdd418a4f4cac83da32bea92c45->GetYaxis()->SetLabelFont(42);
   f2e74cdd418a4f4cac83da32bea92c45->GetYaxis()->SetLabelSize(0.035);
   f2e74cdd418a4f4cac83da32bea92c45->GetYaxis()->SetTitleSize(0.035);
   f2e74cdd418a4f4cac83da32bea92c45->GetYaxis()->SetTitleFont(42);
   f2e74cdd418a4f4cac83da32bea92c45->GetZaxis()->SetLabelFont(42);
   f2e74cdd418a4f4cac83da32bea92c45->GetZaxis()->SetLabelSize(0.035);
   f2e74cdd418a4f4cac83da32bea92c45->GetZaxis()->SetTitleSize(0.035);
   f2e74cdd418a4f4cac83da32bea92c45->GetZaxis()->SetTitleFont(42);
   4de24440470f46daa650e2ba4ce1da71->Add(f2e74cdd418a4f4cac83da32bea92c45,"hist");
   
   TH1D *009ee0854d71400888624d1d24f8c3dd = new TH1D("009ee0854d71400888624d1d24f8c3dd","WZ#rightarrow3l",1,0,300);
   009ee0854d71400888624d1d24f8c3dd->SetBinContent(1,13.30831);
   009ee0854d71400888624d1d24f8c3dd->SetBinContent(2,0.27702);
   009ee0854d71400888624d1d24f8c3dd->SetBinError(1,0.3635541);
   009ee0854d71400888624d1d24f8c3dd->SetBinError(2,0.0537923);
   009ee0854d71400888624d1d24f8c3dd->SetEntries(1340.01);

   ci = TColor::GetColor("#dc322f");
   009ee0854d71400888624d1d24f8c3dd->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   009ee0854d71400888624d1d24f8c3dd->SetLineColor(ci);
   009ee0854d71400888624d1d24f8c3dd->GetXaxis()->SetLabelFont(42);
   009ee0854d71400888624d1d24f8c3dd->GetXaxis()->SetLabelSize(0.035);
   009ee0854d71400888624d1d24f8c3dd->GetXaxis()->SetTitleSize(0.035);
   009ee0854d71400888624d1d24f8c3dd->GetXaxis()->SetTitleFont(42);
   009ee0854d71400888624d1d24f8c3dd->GetYaxis()->SetLabelFont(42);
   009ee0854d71400888624d1d24f8c3dd->GetYaxis()->SetLabelSize(0.035);
   009ee0854d71400888624d1d24f8c3dd->GetYaxis()->SetTitleSize(0.035);
   009ee0854d71400888624d1d24f8c3dd->GetYaxis()->SetTitleFont(42);
   009ee0854d71400888624d1d24f8c3dd->GetZaxis()->SetLabelFont(42);
   009ee0854d71400888624d1d24f8c3dd->GetZaxis()->SetLabelSize(0.035);
   009ee0854d71400888624d1d24f8c3dd->GetZaxis()->SetTitleSize(0.035);
   009ee0854d71400888624d1d24f8c3dd->GetZaxis()->SetTitleFont(42);
   4de24440470f46daa650e2ba4ce1da71->Add(009ee0854d71400888624d1d24f8c3dd,"hist");
   
   TH1D *14efaa7dbb584d2ba989986f4c5b943c = new TH1D("14efaa7dbb584d2ba989986f4c5b943c","WZ#rightarrowl#tau#tau",1,0,300);
   14efaa7dbb584d2ba989986f4c5b943c->SetBinContent(1,5.428016);
   14efaa7dbb584d2ba989986f4c5b943c->SetBinContent(2,0.06906757);
   14efaa7dbb584d2ba989986f4c5b943c->SetBinError(1,0.2269314);
   14efaa7dbb584d2ba989986f4c5b943c->SetBinError(2,0.02602361);
   14efaa7dbb584d2ba989986f4c5b943c->SetEntries(572.1277);

   ci = TColor::GetColor("#268bd2");
   14efaa7dbb584d2ba989986f4c5b943c->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   14efaa7dbb584d2ba989986f4c5b943c->SetLineColor(ci);
   14efaa7dbb584d2ba989986f4c5b943c->GetXaxis()->SetLabelFont(42);
   14efaa7dbb584d2ba989986f4c5b943c->GetXaxis()->SetLabelSize(0.035);
   14efaa7dbb584d2ba989986f4c5b943c->GetXaxis()->SetTitleSize(0.035);
   14efaa7dbb584d2ba989986f4c5b943c->GetXaxis()->SetTitleFont(42);
   14efaa7dbb584d2ba989986f4c5b943c->GetYaxis()->SetLabelFont(42);
   14efaa7dbb584d2ba989986f4c5b943c->GetYaxis()->SetLabelSize(0.035);
   14efaa7dbb584d2ba989986f4c5b943c->GetYaxis()->SetTitleSize(0.035);
   14efaa7dbb584d2ba989986f4c5b943c->GetYaxis()->SetTitleFont(42);
   14efaa7dbb584d2ba989986f4c5b943c->GetZaxis()->SetLabelFont(42);
   14efaa7dbb584d2ba989986f4c5b943c->GetZaxis()->SetLabelSize(0.035);
   14efaa7dbb584d2ba989986f4c5b943c->GetZaxis()->SetTitleSize(0.035);
   14efaa7dbb584d2ba989986f4c5b943c->GetZaxis()->SetTitleFont(42);
   4de24440470f46daa650e2ba4ce1da71->Add(14efaa7dbb584d2ba989986f4c5b943c,"hist");
   
   TH1D *034668324b8749b7b0a3beed5ef1d782 = new TH1D("034668324b8749b7b0a3beed5ef1d782","Reducible bkg.",1,0,300);
   034668324b8749b7b0a3beed5ef1d782->SetBinContent(0,1e-05);
   034668324b8749b7b0a3beed5ef1d782->SetBinContent(1,156.9339);
   034668324b8749b7b0a3beed5ef1d782->SetBinContent(2,2.348493);
   034668324b8749b7b0a3beed5ef1d782->SetBinError(0,0.0321037);
   034668324b8749b7b0a3beed5ef1d782->SetBinError(1,4.681844);
   034668324b8749b7b0a3beed5ef1d782->SetBinError(2,0.5891897);
   034668324b8749b7b0a3beed5ef1d782->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   034668324b8749b7b0a3beed5ef1d782->SetFillColor(ci);
   034668324b8749b7b0a3beed5ef1d782->SetMarkerStyle(20);
   034668324b8749b7b0a3beed5ef1d782->GetXaxis()->SetLabelFont(42);
   034668324b8749b7b0a3beed5ef1d782->GetXaxis()->SetLabelSize(0.035);
   034668324b8749b7b0a3beed5ef1d782->GetXaxis()->SetTitleSize(0.035);
   034668324b8749b7b0a3beed5ef1d782->GetXaxis()->SetTitleFont(42);
   034668324b8749b7b0a3beed5ef1d782->GetYaxis()->SetLabelFont(42);
   034668324b8749b7b0a3beed5ef1d782->GetYaxis()->SetLabelSize(0.035);
   034668324b8749b7b0a3beed5ef1d782->GetYaxis()->SetTitleSize(0.035);
   034668324b8749b7b0a3beed5ef1d782->GetYaxis()->SetTitleFont(42);
   034668324b8749b7b0a3beed5ef1d782->GetZaxis()->SetLabelFont(42);
   034668324b8749b7b0a3beed5ef1d782->GetZaxis()->SetLabelSize(0.035);
   034668324b8749b7b0a3beed5ef1d782->GetZaxis()->SetTitleSize(0.035);
   034668324b8749b7b0a3beed5ef1d782->GetZaxis()->SetTitleFont(42);
   4de24440470f46daa650e2ba4ce1da71->Add(034668324b8749b7b0a3beed5ef1d782,"hist");
   4de24440470f46daa650e2ba4ce1da71->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("4de24440470f46daa650e2ba4ce1da71","ZZ","f");

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
   entry=leg->AddEntry("f2e74cdd418a4f4cac83da32bea92c45","Charge mis-id","f");

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
   entry=leg->AddEntry("009ee0854d71400888624d1d24f8c3dd","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("14efaa7dbb584d2ba989986f4c5b943c","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("034668324b8749b7b0a3beed5ef1d782","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("69357102dd864983bd11aeca33245e1c","Bkg. Unc.","f");
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
   
   TH1D *69357102dd864983bd11aeca33245e1c = new TH1D("69357102dd864983bd11aeca33245e1c","Bkg. Unc.",1,0,300);
   69357102dd864983bd11aeca33245e1c->SetBinContent(1,218.2545);
   69357102dd864983bd11aeca33245e1c->SetBinError(1,5.050361);
   69357102dd864983bd11aeca33245e1c->SetEntries(1);
   69357102dd864983bd11aeca33245e1c->SetFillColor(1);
   69357102dd864983bd11aeca33245e1c->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   69357102dd864983bd11aeca33245e1c->SetLineColor(ci);
   69357102dd864983bd11aeca33245e1c->SetMarkerSize(0);
   69357102dd864983bd11aeca33245e1c->GetXaxis()->SetLabelFont(42);
   69357102dd864983bd11aeca33245e1c->GetXaxis()->SetLabelSize(0.035);
   69357102dd864983bd11aeca33245e1c->GetXaxis()->SetTitleSize(0.035);
   69357102dd864983bd11aeca33245e1c->GetXaxis()->SetTitleFont(42);
   69357102dd864983bd11aeca33245e1c->GetYaxis()->SetLabelFont(42);
   69357102dd864983bd11aeca33245e1c->GetYaxis()->SetLabelSize(0.035);
   69357102dd864983bd11aeca33245e1c->GetYaxis()->SetTitleSize(0.035);
   69357102dd864983bd11aeca33245e1c->GetYaxis()->SetTitleFont(42);
   69357102dd864983bd11aeca33245e1c->GetZaxis()->SetLabelFont(42);
   69357102dd864983bd11aeca33245e1c->GetZaxis()->SetLabelSize(0.035);
   69357102dd864983bd11aeca33245e1c->GetZaxis()->SetTitleSize(0.035);
   69357102dd864983bd11aeca33245e1c->GetZaxis()->SetTitleFont(42);
   69357102dd864983bd11aeca33245e1c->Draw("hist pe2,same");
   
   TH1D *2ad0ca655bd34c4a8023bca923630eb1 = new TH1D("2ad0ca655bd34c4a8023bca923630eb1","Observed",1,0,300);
   2ad0ca655bd34c4a8023bca923630eb1->SetBinContent(1,216);
   2ad0ca655bd34c4a8023bca923630eb1->SetBinContent(2,4);
   2ad0ca655bd34c4a8023bca923630eb1->SetBinError(1,14.69694);
   2ad0ca655bd34c4a8023bca923630eb1->SetBinError(2,2);
   2ad0ca655bd34c4a8023bca923630eb1->SetEntries(216);
   2ad0ca655bd34c4a8023bca923630eb1->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   2ad0ca655bd34c4a8023bca923630eb1->SetLineColor(ci);
   2ad0ca655bd34c4a8023bca923630eb1->SetMarkerStyle(20);
   2ad0ca655bd34c4a8023bca923630eb1->GetXaxis()->SetLabelFont(42);
   2ad0ca655bd34c4a8023bca923630eb1->GetXaxis()->SetLabelSize(0.035);
   2ad0ca655bd34c4a8023bca923630eb1->GetXaxis()->SetTitleSize(0.035);
   2ad0ca655bd34c4a8023bca923630eb1->GetXaxis()->SetTitleFont(42);
   2ad0ca655bd34c4a8023bca923630eb1->GetYaxis()->SetLabelFont(42);
   2ad0ca655bd34c4a8023bca923630eb1->GetYaxis()->SetLabelSize(0.035);
   2ad0ca655bd34c4a8023bca923630eb1->GetYaxis()->SetTitleSize(0.035);
   2ad0ca655bd34c4a8023bca923630eb1->GetYaxis()->SetTitleFont(42);
   2ad0ca655bd34c4a8023bca923630eb1->GetZaxis()->SetLabelFont(42);
   2ad0ca655bd34c4a8023bca923630eb1->GetZaxis()->SetLabelSize(0.035);
   2ad0ca655bd34c4a8023bca923630eb1->GetZaxis()->SetTitleSize(0.035);
   2ad0ca655bd34c4a8023bca923630eb1->GetZaxis()->SetTitleFont(42);
   2ad0ca655bd34c4a8023bca923630eb1->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("4de24440470f46daa650e2ba4ce1da71","ZZ","f");

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
   entry=leg->AddEntry("f2e74cdd418a4f4cac83da32bea92c45","Charge mis-id","f");

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
   entry=leg->AddEntry("009ee0854d71400888624d1d24f8c3dd","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("14efaa7dbb584d2ba989986f4c5b943c","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("034668324b8749b7b0a3beed5ef1d782","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("69357102dd864983bd11aeca33245e1c","Bkg. Unc.","f");
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
