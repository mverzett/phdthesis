{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:13:20 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-52.7625,337.5,474.8625);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *91bc7d00637e481bad64a9f8a9b09aa8 = new THStack();
   91bc7d00637e481bad64a9f8a9b09aa8->SetName("91bc7d00637e481bad64a9f8a9b09aa8");
   91bc7d00637e481bad64a9f8a9b09aa8->SetTitle("ZZ");
   91bc7d00637e481bad64a9f8a9b09aa8->SetMaximum(402);
   
   TH1F *91bc7d00637e481bad64a9f8a9b09aa8_stack_10 = new TH1F("91bc7d00637e481bad64a9f8a9b09aa8_stack_10","ZZ",1,0,300);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->SetMinimum(0);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->SetMaximum(422.1);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->SetDirectory(0);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->SetLineColor(ci);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetXaxis()->SetLabelFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetXaxis()->SetLabelSize(0.035);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetXaxis()->SetTitleSize(0.035);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetXaxis()->SetTitleFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetYaxis()->SetTitle("Events");
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetYaxis()->SetLabelFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetYaxis()->SetLabelSize(0.035);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetYaxis()->SetTitleSize(0.035);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetYaxis()->SetTitleFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetZaxis()->SetLabelFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetZaxis()->SetLabelSize(0.035);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetZaxis()->SetTitleSize(0.035);
   91bc7d00637e481bad64a9f8a9b09aa8_stack_10->GetZaxis()->SetTitleFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8->SetHistogram(91bc7d00637e481bad64a9f8a9b09aa8_stack_10);
   
   
   TH1D *91bc7d00637e481bad64a9f8a9b09aa8 = new TH1D("91bc7d00637e481bad64a9f8a9b09aa8","ZZ",1,0,300);
   91bc7d00637e481bad64a9f8a9b09aa8->SetBinContent(1,0.648373);
   91bc7d00637e481bad64a9f8a9b09aa8->SetBinContent(2,0.006593205);
   91bc7d00637e481bad64a9f8a9b09aa8->SetBinError(1,0.0179101);
   91bc7d00637e481bad64a9f8a9b09aa8->SetBinError(2,0.00178033);
   91bc7d00637e481bad64a9f8a9b09aa8->SetEntries(1310.551);

   ci = TColor::GetColor("#50a634");
   91bc7d00637e481bad64a9f8a9b09aa8->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   91bc7d00637e481bad64a9f8a9b09aa8->SetLineColor(ci);
   91bc7d00637e481bad64a9f8a9b09aa8->GetXaxis()->SetLabelFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8->GetXaxis()->SetLabelSize(0.035);
   91bc7d00637e481bad64a9f8a9b09aa8->GetXaxis()->SetTitleSize(0.035);
   91bc7d00637e481bad64a9f8a9b09aa8->GetXaxis()->SetTitleFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8->GetYaxis()->SetLabelFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8->GetYaxis()->SetLabelSize(0.035);
   91bc7d00637e481bad64a9f8a9b09aa8->GetYaxis()->SetTitleSize(0.035);
   91bc7d00637e481bad64a9f8a9b09aa8->GetYaxis()->SetTitleFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8->GetZaxis()->SetLabelFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8->GetZaxis()->SetLabelSize(0.035);
   91bc7d00637e481bad64a9f8a9b09aa8->GetZaxis()->SetTitleSize(0.035);
   91bc7d00637e481bad64a9f8a9b09aa8->GetZaxis()->SetTitleFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8->Add(91bc7d00637e481bad64a9f8a9b09aa8,"hist");
   
   TH1D *5bc52e8c89dd41c6a2730ed4badbde31 = new TH1D("5bc52e8c89dd41c6a2730ed4badbde31","Charge mis-id",1,0,300);
   5bc52e8c89dd41c6a2730ed4badbde31->SetBinContent(1,42.74582);
   5bc52e8c89dd41c6a2730ed4badbde31->SetBinContent(2,0.3759712);
   5bc52e8c89dd41c6a2730ed4badbde31->SetBinError(1,0.2720765);
   5bc52e8c89dd41c6a2730ed4badbde31->SetBinError(2,0.03212198);
   5bc52e8c89dd41c6a2730ed4badbde31->SetEntries(24727.68);

   ci = TColor::GetColor("#9999cc");
   5bc52e8c89dd41c6a2730ed4badbde31->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   5bc52e8c89dd41c6a2730ed4badbde31->SetLineColor(ci);
   5bc52e8c89dd41c6a2730ed4badbde31->SetMarkerStyle(20);
   5bc52e8c89dd41c6a2730ed4badbde31->GetXaxis()->SetLabelFont(42);
   5bc52e8c89dd41c6a2730ed4badbde31->GetXaxis()->SetLabelSize(0.035);
   5bc52e8c89dd41c6a2730ed4badbde31->GetXaxis()->SetTitleSize(0.035);
   5bc52e8c89dd41c6a2730ed4badbde31->GetXaxis()->SetTitleFont(42);
   5bc52e8c89dd41c6a2730ed4badbde31->GetYaxis()->SetLabelFont(42);
   5bc52e8c89dd41c6a2730ed4badbde31->GetYaxis()->SetLabelSize(0.035);
   5bc52e8c89dd41c6a2730ed4badbde31->GetYaxis()->SetTitleSize(0.035);
   5bc52e8c89dd41c6a2730ed4badbde31->GetYaxis()->SetTitleFont(42);
   5bc52e8c89dd41c6a2730ed4badbde31->GetZaxis()->SetLabelFont(42);
   5bc52e8c89dd41c6a2730ed4badbde31->GetZaxis()->SetLabelSize(0.035);
   5bc52e8c89dd41c6a2730ed4badbde31->GetZaxis()->SetTitleSize(0.035);
   5bc52e8c89dd41c6a2730ed4badbde31->GetZaxis()->SetTitleFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8->Add(5bc52e8c89dd41c6a2730ed4badbde31,"hist");
   
   TH1D *f78d82e341ab47538cf16bf9d5acb523 = new TH1D("f78d82e341ab47538cf16bf9d5acb523","WZ#rightarrow3l",1,0,300);
   f78d82e341ab47538cf16bf9d5acb523->SetBinContent(1,9.482539);
   f78d82e341ab47538cf16bf9d5acb523->SetBinContent(2,0.2328459);
   f78d82e341ab47538cf16bf9d5acb523->SetBinError(1,0.3056721);
   f78d82e341ab47538cf16bf9d5acb523->SetBinError(2,0.04924627);
   f78d82e341ab47538cf16bf9d5acb523->SetEntries(962.3604);

   ci = TColor::GetColor("#dc322f");
   f78d82e341ab47538cf16bf9d5acb523->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   f78d82e341ab47538cf16bf9d5acb523->SetLineColor(ci);
   f78d82e341ab47538cf16bf9d5acb523->GetXaxis()->SetLabelFont(42);
   f78d82e341ab47538cf16bf9d5acb523->GetXaxis()->SetLabelSize(0.035);
   f78d82e341ab47538cf16bf9d5acb523->GetXaxis()->SetTitleSize(0.035);
   f78d82e341ab47538cf16bf9d5acb523->GetXaxis()->SetTitleFont(42);
   f78d82e341ab47538cf16bf9d5acb523->GetYaxis()->SetLabelFont(42);
   f78d82e341ab47538cf16bf9d5acb523->GetYaxis()->SetLabelSize(0.035);
   f78d82e341ab47538cf16bf9d5acb523->GetYaxis()->SetTitleSize(0.035);
   f78d82e341ab47538cf16bf9d5acb523->GetYaxis()->SetTitleFont(42);
   f78d82e341ab47538cf16bf9d5acb523->GetZaxis()->SetLabelFont(42);
   f78d82e341ab47538cf16bf9d5acb523->GetZaxis()->SetLabelSize(0.035);
   f78d82e341ab47538cf16bf9d5acb523->GetZaxis()->SetTitleSize(0.035);
   f78d82e341ab47538cf16bf9d5acb523->GetZaxis()->SetTitleFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8->Add(f78d82e341ab47538cf16bf9d5acb523,"hist");
   
   TH1D *3055e7bba3134d8a966ace25c801e1d8 = new TH1D("3055e7bba3134d8a966ace25c801e1d8","WZ#rightarrowl#tau#tau",1,0,300);
   3055e7bba3134d8a966ace25c801e1d8->SetBinContent(1,3.188893);
   3055e7bba3134d8a966ace25c801e1d8->SetBinContent(2,0.02268753);
   3055e7bba3134d8a966ace25c801e1d8->SetBinError(1,0.1748548);
   3055e7bba3134d8a966ace25c801e1d8->SetBinError(2,0.0160781);
   3055e7bba3134d8a966ace25c801e1d8->SetEntries(332.6019);

   ci = TColor::GetColor("#268bd2");
   3055e7bba3134d8a966ace25c801e1d8->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   3055e7bba3134d8a966ace25c801e1d8->SetLineColor(ci);
   3055e7bba3134d8a966ace25c801e1d8->GetXaxis()->SetLabelFont(42);
   3055e7bba3134d8a966ace25c801e1d8->GetXaxis()->SetLabelSize(0.035);
   3055e7bba3134d8a966ace25c801e1d8->GetXaxis()->SetTitleSize(0.035);
   3055e7bba3134d8a966ace25c801e1d8->GetXaxis()->SetTitleFont(42);
   3055e7bba3134d8a966ace25c801e1d8->GetYaxis()->SetLabelFont(42);
   3055e7bba3134d8a966ace25c801e1d8->GetYaxis()->SetLabelSize(0.035);
   3055e7bba3134d8a966ace25c801e1d8->GetYaxis()->SetTitleSize(0.035);
   3055e7bba3134d8a966ace25c801e1d8->GetYaxis()->SetTitleFont(42);
   3055e7bba3134d8a966ace25c801e1d8->GetZaxis()->SetLabelFont(42);
   3055e7bba3134d8a966ace25c801e1d8->GetZaxis()->SetLabelSize(0.035);
   3055e7bba3134d8a966ace25c801e1d8->GetZaxis()->SetTitleSize(0.035);
   3055e7bba3134d8a966ace25c801e1d8->GetZaxis()->SetTitleFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8->Add(3055e7bba3134d8a966ace25c801e1d8,"hist");
   
   TH1D *eb8600e5351a48fab20cf30f8d2d1251 = new TH1D("eb8600e5351a48fab20cf30f8d2d1251","Reducible bkg.",1,0,300);
   eb8600e5351a48fab20cf30f8d2d1251->SetBinContent(0,1e-05);
   eb8600e5351a48fab20cf30f8d2d1251->SetBinContent(1,120.7485);
   eb8600e5351a48fab20cf30f8d2d1251->SetBinContent(2,2.641975);
   eb8600e5351a48fab20cf30f8d2d1251->SetBinError(0,0.02902271);
   eb8600e5351a48fab20cf30f8d2d1251->SetBinError(1,4.330788);
   eb8600e5351a48fab20cf30f8d2d1251->SetBinError(2,0.6092373);
   eb8600e5351a48fab20cf30f8d2d1251->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   eb8600e5351a48fab20cf30f8d2d1251->SetFillColor(ci);
   eb8600e5351a48fab20cf30f8d2d1251->SetMarkerStyle(20);
   eb8600e5351a48fab20cf30f8d2d1251->GetXaxis()->SetLabelFont(42);
   eb8600e5351a48fab20cf30f8d2d1251->GetXaxis()->SetLabelSize(0.035);
   eb8600e5351a48fab20cf30f8d2d1251->GetXaxis()->SetTitleSize(0.035);
   eb8600e5351a48fab20cf30f8d2d1251->GetXaxis()->SetTitleFont(42);
   eb8600e5351a48fab20cf30f8d2d1251->GetYaxis()->SetLabelFont(42);
   eb8600e5351a48fab20cf30f8d2d1251->GetYaxis()->SetLabelSize(0.035);
   eb8600e5351a48fab20cf30f8d2d1251->GetYaxis()->SetTitleSize(0.035);
   eb8600e5351a48fab20cf30f8d2d1251->GetYaxis()->SetTitleFont(42);
   eb8600e5351a48fab20cf30f8d2d1251->GetZaxis()->SetLabelFont(42);
   eb8600e5351a48fab20cf30f8d2d1251->GetZaxis()->SetLabelSize(0.035);
   eb8600e5351a48fab20cf30f8d2d1251->GetZaxis()->SetTitleSize(0.035);
   eb8600e5351a48fab20cf30f8d2d1251->GetZaxis()->SetTitleFont(42);
   91bc7d00637e481bad64a9f8a9b09aa8->Add(eb8600e5351a48fab20cf30f8d2d1251,"hist");
   91bc7d00637e481bad64a9f8a9b09aa8->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("91bc7d00637e481bad64a9f8a9b09aa8","ZZ","f");

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
   entry=leg->AddEntry("5bc52e8c89dd41c6a2730ed4badbde31","Charge mis-id","f");

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
   entry=leg->AddEntry("f78d82e341ab47538cf16bf9d5acb523","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("3055e7bba3134d8a966ace25c801e1d8","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("eb8600e5351a48fab20cf30f8d2d1251","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("3cc19877de7a48bcb2e5f7e9a74f5eb7","Bkg. Unc.","f");
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
   
   TH1D *3cc19877de7a48bcb2e5f7e9a74f5eb7 = new TH1D("3cc19877de7a48bcb2e5f7e9a74f5eb7","Bkg. Unc.",1,0,300);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->SetBinContent(1,176.8141);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->SetBinError(1,4.548376);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->SetEntries(1);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->SetFillColor(1);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   3cc19877de7a48bcb2e5f7e9a74f5eb7->SetLineColor(ci);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->SetMarkerSize(0);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->GetXaxis()->SetLabelFont(42);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->GetXaxis()->SetLabelSize(0.035);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->GetXaxis()->SetTitleSize(0.035);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->GetXaxis()->SetTitleFont(42);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->GetYaxis()->SetLabelFont(42);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->GetYaxis()->SetLabelSize(0.035);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->GetYaxis()->SetTitleSize(0.035);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->GetYaxis()->SetTitleFont(42);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->GetZaxis()->SetLabelFont(42);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->GetZaxis()->SetLabelSize(0.035);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->GetZaxis()->SetTitleSize(0.035);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->GetZaxis()->SetTitleFont(42);
   3cc19877de7a48bcb2e5f7e9a74f5eb7->Draw("hist pe2,same");
   
   TH1D *32310978a6684fe79cd577d5da0dac3e = new TH1D("32310978a6684fe79cd577d5da0dac3e","Observed",1,0,300);
   32310978a6684fe79cd577d5da0dac3e->SetBinContent(1,201);
   32310978a6684fe79cd577d5da0dac3e->SetBinContent(2,5);
   32310978a6684fe79cd577d5da0dac3e->SetBinError(1,14.17745);
   32310978a6684fe79cd577d5da0dac3e->SetBinError(2,2.236068);
   32310978a6684fe79cd577d5da0dac3e->SetEntries(201);
   32310978a6684fe79cd577d5da0dac3e->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   32310978a6684fe79cd577d5da0dac3e->SetLineColor(ci);
   32310978a6684fe79cd577d5da0dac3e->SetMarkerStyle(20);
   32310978a6684fe79cd577d5da0dac3e->GetXaxis()->SetLabelFont(42);
   32310978a6684fe79cd577d5da0dac3e->GetXaxis()->SetLabelSize(0.035);
   32310978a6684fe79cd577d5da0dac3e->GetXaxis()->SetTitleSize(0.035);
   32310978a6684fe79cd577d5da0dac3e->GetXaxis()->SetTitleFont(42);
   32310978a6684fe79cd577d5da0dac3e->GetYaxis()->SetLabelFont(42);
   32310978a6684fe79cd577d5da0dac3e->GetYaxis()->SetLabelSize(0.035);
   32310978a6684fe79cd577d5da0dac3e->GetYaxis()->SetTitleSize(0.035);
   32310978a6684fe79cd577d5da0dac3e->GetYaxis()->SetTitleFont(42);
   32310978a6684fe79cd577d5da0dac3e->GetZaxis()->SetLabelFont(42);
   32310978a6684fe79cd577d5da0dac3e->GetZaxis()->SetLabelSize(0.035);
   32310978a6684fe79cd577d5da0dac3e->GetZaxis()->SetTitleSize(0.035);
   32310978a6684fe79cd577d5da0dac3e->GetZaxis()->SetTitleFont(42);
   32310978a6684fe79cd577d5da0dac3e->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("91bc7d00637e481bad64a9f8a9b09aa8","ZZ","f");

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
   entry=leg->AddEntry("5bc52e8c89dd41c6a2730ed4badbde31","Charge mis-id","f");

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
   entry=leg->AddEntry("f78d82e341ab47538cf16bf9d5acb523","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("3055e7bba3134d8a966ace25c801e1d8","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("eb8600e5351a48fab20cf30f8d2d1251","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("3cc19877de7a48bcb2e5f7e9a74f5eb7","Bkg. Unc.","f");
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
