{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:02:38 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-11.8125,337.5,106.3125);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *8e8433bef319453ca3eed695d8115844 = new THStack();
   8e8433bef319453ca3eed695d8115844->SetName("8e8433bef319453ca3eed695d8115844");
   8e8433bef319453ca3eed695d8115844->SetTitle("ZZ");
   8e8433bef319453ca3eed695d8115844->SetMaximum(90);
   
   TH1F *8e8433bef319453ca3eed695d8115844_stack_12 = new TH1F("8e8433bef319453ca3eed695d8115844_stack_12","ZZ",1,0,300);
   8e8433bef319453ca3eed695d8115844_stack_12->SetMinimum(0);
   8e8433bef319453ca3eed695d8115844_stack_12->SetMaximum(94.5);
   8e8433bef319453ca3eed695d8115844_stack_12->SetDirectory(0);
   8e8433bef319453ca3eed695d8115844_stack_12->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   8e8433bef319453ca3eed695d8115844_stack_12->SetLineColor(ci);
   8e8433bef319453ca3eed695d8115844_stack_12->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   8e8433bef319453ca3eed695d8115844_stack_12->GetXaxis()->SetLabelFont(42);
   8e8433bef319453ca3eed695d8115844_stack_12->GetXaxis()->SetLabelSize(0.035);
   8e8433bef319453ca3eed695d8115844_stack_12->GetXaxis()->SetTitleSize(0.035);
   8e8433bef319453ca3eed695d8115844_stack_12->GetXaxis()->SetTitleFont(42);
   8e8433bef319453ca3eed695d8115844_stack_12->GetYaxis()->SetTitle("Events");
   8e8433bef319453ca3eed695d8115844_stack_12->GetYaxis()->SetLabelFont(42);
   8e8433bef319453ca3eed695d8115844_stack_12->GetYaxis()->SetLabelSize(0.035);
   8e8433bef319453ca3eed695d8115844_stack_12->GetYaxis()->SetTitleSize(0.035);
   8e8433bef319453ca3eed695d8115844_stack_12->GetYaxis()->SetTitleFont(42);
   8e8433bef319453ca3eed695d8115844_stack_12->GetZaxis()->SetLabelFont(42);
   8e8433bef319453ca3eed695d8115844_stack_12->GetZaxis()->SetLabelSize(0.035);
   8e8433bef319453ca3eed695d8115844_stack_12->GetZaxis()->SetTitleSize(0.035);
   8e8433bef319453ca3eed695d8115844_stack_12->GetZaxis()->SetTitleFont(42);
   8e8433bef319453ca3eed695d8115844->SetHistogram(8e8433bef319453ca3eed695d8115844_stack_12);
   
   
   TH1D *8e8433bef319453ca3eed695d8115844 = new TH1D("8e8433bef319453ca3eed695d8115844","ZZ",1,0,300);
   8e8433bef319453ca3eed695d8115844->SetBinContent(1,0.1769821);
   8e8433bef319453ca3eed695d8115844->SetBinContent(2,0.00324733);
   8e8433bef319453ca3eed695d8115844->SetBinError(1,0.01156356);
   8e8433bef319453ca3eed695d8115844->SetBinError(2,0.001624803);
   8e8433bef319453ca3eed695d8115844->SetEntries(234.2477);

   ci = TColor::GetColor("#50a634");
   8e8433bef319453ca3eed695d8115844->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   8e8433bef319453ca3eed695d8115844->SetLineColor(ci);
   8e8433bef319453ca3eed695d8115844->GetXaxis()->SetLabelFont(42);
   8e8433bef319453ca3eed695d8115844->GetXaxis()->SetLabelSize(0.035);
   8e8433bef319453ca3eed695d8115844->GetXaxis()->SetTitleSize(0.035);
   8e8433bef319453ca3eed695d8115844->GetXaxis()->SetTitleFont(42);
   8e8433bef319453ca3eed695d8115844->GetYaxis()->SetLabelFont(42);
   8e8433bef319453ca3eed695d8115844->GetYaxis()->SetLabelSize(0.035);
   8e8433bef319453ca3eed695d8115844->GetYaxis()->SetTitleSize(0.035);
   8e8433bef319453ca3eed695d8115844->GetYaxis()->SetTitleFont(42);
   8e8433bef319453ca3eed695d8115844->GetZaxis()->SetLabelFont(42);
   8e8433bef319453ca3eed695d8115844->GetZaxis()->SetLabelSize(0.035);
   8e8433bef319453ca3eed695d8115844->GetZaxis()->SetTitleSize(0.035);
   8e8433bef319453ca3eed695d8115844->GetZaxis()->SetTitleFont(42);
   8e8433bef319453ca3eed695d8115844->Add(8e8433bef319453ca3eed695d8115844,"hist");
   
   TH1D *a45f60ecb63648a5b8743c4d01085ced = new TH1D("a45f60ecb63648a5b8743c4d01085ced","Charge mis-id",1,0,300);
   a45f60ecb63648a5b8743c4d01085ced->SetBinContent(1,13.05275);
   a45f60ecb63648a5b8743c4d01085ced->SetBinContent(2,0.1058829);
   a45f60ecb63648a5b8743c4d01085ced->SetBinError(1,0.1739975);
   a45f60ecb63648a5b8743c4d01085ced->SetBinError(2,0.01713824);
   a45f60ecb63648a5b8743c4d01085ced->SetEntries(5634.402);

   ci = TColor::GetColor("#9999cc");
   a45f60ecb63648a5b8743c4d01085ced->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   a45f60ecb63648a5b8743c4d01085ced->SetLineColor(ci);
   a45f60ecb63648a5b8743c4d01085ced->SetMarkerStyle(20);
   a45f60ecb63648a5b8743c4d01085ced->GetXaxis()->SetLabelFont(42);
   a45f60ecb63648a5b8743c4d01085ced->GetXaxis()->SetLabelSize(0.035);
   a45f60ecb63648a5b8743c4d01085ced->GetXaxis()->SetTitleSize(0.035);
   a45f60ecb63648a5b8743c4d01085ced->GetXaxis()->SetTitleFont(42);
   a45f60ecb63648a5b8743c4d01085ced->GetYaxis()->SetLabelFont(42);
   a45f60ecb63648a5b8743c4d01085ced->GetYaxis()->SetLabelSize(0.035);
   a45f60ecb63648a5b8743c4d01085ced->GetYaxis()->SetTitleSize(0.035);
   a45f60ecb63648a5b8743c4d01085ced->GetYaxis()->SetTitleFont(42);
   a45f60ecb63648a5b8743c4d01085ced->GetZaxis()->SetLabelFont(42);
   a45f60ecb63648a5b8743c4d01085ced->GetZaxis()->SetLabelSize(0.035);
   a45f60ecb63648a5b8743c4d01085ced->GetZaxis()->SetTitleSize(0.035);
   a45f60ecb63648a5b8743c4d01085ced->GetZaxis()->SetTitleFont(42);
   8e8433bef319453ca3eed695d8115844->Add(a45f60ecb63648a5b8743c4d01085ced,"hist");
   
   TH1D *34b30feeb28d442eb487aef5b0ecf613 = new TH1D("34b30feeb28d442eb487aef5b0ecf613","WZ#rightarrow3l",1,0,300);
   34b30feeb28d442eb487aef5b0ecf613->SetBinContent(1,2.598848);
   34b30feeb28d442eb487aef5b0ecf613->SetBinContent(2,0.02020646);
   34b30feeb28d442eb487aef5b0ecf613->SetBinError(1,0.1303211);
   34b30feeb28d442eb487aef5b0ecf613->SetBinError(2,0.01167588);
   34b30feeb28d442eb487aef5b0ecf613->SetEntries(397.6787);

   ci = TColor::GetColor("#dc322f");
   34b30feeb28d442eb487aef5b0ecf613->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   34b30feeb28d442eb487aef5b0ecf613->SetLineColor(ci);
   34b30feeb28d442eb487aef5b0ecf613->GetXaxis()->SetLabelFont(42);
   34b30feeb28d442eb487aef5b0ecf613->GetXaxis()->SetLabelSize(0.035);
   34b30feeb28d442eb487aef5b0ecf613->GetXaxis()->SetTitleSize(0.035);
   34b30feeb28d442eb487aef5b0ecf613->GetXaxis()->SetTitleFont(42);
   34b30feeb28d442eb487aef5b0ecf613->GetYaxis()->SetLabelFont(42);
   34b30feeb28d442eb487aef5b0ecf613->GetYaxis()->SetLabelSize(0.035);
   34b30feeb28d442eb487aef5b0ecf613->GetYaxis()->SetTitleSize(0.035);
   34b30feeb28d442eb487aef5b0ecf613->GetYaxis()->SetTitleFont(42);
   34b30feeb28d442eb487aef5b0ecf613->GetZaxis()->SetLabelFont(42);
   34b30feeb28d442eb487aef5b0ecf613->GetZaxis()->SetLabelSize(0.035);
   34b30feeb28d442eb487aef5b0ecf613->GetZaxis()->SetTitleSize(0.035);
   34b30feeb28d442eb487aef5b0ecf613->GetZaxis()->SetTitleFont(42);
   8e8433bef319453ca3eed695d8115844->Add(34b30feeb28d442eb487aef5b0ecf613,"hist");
   
   TH1D *d24db4cfba8141f490392bac0022cc1b = new TH1D("d24db4cfba8141f490392bac0022cc1b","WZ#rightarrowl#tau#tau",1,0,300);
   d24db4cfba8141f490392bac0022cc1b->SetBinContent(1,0.6619199);
   d24db4cfba8141f490392bac0022cc1b->SetBinContent(2,0.006992234);
   d24db4cfba8141f490392bac0022cc1b->SetBinError(1,0.06528301);
   d24db4cfba8141f490392bac0022cc1b->SetBinError(2,0.006601791);
   d24db4cfba8141f490392bac0022cc1b->SetEntries(102.8041);

   ci = TColor::GetColor("#268bd2");
   d24db4cfba8141f490392bac0022cc1b->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   d24db4cfba8141f490392bac0022cc1b->SetLineColor(ci);
   d24db4cfba8141f490392bac0022cc1b->GetXaxis()->SetLabelFont(42);
   d24db4cfba8141f490392bac0022cc1b->GetXaxis()->SetLabelSize(0.035);
   d24db4cfba8141f490392bac0022cc1b->GetXaxis()->SetTitleSize(0.035);
   d24db4cfba8141f490392bac0022cc1b->GetXaxis()->SetTitleFont(42);
   d24db4cfba8141f490392bac0022cc1b->GetYaxis()->SetLabelFont(42);
   d24db4cfba8141f490392bac0022cc1b->GetYaxis()->SetLabelSize(0.035);
   d24db4cfba8141f490392bac0022cc1b->GetYaxis()->SetTitleSize(0.035);
   d24db4cfba8141f490392bac0022cc1b->GetYaxis()->SetTitleFont(42);
   d24db4cfba8141f490392bac0022cc1b->GetZaxis()->SetLabelFont(42);
   d24db4cfba8141f490392bac0022cc1b->GetZaxis()->SetLabelSize(0.035);
   d24db4cfba8141f490392bac0022cc1b->GetZaxis()->SetTitleSize(0.035);
   d24db4cfba8141f490392bac0022cc1b->GetZaxis()->SetTitleFont(42);
   8e8433bef319453ca3eed695d8115844->Add(d24db4cfba8141f490392bac0022cc1b,"hist");
   
   TH1D *416f1f5d4f9049ebab06acdbcad9732c = new TH1D("416f1f5d4f9049ebab06acdbcad9732c","Reducible bkg.",1,0,300);
   416f1f5d4f9049ebab06acdbcad9732c->SetBinContent(0,1e-05);
   416f1f5d4f9049ebab06acdbcad9732c->SetBinContent(1,21.10648);
   416f1f5d4f9049ebab06acdbcad9732c->SetBinContent(2,0.3787898);
   416f1f5d4f9049ebab06acdbcad9732c->SetBinError(0,0.01276466);
   416f1f5d4f9049ebab06acdbcad9732c->SetBinError(1,1.333765);
   416f1f5d4f9049ebab06acdbcad9732c->SetBinError(2,0.1362076);
   416f1f5d4f9049ebab06acdbcad9732c->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   416f1f5d4f9049ebab06acdbcad9732c->SetFillColor(ci);
   416f1f5d4f9049ebab06acdbcad9732c->SetMarkerStyle(20);
   416f1f5d4f9049ebab06acdbcad9732c->GetXaxis()->SetLabelFont(42);
   416f1f5d4f9049ebab06acdbcad9732c->GetXaxis()->SetLabelSize(0.035);
   416f1f5d4f9049ebab06acdbcad9732c->GetXaxis()->SetTitleSize(0.035);
   416f1f5d4f9049ebab06acdbcad9732c->GetXaxis()->SetTitleFont(42);
   416f1f5d4f9049ebab06acdbcad9732c->GetYaxis()->SetLabelFont(42);
   416f1f5d4f9049ebab06acdbcad9732c->GetYaxis()->SetLabelSize(0.035);
   416f1f5d4f9049ebab06acdbcad9732c->GetYaxis()->SetTitleSize(0.035);
   416f1f5d4f9049ebab06acdbcad9732c->GetYaxis()->SetTitleFont(42);
   416f1f5d4f9049ebab06acdbcad9732c->GetZaxis()->SetLabelFont(42);
   416f1f5d4f9049ebab06acdbcad9732c->GetZaxis()->SetLabelSize(0.035);
   416f1f5d4f9049ebab06acdbcad9732c->GetZaxis()->SetTitleSize(0.035);
   416f1f5d4f9049ebab06acdbcad9732c->GetZaxis()->SetTitleFont(42);
   8e8433bef319453ca3eed695d8115844->Add(416f1f5d4f9049ebab06acdbcad9732c,"hist");
   8e8433bef319453ca3eed695d8115844->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("8e8433bef319453ca3eed695d8115844","ZZ","f");

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
   entry=leg->AddEntry("a45f60ecb63648a5b8743c4d01085ced","Charge mis-id","f");

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
   entry=leg->AddEntry("34b30feeb28d442eb487aef5b0ecf613","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("d24db4cfba8141f490392bac0022cc1b","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("416f1f5d4f9049ebab06acdbcad9732c","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("4d9ddd5561944ca3ae65f826f6138e79","Bkg. Unc.","f");
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
   
   TH1D *4d9ddd5561944ca3ae65f826f6138e79 = new TH1D("4d9ddd5561944ca3ae65f826f6138e79","Bkg. Unc.",1,0,300);
   4d9ddd5561944ca3ae65f826f6138e79->SetBinContent(1,37.59699);
   4d9ddd5561944ca3ae65f826f6138e79->SetBinError(1,1.479028);
   4d9ddd5561944ca3ae65f826f6138e79->SetEntries(1);
   4d9ddd5561944ca3ae65f826f6138e79->SetFillColor(1);
   4d9ddd5561944ca3ae65f826f6138e79->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   4d9ddd5561944ca3ae65f826f6138e79->SetLineColor(ci);
   4d9ddd5561944ca3ae65f826f6138e79->SetMarkerSize(0);
   4d9ddd5561944ca3ae65f826f6138e79->GetXaxis()->SetLabelFont(42);
   4d9ddd5561944ca3ae65f826f6138e79->GetXaxis()->SetLabelSize(0.035);
   4d9ddd5561944ca3ae65f826f6138e79->GetXaxis()->SetTitleSize(0.035);
   4d9ddd5561944ca3ae65f826f6138e79->GetXaxis()->SetTitleFont(42);
   4d9ddd5561944ca3ae65f826f6138e79->GetYaxis()->SetLabelFont(42);
   4d9ddd5561944ca3ae65f826f6138e79->GetYaxis()->SetLabelSize(0.035);
   4d9ddd5561944ca3ae65f826f6138e79->GetYaxis()->SetTitleSize(0.035);
   4d9ddd5561944ca3ae65f826f6138e79->GetYaxis()->SetTitleFont(42);
   4d9ddd5561944ca3ae65f826f6138e79->GetZaxis()->SetLabelFont(42);
   4d9ddd5561944ca3ae65f826f6138e79->GetZaxis()->SetLabelSize(0.035);
   4d9ddd5561944ca3ae65f826f6138e79->GetZaxis()->SetTitleSize(0.035);
   4d9ddd5561944ca3ae65f826f6138e79->GetZaxis()->SetTitleFont(42);
   4d9ddd5561944ca3ae65f826f6138e79->Draw("hist pe2,same");
   
   TH1D *ad5de40fdacd4d839a75506e3c0ceb92 = new TH1D("ad5de40fdacd4d839a75506e3c0ceb92","Observed",1,0,300);
   ad5de40fdacd4d839a75506e3c0ceb92->SetBinContent(1,45);
   ad5de40fdacd4d839a75506e3c0ceb92->SetBinError(1,6.708204);
   ad5de40fdacd4d839a75506e3c0ceb92->SetEntries(45);
   ad5de40fdacd4d839a75506e3c0ceb92->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   ad5de40fdacd4d839a75506e3c0ceb92->SetLineColor(ci);
   ad5de40fdacd4d839a75506e3c0ceb92->SetMarkerStyle(20);
   ad5de40fdacd4d839a75506e3c0ceb92->GetXaxis()->SetLabelFont(42);
   ad5de40fdacd4d839a75506e3c0ceb92->GetXaxis()->SetLabelSize(0.035);
   ad5de40fdacd4d839a75506e3c0ceb92->GetXaxis()->SetTitleSize(0.035);
   ad5de40fdacd4d839a75506e3c0ceb92->GetXaxis()->SetTitleFont(42);
   ad5de40fdacd4d839a75506e3c0ceb92->GetYaxis()->SetLabelFont(42);
   ad5de40fdacd4d839a75506e3c0ceb92->GetYaxis()->SetLabelSize(0.035);
   ad5de40fdacd4d839a75506e3c0ceb92->GetYaxis()->SetTitleSize(0.035);
   ad5de40fdacd4d839a75506e3c0ceb92->GetYaxis()->SetTitleFont(42);
   ad5de40fdacd4d839a75506e3c0ceb92->GetZaxis()->SetLabelFont(42);
   ad5de40fdacd4d839a75506e3c0ceb92->GetZaxis()->SetLabelSize(0.035);
   ad5de40fdacd4d839a75506e3c0ceb92->GetZaxis()->SetTitleSize(0.035);
   ad5de40fdacd4d839a75506e3c0ceb92->GetZaxis()->SetTitleFont(42);
   ad5de40fdacd4d839a75506e3c0ceb92->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("8e8433bef319453ca3eed695d8115844","ZZ","f");

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
   entry=leg->AddEntry("a45f60ecb63648a5b8743c4d01085ced","Charge mis-id","f");

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
   entry=leg->AddEntry("34b30feeb28d442eb487aef5b0ecf613","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("d24db4cfba8141f490392bac0022cc1b","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("416f1f5d4f9049ebab06acdbcad9732c","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("4d9ddd5561944ca3ae65f826f6138e79","Bkg. Unc.","f");
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
