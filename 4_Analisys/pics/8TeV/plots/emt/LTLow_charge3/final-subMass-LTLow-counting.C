{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:05:47 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-0.3476759,337.5,3.129083);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *03d42fcb3a2642b8af6968a4c772b2a6 = new THStack();
   03d42fcb3a2642b8af6968a4c772b2a6->SetName("03d42fcb3a2642b8af6968a4c772b2a6");
   03d42fcb3a2642b8af6968a4c772b2a6->SetTitle("WZ#rightarrow3l");
   03d42fcb3a2642b8af6968a4c772b2a6->SetMaximum(2.648959);
   
   TH1F *03d42fcb3a2642b8af6968a4c772b2a6_stack_6 = new TH1F("03d42fcb3a2642b8af6968a4c772b2a6_stack_6","WZ#rightarrow3l",1,0,300);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->SetMinimum(0);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->SetMaximum(2.781407);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->SetDirectory(0);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->SetLineColor(ci);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetXaxis()->SetLabelFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetXaxis()->SetLabelSize(0.035);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetXaxis()->SetTitleSize(0.035);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetXaxis()->SetTitleFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetYaxis()->SetTitle("Events");
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetYaxis()->SetLabelFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetYaxis()->SetLabelSize(0.035);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetYaxis()->SetTitleSize(0.035);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetYaxis()->SetTitleFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetZaxis()->SetLabelFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetZaxis()->SetLabelSize(0.035);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetZaxis()->SetTitleSize(0.035);
   03d42fcb3a2642b8af6968a4c772b2a6_stack_6->GetZaxis()->SetTitleFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->SetHistogram(03d42fcb3a2642b8af6968a4c772b2a6_stack_6);
   
   
   TH1D *03d42fcb3a2642b8af6968a4c772b2a6 = new TH1D("03d42fcb3a2642b8af6968a4c772b2a6","WZ#rightarrow3l",1,0,300);
   03d42fcb3a2642b8af6968a4c772b2a6->SetBinContent(1,0.179888);
   03d42fcb3a2642b8af6968a4c772b2a6->SetBinError(1,0.04213768);
   03d42fcb3a2642b8af6968a4c772b2a6->SetEntries(18.22482);

   ci = TColor::GetColor("#dc322f");
   03d42fcb3a2642b8af6968a4c772b2a6->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   03d42fcb3a2642b8af6968a4c772b2a6->SetLineColor(ci);
   03d42fcb3a2642b8af6968a4c772b2a6->GetXaxis()->SetLabelFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->GetXaxis()->SetLabelSize(0.035);
   03d42fcb3a2642b8af6968a4c772b2a6->GetXaxis()->SetTitleSize(0.035);
   03d42fcb3a2642b8af6968a4c772b2a6->GetXaxis()->SetTitleFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->GetYaxis()->SetLabelFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->GetYaxis()->SetLabelSize(0.035);
   03d42fcb3a2642b8af6968a4c772b2a6->GetYaxis()->SetTitleSize(0.035);
   03d42fcb3a2642b8af6968a4c772b2a6->GetYaxis()->SetTitleFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->GetZaxis()->SetLabelFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->GetZaxis()->SetLabelSize(0.035);
   03d42fcb3a2642b8af6968a4c772b2a6->GetZaxis()->SetTitleSize(0.035);
   03d42fcb3a2642b8af6968a4c772b2a6->GetZaxis()->SetTitleFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->Add(03d42fcb3a2642b8af6968a4c772b2a6,"hist");
   
   TH1D *e4221829cd8a42f392b6962915ba36d4 = new TH1D("e4221829cd8a42f392b6962915ba36d4","ZZ",1,0,300);
   e4221829cd8a42f392b6962915ba36d4->SetBinContent(1,0.02211359);
   e4221829cd8a42f392b6962915ba36d4->SetBinError(1,0.003193105);
   e4221829cd8a42f392b6962915ba36d4->SetEntries(47.96145);

   ci = TColor::GetColor("#50a634");
   e4221829cd8a42f392b6962915ba36d4->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   e4221829cd8a42f392b6962915ba36d4->SetLineColor(ci);
   e4221829cd8a42f392b6962915ba36d4->GetXaxis()->SetLabelFont(42);
   e4221829cd8a42f392b6962915ba36d4->GetXaxis()->SetLabelSize(0.035);
   e4221829cd8a42f392b6962915ba36d4->GetXaxis()->SetTitleSize(0.035);
   e4221829cd8a42f392b6962915ba36d4->GetXaxis()->SetTitleFont(42);
   e4221829cd8a42f392b6962915ba36d4->GetYaxis()->SetLabelFont(42);
   e4221829cd8a42f392b6962915ba36d4->GetYaxis()->SetLabelSize(0.035);
   e4221829cd8a42f392b6962915ba36d4->GetYaxis()->SetTitleSize(0.035);
   e4221829cd8a42f392b6962915ba36d4->GetYaxis()->SetTitleFont(42);
   e4221829cd8a42f392b6962915ba36d4->GetZaxis()->SetLabelFont(42);
   e4221829cd8a42f392b6962915ba36d4->GetZaxis()->SetLabelSize(0.035);
   e4221829cd8a42f392b6962915ba36d4->GetZaxis()->SetTitleSize(0.035);
   e4221829cd8a42f392b6962915ba36d4->GetZaxis()->SetTitleFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->Add(e4221829cd8a42f392b6962915ba36d4,"hist");
   
   TH1D *683044455f604620927b665db9919655 = new TH1D("683044455f604620927b665db9919655","Charge mis-id",1,0,300);
   683044455f604620927b665db9919655->SetBinContent(1,0.06275668);
   683044455f604620927b665db9919655->SetBinError(1,0.008493382);
   683044455f604620927b665db9919655->SetEntries(54.59573);

   ci = TColor::GetColor("#9999cc");
   683044455f604620927b665db9919655->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   683044455f604620927b665db9919655->SetLineColor(ci);
   683044455f604620927b665db9919655->SetMarkerStyle(20);
   683044455f604620927b665db9919655->GetXaxis()->SetLabelFont(42);
   683044455f604620927b665db9919655->GetXaxis()->SetLabelSize(0.035);
   683044455f604620927b665db9919655->GetXaxis()->SetTitleSize(0.035);
   683044455f604620927b665db9919655->GetXaxis()->SetTitleFont(42);
   683044455f604620927b665db9919655->GetYaxis()->SetLabelFont(42);
   683044455f604620927b665db9919655->GetYaxis()->SetLabelSize(0.035);
   683044455f604620927b665db9919655->GetYaxis()->SetTitleSize(0.035);
   683044455f604620927b665db9919655->GetYaxis()->SetTitleFont(42);
   683044455f604620927b665db9919655->GetZaxis()->SetLabelFont(42);
   683044455f604620927b665db9919655->GetZaxis()->SetLabelSize(0.035);
   683044455f604620927b665db9919655->GetZaxis()->SetTitleSize(0.035);
   683044455f604620927b665db9919655->GetZaxis()->SetTitleFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->Add(683044455f604620927b665db9919655,"hist");
   
   TH1D *32ab8e3b987e4af0b848b05f7a32ce51 = new TH1D("32ab8e3b987e4af0b848b05f7a32ce51","WZ#rightarrowl#tau#tau",1,0,300);
   32ab8e3b987e4af0b848b05f7a32ce51->SetBinContent(1,0.0706226);
   32ab8e3b987e4af0b848b05f7a32ce51->SetBinError(1,0.02589722);
   32ab8e3b987e4af0b848b05f7a32ce51->SetEntries(7.436712);

   ci = TColor::GetColor("#268bd2");
   32ab8e3b987e4af0b848b05f7a32ce51->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   32ab8e3b987e4af0b848b05f7a32ce51->SetLineColor(ci);
   32ab8e3b987e4af0b848b05f7a32ce51->GetXaxis()->SetLabelFont(42);
   32ab8e3b987e4af0b848b05f7a32ce51->GetXaxis()->SetLabelSize(0.035);
   32ab8e3b987e4af0b848b05f7a32ce51->GetXaxis()->SetTitleSize(0.035);
   32ab8e3b987e4af0b848b05f7a32ce51->GetXaxis()->SetTitleFont(42);
   32ab8e3b987e4af0b848b05f7a32ce51->GetYaxis()->SetLabelFont(42);
   32ab8e3b987e4af0b848b05f7a32ce51->GetYaxis()->SetLabelSize(0.035);
   32ab8e3b987e4af0b848b05f7a32ce51->GetYaxis()->SetTitleSize(0.035);
   32ab8e3b987e4af0b848b05f7a32ce51->GetYaxis()->SetTitleFont(42);
   32ab8e3b987e4af0b848b05f7a32ce51->GetZaxis()->SetLabelFont(42);
   32ab8e3b987e4af0b848b05f7a32ce51->GetZaxis()->SetLabelSize(0.035);
   32ab8e3b987e4af0b848b05f7a32ce51->GetZaxis()->SetTitleSize(0.035);
   32ab8e3b987e4af0b848b05f7a32ce51->GetZaxis()->SetTitleFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->Add(32ab8e3b987e4af0b848b05f7a32ce51,"hist");
   
   TH1D *bfb047e159d5400f8e1e0a1b82235926 = new TH1D("bfb047e159d5400f8e1e0a1b82235926","Reducible bkg.",1,0,300);
   bfb047e159d5400f8e1e0a1b82235926->SetBinContent(0,1e-05);
   bfb047e159d5400f8e1e0a1b82235926->SetBinContent(1,1.867058);
   bfb047e159d5400f8e1e0a1b82235926->SetBinContent(2,1e-05);
   bfb047e159d5400f8e1e0a1b82235926->SetBinError(0,0.03571908);
   bfb047e159d5400f8e1e0a1b82235926->SetBinError(1,0.4465296);
   bfb047e159d5400f8e1e0a1b82235926->SetBinError(2,0.03571908);
   bfb047e159d5400f8e1e0a1b82235926->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   bfb047e159d5400f8e1e0a1b82235926->SetFillColor(ci);
   bfb047e159d5400f8e1e0a1b82235926->SetMarkerStyle(20);
   bfb047e159d5400f8e1e0a1b82235926->GetXaxis()->SetLabelFont(42);
   bfb047e159d5400f8e1e0a1b82235926->GetXaxis()->SetLabelSize(0.035);
   bfb047e159d5400f8e1e0a1b82235926->GetXaxis()->SetTitleSize(0.035);
   bfb047e159d5400f8e1e0a1b82235926->GetXaxis()->SetTitleFont(42);
   bfb047e159d5400f8e1e0a1b82235926->GetYaxis()->SetLabelFont(42);
   bfb047e159d5400f8e1e0a1b82235926->GetYaxis()->SetLabelSize(0.035);
   bfb047e159d5400f8e1e0a1b82235926->GetYaxis()->SetTitleSize(0.035);
   bfb047e159d5400f8e1e0a1b82235926->GetYaxis()->SetTitleFont(42);
   bfb047e159d5400f8e1e0a1b82235926->GetZaxis()->SetLabelFont(42);
   bfb047e159d5400f8e1e0a1b82235926->GetZaxis()->SetLabelSize(0.035);
   bfb047e159d5400f8e1e0a1b82235926->GetZaxis()->SetTitleSize(0.035);
   bfb047e159d5400f8e1e0a1b82235926->GetZaxis()->SetTitleFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->Add(bfb047e159d5400f8e1e0a1b82235926,"hist");
   
   TH1D *bf868885f064471ba2dc8efda8cb99a5 = new TH1D("bf868885f064471ba2dc8efda8cb99a5","VH H#rightarrowWW",1,0,300);
   bf868885f064471ba2dc8efda8cb99a5->SetBinContent(1,0.0009109325);
   bf868885f064471ba2dc8efda8cb99a5->SetBinError(1,0.000644386);
   bf868885f064471ba2dc8efda8cb99a5->SetEntries(1.99839);

   ci = TColor::GetColor("#cb4b16");
   bf868885f064471ba2dc8efda8cb99a5->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   bf868885f064471ba2dc8efda8cb99a5->SetLineColor(ci);
   bf868885f064471ba2dc8efda8cb99a5->GetXaxis()->SetLabelFont(42);
   bf868885f064471ba2dc8efda8cb99a5->GetXaxis()->SetLabelSize(0.035);
   bf868885f064471ba2dc8efda8cb99a5->GetXaxis()->SetTitleSize(0.035);
   bf868885f064471ba2dc8efda8cb99a5->GetXaxis()->SetTitleFont(42);
   bf868885f064471ba2dc8efda8cb99a5->GetYaxis()->SetLabelFont(42);
   bf868885f064471ba2dc8efda8cb99a5->GetYaxis()->SetLabelSize(0.035);
   bf868885f064471ba2dc8efda8cb99a5->GetYaxis()->SetTitleSize(0.035);
   bf868885f064471ba2dc8efda8cb99a5->GetYaxis()->SetTitleFont(42);
   bf868885f064471ba2dc8efda8cb99a5->GetZaxis()->SetLabelFont(42);
   bf868885f064471ba2dc8efda8cb99a5->GetZaxis()->SetLabelSize(0.035);
   bf868885f064471ba2dc8efda8cb99a5->GetZaxis()->SetTitleSize(0.035);
   bf868885f064471ba2dc8efda8cb99a5->GetZaxis()->SetTitleFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->Add(bf868885f064471ba2dc8efda8cb99a5,"hist");
   
   TH1D *a2fa2a5e6ba6419cae4f77eb5be5cef5 = new TH1D("a2fa2a5e6ba6419cae4f77eb5be5cef5","(1#times) m_{H} = 125",1,0,300);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->SetBinContent(1,0.004115952);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->SetBinError(1,0.004115952);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->SetEntries(0.9999999);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->SetFillColor(1);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   a2fa2a5e6ba6419cae4f77eb5be5cef5->SetLineColor(ci);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->SetLineStyle(2);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->SetLineWidth(4);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->GetXaxis()->SetLabelFont(42);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->GetXaxis()->SetLabelSize(0.035);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->GetXaxis()->SetTitleSize(0.035);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->GetXaxis()->SetTitleFont(42);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->GetYaxis()->SetLabelFont(42);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->GetYaxis()->SetLabelSize(0.035);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->GetYaxis()->SetTitleSize(0.035);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->GetYaxis()->SetTitleFont(42);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->GetZaxis()->SetLabelFont(42);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->GetZaxis()->SetLabelSize(0.035);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->GetZaxis()->SetTitleSize(0.035);
   a2fa2a5e6ba6419cae4f77eb5be5cef5->GetZaxis()->SetTitleFont(42);
   03d42fcb3a2642b8af6968a4c772b2a6->Add(a2fa2a5e6ba6419cae4f77eb5be5cef5,"hist");
   03d42fcb3a2642b8af6968a4c772b2a6->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("03d42fcb3a2642b8af6968a4c772b2a6","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("e4221829cd8a42f392b6962915ba36d4","ZZ","f");

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
   entry=leg->AddEntry("683044455f604620927b665db9919655","Charge mis-id","f");

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
   entry=leg->AddEntry("32ab8e3b987e4af0b848b05f7a32ce51","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("bfb047e159d5400f8e1e0a1b82235926","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("bf868885f064471ba2dc8efda8cb99a5","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("a2fa2a5e6ba6419cae4f77eb5be5cef5","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("45fc39d8f1a74067894ddda1dab6e35b","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_347a8eea1dd944f7b991dc7d0f7e016c","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *45fc39d8f1a74067894ddda1dab6e35b = new TH1D("45fc39d8f1a74067894ddda1dab6e35b","Bkg. Unc.",1,0,300);
   45fc39d8f1a74067894ddda1dab6e35b->SetBinContent(1,2.202439);
   45fc39d8f1a74067894ddda1dab6e35b->SetBinError(1,1.867245);
   45fc39d8f1a74067894ddda1dab6e35b->SetEntries(1);
   45fc39d8f1a74067894ddda1dab6e35b->SetFillColor(1);
   45fc39d8f1a74067894ddda1dab6e35b->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   45fc39d8f1a74067894ddda1dab6e35b->SetLineColor(ci);
   45fc39d8f1a74067894ddda1dab6e35b->SetMarkerSize(0);
   45fc39d8f1a74067894ddda1dab6e35b->GetXaxis()->SetLabelFont(42);
   45fc39d8f1a74067894ddda1dab6e35b->GetXaxis()->SetLabelSize(0.035);
   45fc39d8f1a74067894ddda1dab6e35b->GetXaxis()->SetTitleSize(0.035);
   45fc39d8f1a74067894ddda1dab6e35b->GetXaxis()->SetTitleFont(42);
   45fc39d8f1a74067894ddda1dab6e35b->GetYaxis()->SetLabelFont(42);
   45fc39d8f1a74067894ddda1dab6e35b->GetYaxis()->SetLabelSize(0.035);
   45fc39d8f1a74067894ddda1dab6e35b->GetYaxis()->SetTitleSize(0.035);
   45fc39d8f1a74067894ddda1dab6e35b->GetYaxis()->SetTitleFont(42);
   45fc39d8f1a74067894ddda1dab6e35b->GetZaxis()->SetLabelFont(42);
   45fc39d8f1a74067894ddda1dab6e35b->GetZaxis()->SetLabelSize(0.035);
   45fc39d8f1a74067894ddda1dab6e35b->GetZaxis()->SetTitleSize(0.035);
   45fc39d8f1a74067894ddda1dab6e35b->GetZaxis()->SetTitleFont(42);
   45fc39d8f1a74067894ddda1dab6e35b->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_347a8eea1dd944f7b991dc7d0f7e016c");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,2);
   grae->SetPointError(0,0,0,1.29183,2.63791);
   
   TH1F *Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6 = new TH1F("Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6","Observed",100,149.9,151.1);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->SetMinimum(0.3151964);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->SetMaximum(5.030884);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->SetDirectory(0);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->SetLineColor(ci);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_347a8eea1dd944f7b991dc7d0f7e016c6);
   
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
   entry=leg->AddEntry("03d42fcb3a2642b8af6968a4c772b2a6","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("e4221829cd8a42f392b6962915ba36d4","ZZ","f");

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
   entry=leg->AddEntry("683044455f604620927b665db9919655","Charge mis-id","f");

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
   entry=leg->AddEntry("32ab8e3b987e4af0b848b05f7a32ce51","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("bfb047e159d5400f8e1e0a1b82235926","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("bf868885f064471ba2dc8efda8cb99a5","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("a2fa2a5e6ba6419cae4f77eb5be5cef5","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("45fc39d8f1a74067894ddda1dab6e35b","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_347a8eea1dd944f7b991dc7d0f7e016c","Observed","P");
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
