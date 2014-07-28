{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:12:12 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-0.6550874,337.5,5.895786);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *6a1cb9beb90b4cd0ad76868592a568cc = new THStack();
   6a1cb9beb90b4cd0ad76868592a568cc->SetName("6a1cb9beb90b4cd0ad76868592a568cc");
   6a1cb9beb90b4cd0ad76868592a568cc->SetTitle("WZ#rightarrow3l");
   6a1cb9beb90b4cd0ad76868592a568cc->SetMaximum(4.991142);
   
   TH1F *6a1cb9beb90b4cd0ad76868592a568cc_stack_2 = new TH1F("6a1cb9beb90b4cd0ad76868592a568cc_stack_2","WZ#rightarrow3l",1,0,300);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->SetMinimum(0);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->SetMaximum(5.240699);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->SetDirectory(0);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->SetLineColor(ci);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetXaxis()->SetLabelFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetXaxis()->SetLabelSize(0.035);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetXaxis()->SetTitleSize(0.035);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetXaxis()->SetTitleFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetYaxis()->SetTitle("Events");
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetYaxis()->SetLabelFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetYaxis()->SetLabelSize(0.035);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetYaxis()->SetTitleSize(0.035);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetYaxis()->SetTitleFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetZaxis()->SetLabelFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetZaxis()->SetLabelSize(0.035);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetZaxis()->SetTitleSize(0.035);
   6a1cb9beb90b4cd0ad76868592a568cc_stack_2->GetZaxis()->SetTitleFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->SetHistogram(6a1cb9beb90b4cd0ad76868592a568cc_stack_2);
   
   
   TH1D *6a1cb9beb90b4cd0ad76868592a568cc = new TH1D("6a1cb9beb90b4cd0ad76868592a568cc","WZ#rightarrow3l",1,0,300);
   6a1cb9beb90b4cd0ad76868592a568cc->SetBinContent(1,0.0817609);
   6a1cb9beb90b4cd0ad76868592a568cc->SetBinError(1,0.02755861);
   6a1cb9beb90b4cd0ad76868592a568cc->SetEntries(8.801905);

   ci = TColor::GetColor("#dc322f");
   6a1cb9beb90b4cd0ad76868592a568cc->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   6a1cb9beb90b4cd0ad76868592a568cc->SetLineColor(ci);
   6a1cb9beb90b4cd0ad76868592a568cc->GetXaxis()->SetLabelFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->GetXaxis()->SetLabelSize(0.035);
   6a1cb9beb90b4cd0ad76868592a568cc->GetXaxis()->SetTitleSize(0.035);
   6a1cb9beb90b4cd0ad76868592a568cc->GetXaxis()->SetTitleFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->GetYaxis()->SetLabelFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->GetYaxis()->SetLabelSize(0.035);
   6a1cb9beb90b4cd0ad76868592a568cc->GetYaxis()->SetTitleSize(0.035);
   6a1cb9beb90b4cd0ad76868592a568cc->GetYaxis()->SetTitleFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->GetZaxis()->SetLabelFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->GetZaxis()->SetLabelSize(0.035);
   6a1cb9beb90b4cd0ad76868592a568cc->GetZaxis()->SetTitleSize(0.035);
   6a1cb9beb90b4cd0ad76868592a568cc->GetZaxis()->SetTitleFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->Add(6a1cb9beb90b4cd0ad76868592a568cc,"hist");
   
   TH1D *698108f090794cfab49da23a8c463e5b = new TH1D("698108f090794cfab49da23a8c463e5b","ZZ",1,0,300);
   698108f090794cfab49da23a8c463e5b->SetBinContent(1,0.02363659);
   698108f090794cfab49da23a8c463e5b->SetBinContent(2,0.0004211853);
   698108f090794cfab49da23a8c463e5b->SetBinError(1,0.003387859);
   698108f090794cfab49da23a8c463e5b->SetBinError(2,0.0004211853);
   698108f090794cfab49da23a8c463e5b->SetEntries(48.67645);

   ci = TColor::GetColor("#50a634");
   698108f090794cfab49da23a8c463e5b->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   698108f090794cfab49da23a8c463e5b->SetLineColor(ci);
   698108f090794cfab49da23a8c463e5b->GetXaxis()->SetLabelFont(42);
   698108f090794cfab49da23a8c463e5b->GetXaxis()->SetLabelSize(0.035);
   698108f090794cfab49da23a8c463e5b->GetXaxis()->SetTitleSize(0.035);
   698108f090794cfab49da23a8c463e5b->GetXaxis()->SetTitleFont(42);
   698108f090794cfab49da23a8c463e5b->GetYaxis()->SetLabelFont(42);
   698108f090794cfab49da23a8c463e5b->GetYaxis()->SetLabelSize(0.035);
   698108f090794cfab49da23a8c463e5b->GetYaxis()->SetTitleSize(0.035);
   698108f090794cfab49da23a8c463e5b->GetYaxis()->SetTitleFont(42);
   698108f090794cfab49da23a8c463e5b->GetZaxis()->SetLabelFont(42);
   698108f090794cfab49da23a8c463e5b->GetZaxis()->SetLabelSize(0.035);
   698108f090794cfab49da23a8c463e5b->GetZaxis()->SetTitleSize(0.035);
   698108f090794cfab49da23a8c463e5b->GetZaxis()->SetTitleFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->Add(698108f090794cfab49da23a8c463e5b,"hist");
   
   TH1D *2d959f9aaee44a83b2630dc4f071b8bb = new TH1D("2d959f9aaee44a83b2630dc4f071b8bb","Charge mis-id",1,0,300);
   2d959f9aaee44a83b2630dc4f071b8bb->SetBinContent(1,1.588471);
   2d959f9aaee44a83b2630dc4f071b8bb->SetBinContent(2,0.004329216);
   2d959f9aaee44a83b2630dc4f071b8bb->SetBinError(1,0.05124268);
   2d959f9aaee44a83b2630dc4f071b8bb->SetBinError(2,0.002480412);
   2d959f9aaee44a83b2630dc4f071b8bb->SetEntries(961.3347);

   ci = TColor::GetColor("#9999cc");
   2d959f9aaee44a83b2630dc4f071b8bb->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   2d959f9aaee44a83b2630dc4f071b8bb->SetLineColor(ci);
   2d959f9aaee44a83b2630dc4f071b8bb->SetMarkerStyle(20);
   2d959f9aaee44a83b2630dc4f071b8bb->GetXaxis()->SetLabelFont(42);
   2d959f9aaee44a83b2630dc4f071b8bb->GetXaxis()->SetLabelSize(0.035);
   2d959f9aaee44a83b2630dc4f071b8bb->GetXaxis()->SetTitleSize(0.035);
   2d959f9aaee44a83b2630dc4f071b8bb->GetXaxis()->SetTitleFont(42);
   2d959f9aaee44a83b2630dc4f071b8bb->GetYaxis()->SetLabelFont(42);
   2d959f9aaee44a83b2630dc4f071b8bb->GetYaxis()->SetLabelSize(0.035);
   2d959f9aaee44a83b2630dc4f071b8bb->GetYaxis()->SetTitleSize(0.035);
   2d959f9aaee44a83b2630dc4f071b8bb->GetYaxis()->SetTitleFont(42);
   2d959f9aaee44a83b2630dc4f071b8bb->GetZaxis()->SetLabelFont(42);
   2d959f9aaee44a83b2630dc4f071b8bb->GetZaxis()->SetLabelSize(0.035);
   2d959f9aaee44a83b2630dc4f071b8bb->GetZaxis()->SetTitleSize(0.035);
   2d959f9aaee44a83b2630dc4f071b8bb->GetZaxis()->SetTitleFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->Add(2d959f9aaee44a83b2630dc4f071b8bb,"hist");
   
   TH1D *4c8a14cd37454b3e9e8677c9ac9511c3 = new TH1D("4c8a14cd37454b3e9e8677c9ac9511c3","WZ#rightarrowl#tau#tau",1,0,300);
   4c8a14cd37454b3e9e8677c9ac9511c3->SetBinContent(1,0.09395146);
   4c8a14cd37454b3e9e8677c9ac9511c3->SetBinError(1,0.03013851);
   4c8a14cd37454b3e9e8677c9ac9511c3->SetEntries(9.717701);

   ci = TColor::GetColor("#268bd2");
   4c8a14cd37454b3e9e8677c9ac9511c3->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   4c8a14cd37454b3e9e8677c9ac9511c3->SetLineColor(ci);
   4c8a14cd37454b3e9e8677c9ac9511c3->GetXaxis()->SetLabelFont(42);
   4c8a14cd37454b3e9e8677c9ac9511c3->GetXaxis()->SetLabelSize(0.035);
   4c8a14cd37454b3e9e8677c9ac9511c3->GetXaxis()->SetTitleSize(0.035);
   4c8a14cd37454b3e9e8677c9ac9511c3->GetXaxis()->SetTitleFont(42);
   4c8a14cd37454b3e9e8677c9ac9511c3->GetYaxis()->SetLabelFont(42);
   4c8a14cd37454b3e9e8677c9ac9511c3->GetYaxis()->SetLabelSize(0.035);
   4c8a14cd37454b3e9e8677c9ac9511c3->GetYaxis()->SetTitleSize(0.035);
   4c8a14cd37454b3e9e8677c9ac9511c3->GetYaxis()->SetTitleFont(42);
   4c8a14cd37454b3e9e8677c9ac9511c3->GetZaxis()->SetLabelFont(42);
   4c8a14cd37454b3e9e8677c9ac9511c3->GetZaxis()->SetLabelSize(0.035);
   4c8a14cd37454b3e9e8677c9ac9511c3->GetZaxis()->SetTitleSize(0.035);
   4c8a14cd37454b3e9e8677c9ac9511c3->GetZaxis()->SetTitleFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->Add(4c8a14cd37454b3e9e8677c9ac9511c3,"hist");
   
   TH1D *e6d2dfdb971c40ecbd710630c7da3581 = new TH1D("e6d2dfdb971c40ecbd710630c7da3581","Reducible bkg.",1,0,300);
   e6d2dfdb971c40ecbd710630c7da3581->SetBinContent(0,1e-05);
   e6d2dfdb971c40ecbd710630c7da3581->SetBinContent(1,2.36057);
   e6d2dfdb971c40ecbd710630c7da3581->SetBinContent(2,0.09835606);
   e6d2dfdb971c40ecbd710630c7da3581->SetBinError(0,0.02710793);
   e6d2dfdb971c40ecbd710630c7da3581->SetBinError(1,0.6169697);
   e6d2dfdb971c40ecbd710630c7da3581->SetBinError(2,0.106406);
   e6d2dfdb971c40ecbd710630c7da3581->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   e6d2dfdb971c40ecbd710630c7da3581->SetFillColor(ci);
   e6d2dfdb971c40ecbd710630c7da3581->SetMarkerStyle(20);
   e6d2dfdb971c40ecbd710630c7da3581->GetXaxis()->SetLabelFont(42);
   e6d2dfdb971c40ecbd710630c7da3581->GetXaxis()->SetLabelSize(0.035);
   e6d2dfdb971c40ecbd710630c7da3581->GetXaxis()->SetTitleSize(0.035);
   e6d2dfdb971c40ecbd710630c7da3581->GetXaxis()->SetTitleFont(42);
   e6d2dfdb971c40ecbd710630c7da3581->GetYaxis()->SetLabelFont(42);
   e6d2dfdb971c40ecbd710630c7da3581->GetYaxis()->SetLabelSize(0.035);
   e6d2dfdb971c40ecbd710630c7da3581->GetYaxis()->SetTitleSize(0.035);
   e6d2dfdb971c40ecbd710630c7da3581->GetYaxis()->SetTitleFont(42);
   e6d2dfdb971c40ecbd710630c7da3581->GetZaxis()->SetLabelFont(42);
   e6d2dfdb971c40ecbd710630c7da3581->GetZaxis()->SetLabelSize(0.035);
   e6d2dfdb971c40ecbd710630c7da3581->GetZaxis()->SetTitleSize(0.035);
   e6d2dfdb971c40ecbd710630c7da3581->GetZaxis()->SetTitleFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->Add(e6d2dfdb971c40ecbd710630c7da3581,"hist");
   
   TH1D *0501bab972f941479994c30e0a838da5 = new TH1D("0501bab972f941479994c30e0a838da5","VH H#rightarrowWW",1,0,300);
   0501bab972f941479994c30e0a838da5->SetBinContent(1,0.0009754478);
   0501bab972f941479994c30e0a838da5->SetBinError(1,0.000689813);
   0501bab972f941479994c30e0a838da5->SetEntries(1.99961);

   ci = TColor::GetColor("#cb4b16");
   0501bab972f941479994c30e0a838da5->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   0501bab972f941479994c30e0a838da5->SetLineColor(ci);
   0501bab972f941479994c30e0a838da5->GetXaxis()->SetLabelFont(42);
   0501bab972f941479994c30e0a838da5->GetXaxis()->SetLabelSize(0.035);
   0501bab972f941479994c30e0a838da5->GetXaxis()->SetTitleSize(0.035);
   0501bab972f941479994c30e0a838da5->GetXaxis()->SetTitleFont(42);
   0501bab972f941479994c30e0a838da5->GetYaxis()->SetLabelFont(42);
   0501bab972f941479994c30e0a838da5->GetYaxis()->SetLabelSize(0.035);
   0501bab972f941479994c30e0a838da5->GetYaxis()->SetTitleSize(0.035);
   0501bab972f941479994c30e0a838da5->GetYaxis()->SetTitleFont(42);
   0501bab972f941479994c30e0a838da5->GetZaxis()->SetLabelFont(42);
   0501bab972f941479994c30e0a838da5->GetZaxis()->SetLabelSize(0.035);
   0501bab972f941479994c30e0a838da5->GetZaxis()->SetTitleSize(0.035);
   0501bab972f941479994c30e0a838da5->GetZaxis()->SetTitleFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->Add(0501bab972f941479994c30e0a838da5,"hist");
   
   TH1D *fcfeadcc8f3843a8b90ecbcba1c28ae8 = new TH1D("fcfeadcc8f3843a8b90ecbcba1c28ae8","(1#times) m_{H} = 125",1,0,300);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->SetBinContent(1,0.009919152);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->SetBinError(1,0.005742936);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->SetEntries(2.983192);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->SetFillColor(1);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   fcfeadcc8f3843a8b90ecbcba1c28ae8->SetLineColor(ci);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->SetLineStyle(2);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->SetLineWidth(4);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->GetXaxis()->SetLabelFont(42);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->GetXaxis()->SetLabelSize(0.035);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->GetXaxis()->SetTitleSize(0.035);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->GetXaxis()->SetTitleFont(42);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->GetYaxis()->SetLabelFont(42);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->GetYaxis()->SetLabelSize(0.035);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->GetYaxis()->SetTitleSize(0.035);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->GetYaxis()->SetTitleFont(42);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->GetZaxis()->SetLabelFont(42);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->GetZaxis()->SetLabelSize(0.035);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->GetZaxis()->SetTitleSize(0.035);
   fcfeadcc8f3843a8b90ecbcba1c28ae8->GetZaxis()->SetTitleFont(42);
   6a1cb9beb90b4cd0ad76868592a568cc->Add(fcfeadcc8f3843a8b90ecbcba1c28ae8,"hist");
   6a1cb9beb90b4cd0ad76868592a568cc->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("6a1cb9beb90b4cd0ad76868592a568cc","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("698108f090794cfab49da23a8c463e5b","ZZ","f");

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
   entry=leg->AddEntry("2d959f9aaee44a83b2630dc4f071b8bb","Charge mis-id","f");

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
   entry=leg->AddEntry("4c8a14cd37454b3e9e8677c9ac9511c3","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("e6d2dfdb971c40ecbd710630c7da3581","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("0501bab972f941479994c30e0a838da5","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("fcfeadcc8f3843a8b90ecbcba1c28ae8","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("4903f8c0cfbe4aa4ab8ebcd93fca81d4","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_932f6c93e1a54ece960f3929994f177a","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *4903f8c0cfbe4aa4ab8ebcd93fca81d4 = new TH1D("4903f8c0cfbe4aa4ab8ebcd93fca81d4","Bkg. Unc.",1,0,300);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->SetBinContent(1,4.14839);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->SetBinError(1,2.361192);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->SetEntries(1);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->SetFillColor(1);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->SetLineColor(ci);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->SetMarkerSize(0);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->GetXaxis()->SetLabelFont(42);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->GetXaxis()->SetLabelSize(0.035);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->GetXaxis()->SetTitleSize(0.035);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->GetXaxis()->SetTitleFont(42);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->GetYaxis()->SetLabelFont(42);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->GetYaxis()->SetLabelSize(0.035);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->GetYaxis()->SetTitleSize(0.035);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->GetYaxis()->SetTitleFont(42);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->GetZaxis()->SetLabelFont(42);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->GetZaxis()->SetLabelSize(0.035);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->GetZaxis()->SetTitleSize(0.035);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->GetZaxis()->SetTitleFont(42);
   4903f8c0cfbe4aa4ab8ebcd93fca81d4->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_932f6c93e1a54ece960f3929994f177a");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,4);
   grae->SetPointError(0,0,0,1.914367,3.162815);
   
   TH1F *Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2 = new TH1F("Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2","Observed",100,149.9,151.1);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->SetMinimum(1.577915);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->SetMaximum(7.670533);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->SetDirectory(0);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->SetLineColor(ci);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_932f6c93e1a54ece960f3929994f177a2);
   
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
   entry=leg->AddEntry("6a1cb9beb90b4cd0ad76868592a568cc","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("698108f090794cfab49da23a8c463e5b","ZZ","f");

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
   entry=leg->AddEntry("2d959f9aaee44a83b2630dc4f071b8bb","Charge mis-id","f");

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
   entry=leg->AddEntry("4c8a14cd37454b3e9e8677c9ac9511c3","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("e6d2dfdb971c40ecbd710630c7da3581","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("0501bab972f941479994c30e0a838da5","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("fcfeadcc8f3843a8b90ecbcba1c28ae8","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("4903f8c0cfbe4aa4ab8ebcd93fca81d4","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_932f6c93e1a54ece960f3929994f177a","Observed","P");
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
