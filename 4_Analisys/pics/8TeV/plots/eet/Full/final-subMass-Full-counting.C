{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:12:18 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-2.705296,337.5,24.34767);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *7a6166d25ce44c85b5369e782f2ecb6b = new THStack();
   7a6166d25ce44c85b5369e782f2ecb6b->SetName("7a6166d25ce44c85b5369e782f2ecb6b");
   7a6166d25ce44c85b5369e782f2ecb6b->SetTitle("WZ#rightarrow3l");
   7a6166d25ce44c85b5369e782f2ecb6b->SetMaximum(20.61178);
   
   TH1F *7a6166d25ce44c85b5369e782f2ecb6b_stack_3 = new TH1F("7a6166d25ce44c85b5369e782f2ecb6b_stack_3","WZ#rightarrow3l",1,0,300);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->SetMinimum(0);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->SetMaximum(21.64237);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->SetDirectory(0);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->SetLineColor(ci);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetXaxis()->SetLabelFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetXaxis()->SetLabelSize(0.035);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetXaxis()->SetTitleSize(0.035);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetXaxis()->SetTitleFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetYaxis()->SetTitle("Events");
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetYaxis()->SetLabelFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetYaxis()->SetLabelSize(0.035);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetYaxis()->SetTitleSize(0.035);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetYaxis()->SetTitleFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetZaxis()->SetLabelFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetZaxis()->SetLabelSize(0.035);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetZaxis()->SetTitleSize(0.035);
   7a6166d25ce44c85b5369e782f2ecb6b_stack_3->GetZaxis()->SetTitleFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->SetHistogram(7a6166d25ce44c85b5369e782f2ecb6b_stack_3);
   
   
   TH1D *7a6166d25ce44c85b5369e782f2ecb6b = new TH1D("7a6166d25ce44c85b5369e782f2ecb6b","WZ#rightarrow3l",1,0,300);
   7a6166d25ce44c85b5369e782f2ecb6b->SetBinContent(1,0.5811061);
   7a6166d25ce44c85b5369e782f2ecb6b->SetBinError(1,0.07391756);
   7a6166d25ce44c85b5369e782f2ecb6b->SetEntries(61.80386);

   ci = TColor::GetColor("#dc322f");
   7a6166d25ce44c85b5369e782f2ecb6b->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   7a6166d25ce44c85b5369e782f2ecb6b->SetLineColor(ci);
   7a6166d25ce44c85b5369e782f2ecb6b->GetXaxis()->SetLabelFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->GetXaxis()->SetLabelSize(0.035);
   7a6166d25ce44c85b5369e782f2ecb6b->GetXaxis()->SetTitleSize(0.035);
   7a6166d25ce44c85b5369e782f2ecb6b->GetXaxis()->SetTitleFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->GetYaxis()->SetLabelFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->GetYaxis()->SetLabelSize(0.035);
   7a6166d25ce44c85b5369e782f2ecb6b->GetYaxis()->SetTitleSize(0.035);
   7a6166d25ce44c85b5369e782f2ecb6b->GetYaxis()->SetTitleFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->GetZaxis()->SetLabelFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->GetZaxis()->SetLabelSize(0.035);
   7a6166d25ce44c85b5369e782f2ecb6b->GetZaxis()->SetTitleSize(0.035);
   7a6166d25ce44c85b5369e782f2ecb6b->GetZaxis()->SetTitleFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->Add(7a6166d25ce44c85b5369e782f2ecb6b,"hist");
   
   TH1D *0ca95505f1d44d069c39ecec9e45488e = new TH1D("0ca95505f1d44d069c39ecec9e45488e","ZZ",1,0,300);
   0ca95505f1d44d069c39ecec9e45488e->SetBinContent(1,0.4536674);
   0ca95505f1d44d069c39ecec9e45488e->SetBinContent(2,0.000959878);
   0ca95505f1d44d069c39ecec9e45488e->SetBinError(1,0.01462246);
   0ca95505f1d44d069c39ecec9e45488e->SetBinError(2,0.0006827117);
   0ca95505f1d44d069c39ecec9e45488e->SetEntries(962.5738);

   ci = TColor::GetColor("#50a634");
   0ca95505f1d44d069c39ecec9e45488e->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   0ca95505f1d44d069c39ecec9e45488e->SetLineColor(ci);
   0ca95505f1d44d069c39ecec9e45488e->GetXaxis()->SetLabelFont(42);
   0ca95505f1d44d069c39ecec9e45488e->GetXaxis()->SetLabelSize(0.035);
   0ca95505f1d44d069c39ecec9e45488e->GetXaxis()->SetTitleSize(0.035);
   0ca95505f1d44d069c39ecec9e45488e->GetXaxis()->SetTitleFont(42);
   0ca95505f1d44d069c39ecec9e45488e->GetYaxis()->SetLabelFont(42);
   0ca95505f1d44d069c39ecec9e45488e->GetYaxis()->SetLabelSize(0.035);
   0ca95505f1d44d069c39ecec9e45488e->GetYaxis()->SetTitleSize(0.035);
   0ca95505f1d44d069c39ecec9e45488e->GetYaxis()->SetTitleFont(42);
   0ca95505f1d44d069c39ecec9e45488e->GetZaxis()->SetLabelFont(42);
   0ca95505f1d44d069c39ecec9e45488e->GetZaxis()->SetLabelSize(0.035);
   0ca95505f1d44d069c39ecec9e45488e->GetZaxis()->SetTitleSize(0.035);
   0ca95505f1d44d069c39ecec9e45488e->GetZaxis()->SetTitleFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->Add(0ca95505f1d44d069c39ecec9e45488e,"hist");
   
   TH1D *db5e1899423a427886c0e4119a913385 = new TH1D("db5e1899423a427886c0e4119a913385","Charge mis-id",1,0,300);
   db5e1899423a427886c0e4119a913385->SetBinContent(1,1.681135);
   db5e1899423a427886c0e4119a913385->SetBinContent(2,0.004358273);
   db5e1899423a427886c0e4119a913385->SetBinError(1,0.0527375);
   db5e1899423a427886c0e4119a913385->SetBinError(2,0.002717697);
   db5e1899423a427886c0e4119a913385->SetEntries(1017.998);

   ci = TColor::GetColor("#9999cc");
   db5e1899423a427886c0e4119a913385->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   db5e1899423a427886c0e4119a913385->SetLineColor(ci);
   db5e1899423a427886c0e4119a913385->SetMarkerStyle(20);
   db5e1899423a427886c0e4119a913385->GetXaxis()->SetLabelFont(42);
   db5e1899423a427886c0e4119a913385->GetXaxis()->SetLabelSize(0.035);
   db5e1899423a427886c0e4119a913385->GetXaxis()->SetTitleSize(0.035);
   db5e1899423a427886c0e4119a913385->GetXaxis()->SetTitleFont(42);
   db5e1899423a427886c0e4119a913385->GetYaxis()->SetLabelFont(42);
   db5e1899423a427886c0e4119a913385->GetYaxis()->SetLabelSize(0.035);
   db5e1899423a427886c0e4119a913385->GetYaxis()->SetTitleSize(0.035);
   db5e1899423a427886c0e4119a913385->GetYaxis()->SetTitleFont(42);
   db5e1899423a427886c0e4119a913385->GetZaxis()->SetLabelFont(42);
   db5e1899423a427886c0e4119a913385->GetZaxis()->SetLabelSize(0.035);
   db5e1899423a427886c0e4119a913385->GetZaxis()->SetTitleSize(0.035);
   db5e1899423a427886c0e4119a913385->GetZaxis()->SetTitleFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->Add(db5e1899423a427886c0e4119a913385,"hist");
   
   TH1D *f0f9364c97f14589b4d81cca42c386d1 = new TH1D("f0f9364c97f14589b4d81cca42c386d1","WZ#rightarrowl#tau#tau",1,0,300);
   f0f9364c97f14589b4d81cca42c386d1->SetBinContent(1,5.14213);
   f0f9364c97f14589b4d81cca42c386d1->SetBinError(1,0.222662);
   f0f9364c97f14589b4d81cca42c386d1->SetEntries(533.3274);

   ci = TColor::GetColor("#268bd2");
   f0f9364c97f14589b4d81cca42c386d1->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   f0f9364c97f14589b4d81cca42c386d1->SetLineColor(ci);
   f0f9364c97f14589b4d81cca42c386d1->GetXaxis()->SetLabelFont(42);
   f0f9364c97f14589b4d81cca42c386d1->GetXaxis()->SetLabelSize(0.035);
   f0f9364c97f14589b4d81cca42c386d1->GetXaxis()->SetTitleSize(0.035);
   f0f9364c97f14589b4d81cca42c386d1->GetXaxis()->SetTitleFont(42);
   f0f9364c97f14589b4d81cca42c386d1->GetYaxis()->SetLabelFont(42);
   f0f9364c97f14589b4d81cca42c386d1->GetYaxis()->SetLabelSize(0.035);
   f0f9364c97f14589b4d81cca42c386d1->GetYaxis()->SetTitleSize(0.035);
   f0f9364c97f14589b4d81cca42c386d1->GetYaxis()->SetTitleFont(42);
   f0f9364c97f14589b4d81cca42c386d1->GetZaxis()->SetLabelFont(42);
   f0f9364c97f14589b4d81cca42c386d1->GetZaxis()->SetLabelSize(0.035);
   f0f9364c97f14589b4d81cca42c386d1->GetZaxis()->SetTitleSize(0.035);
   f0f9364c97f14589b4d81cca42c386d1->GetZaxis()->SetTitleFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->Add(f0f9364c97f14589b4d81cca42c386d1,"hist");
   
   TH1D *e8df5a9ddb9043e3a590c761a746f387 = new TH1D("e8df5a9ddb9043e3a590c761a746f387","Reducible bkg.",1,0,300);
   e8df5a9ddb9043e3a590c761a746f387->SetBinContent(0,1e-05);
   e8df5a9ddb9043e3a590c761a746f387->SetBinContent(1,8.654258);
   e8df5a9ddb9043e3a590c761a746f387->SetBinContent(2,0.03091503);
   e8df5a9ddb9043e3a590c761a746f387->SetBinError(0,0.02497209);
   e8df5a9ddb9043e3a590c761a746f387->SetBinError(1,1.015996);
   e8df5a9ddb9043e3a590c761a746f387->SetBinError(2,0.01634733);
   e8df5a9ddb9043e3a590c761a746f387->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   e8df5a9ddb9043e3a590c761a746f387->SetFillColor(ci);
   e8df5a9ddb9043e3a590c761a746f387->SetMarkerStyle(20);
   e8df5a9ddb9043e3a590c761a746f387->GetXaxis()->SetLabelFont(42);
   e8df5a9ddb9043e3a590c761a746f387->GetXaxis()->SetLabelSize(0.035);
   e8df5a9ddb9043e3a590c761a746f387->GetXaxis()->SetTitleSize(0.035);
   e8df5a9ddb9043e3a590c761a746f387->GetXaxis()->SetTitleFont(42);
   e8df5a9ddb9043e3a590c761a746f387->GetYaxis()->SetLabelFont(42);
   e8df5a9ddb9043e3a590c761a746f387->GetYaxis()->SetLabelSize(0.035);
   e8df5a9ddb9043e3a590c761a746f387->GetYaxis()->SetTitleSize(0.035);
   e8df5a9ddb9043e3a590c761a746f387->GetYaxis()->SetTitleFont(42);
   e8df5a9ddb9043e3a590c761a746f387->GetZaxis()->SetLabelFont(42);
   e8df5a9ddb9043e3a590c761a746f387->GetZaxis()->SetLabelSize(0.035);
   e8df5a9ddb9043e3a590c761a746f387->GetZaxis()->SetTitleSize(0.035);
   e8df5a9ddb9043e3a590c761a746f387->GetZaxis()->SetTitleFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->Add(e8df5a9ddb9043e3a590c761a746f387,"hist");
   
   TH1D *b0a662e86b25404d86f041121c126b3e = new TH1D("b0a662e86b25404d86f041121c126b3e","VH H#rightarrowWW",1,0,300);
   b0a662e86b25404d86f041121c126b3e->SetBinContent(1,0.03353157);
   b0a662e86b25404d86f041121c126b3e->SetBinError(1,0.003944408);
   b0a662e86b25404d86f041121c126b3e->SetEntries(72.26768);

   ci = TColor::GetColor("#cb4b16");
   b0a662e86b25404d86f041121c126b3e->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   b0a662e86b25404d86f041121c126b3e->SetLineColor(ci);
   b0a662e86b25404d86f041121c126b3e->GetXaxis()->SetLabelFont(42);
   b0a662e86b25404d86f041121c126b3e->GetXaxis()->SetLabelSize(0.035);
   b0a662e86b25404d86f041121c126b3e->GetXaxis()->SetTitleSize(0.035);
   b0a662e86b25404d86f041121c126b3e->GetXaxis()->SetTitleFont(42);
   b0a662e86b25404d86f041121c126b3e->GetYaxis()->SetLabelFont(42);
   b0a662e86b25404d86f041121c126b3e->GetYaxis()->SetLabelSize(0.035);
   b0a662e86b25404d86f041121c126b3e->GetYaxis()->SetTitleSize(0.035);
   b0a662e86b25404d86f041121c126b3e->GetYaxis()->SetTitleFont(42);
   b0a662e86b25404d86f041121c126b3e->GetZaxis()->SetLabelFont(42);
   b0a662e86b25404d86f041121c126b3e->GetZaxis()->SetLabelSize(0.035);
   b0a662e86b25404d86f041121c126b3e->GetZaxis()->SetTitleSize(0.035);
   b0a662e86b25404d86f041121c126b3e->GetZaxis()->SetTitleFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->Add(b0a662e86b25404d86f041121c126b3e,"hist");
   
   TH1D *dcc3cbe0af704093851a0f2d183433e9 = new TH1D("dcc3cbe0af704093851a0f2d183433e9","(1#times) m_{H} = 125",1,0,300);
   dcc3cbe0af704093851a0f2d183433e9->SetBinContent(1,0.6306559);
   dcc3cbe0af704093851a0f2d183433e9->SetBinError(1,0.04633127);
   dcc3cbe0af704093851a0f2d183433e9->SetEntries(185.2834);
   dcc3cbe0af704093851a0f2d183433e9->SetFillColor(1);
   dcc3cbe0af704093851a0f2d183433e9->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   dcc3cbe0af704093851a0f2d183433e9->SetLineColor(ci);
   dcc3cbe0af704093851a0f2d183433e9->SetLineStyle(2);
   dcc3cbe0af704093851a0f2d183433e9->SetLineWidth(4);
   dcc3cbe0af704093851a0f2d183433e9->GetXaxis()->SetLabelFont(42);
   dcc3cbe0af704093851a0f2d183433e9->GetXaxis()->SetLabelSize(0.035);
   dcc3cbe0af704093851a0f2d183433e9->GetXaxis()->SetTitleSize(0.035);
   dcc3cbe0af704093851a0f2d183433e9->GetXaxis()->SetTitleFont(42);
   dcc3cbe0af704093851a0f2d183433e9->GetYaxis()->SetLabelFont(42);
   dcc3cbe0af704093851a0f2d183433e9->GetYaxis()->SetLabelSize(0.035);
   dcc3cbe0af704093851a0f2d183433e9->GetYaxis()->SetTitleSize(0.035);
   dcc3cbe0af704093851a0f2d183433e9->GetYaxis()->SetTitleFont(42);
   dcc3cbe0af704093851a0f2d183433e9->GetZaxis()->SetLabelFont(42);
   dcc3cbe0af704093851a0f2d183433e9->GetZaxis()->SetLabelSize(0.035);
   dcc3cbe0af704093851a0f2d183433e9->GetZaxis()->SetTitleSize(0.035);
   dcc3cbe0af704093851a0f2d183433e9->GetZaxis()->SetTitleFont(42);
   7a6166d25ce44c85b5369e782f2ecb6b->Add(dcc3cbe0af704093851a0f2d183433e9,"hist");
   7a6166d25ce44c85b5369e782f2ecb6b->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("7a6166d25ce44c85b5369e782f2ecb6b","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("0ca95505f1d44d069c39ecec9e45488e","ZZ","f");

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
   entry=leg->AddEntry("db5e1899423a427886c0e4119a913385","Charge mis-id","f");

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
   entry=leg->AddEntry("f0f9364c97f14589b4d81cca42c386d1","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("e8df5a9ddb9043e3a590c761a746f387","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("b0a662e86b25404d86f041121c126b3e","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("dcc3cbe0af704093851a0f2d183433e9","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("c9e853fa62df44f9be02021e15315ffb","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_9ed95c67501a44efab8d2735d22bcd92","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *c9e853fa62df44f9be02021e15315ffb = new TH1D("c9e853fa62df44f9be02021e15315ffb","Bkg. Unc.",1,0,300);
   c9e853fa62df44f9be02021e15315ffb->SetBinContent(1,16.5123);
   c9e853fa62df44f9be02021e15315ffb->SetBinError(1,1.888131);
   c9e853fa62df44f9be02021e15315ffb->SetEntries(1);
   c9e853fa62df44f9be02021e15315ffb->SetFillColor(1);
   c9e853fa62df44f9be02021e15315ffb->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   c9e853fa62df44f9be02021e15315ffb->SetLineColor(ci);
   c9e853fa62df44f9be02021e15315ffb->SetMarkerSize(0);
   c9e853fa62df44f9be02021e15315ffb->GetXaxis()->SetLabelFont(42);
   c9e853fa62df44f9be02021e15315ffb->GetXaxis()->SetLabelSize(0.035);
   c9e853fa62df44f9be02021e15315ffb->GetXaxis()->SetTitleSize(0.035);
   c9e853fa62df44f9be02021e15315ffb->GetXaxis()->SetTitleFont(42);
   c9e853fa62df44f9be02021e15315ffb->GetYaxis()->SetLabelFont(42);
   c9e853fa62df44f9be02021e15315ffb->GetYaxis()->SetLabelSize(0.035);
   c9e853fa62df44f9be02021e15315ffb->GetYaxis()->SetTitleSize(0.035);
   c9e853fa62df44f9be02021e15315ffb->GetYaxis()->SetTitleFont(42);
   c9e853fa62df44f9be02021e15315ffb->GetZaxis()->SetLabelFont(42);
   c9e853fa62df44f9be02021e15315ffb->GetZaxis()->SetLabelSize(0.035);
   c9e853fa62df44f9be02021e15315ffb->GetZaxis()->SetTitleSize(0.035);
   c9e853fa62df44f9be02021e15315ffb->GetZaxis()->SetTitleFont(42);
   c9e853fa62df44f9be02021e15315ffb->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_9ed95c67501a44efab8d2735d22bcd92");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,16);
   grae->SetPointError(0,0,0,3.957873,5.083169);
   
   TH1F *Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923 = new TH1F("Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923","Observed",100,149.9,151.1);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->SetMinimum(11.13802);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->SetMaximum(21.98727);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->SetDirectory(0);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->SetLineColor(ci);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_9ed95c67501a44efab8d2735d22bcd923);
   
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
   entry=leg->AddEntry("7a6166d25ce44c85b5369e782f2ecb6b","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("0ca95505f1d44d069c39ecec9e45488e","ZZ","f");

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
   entry=leg->AddEntry("db5e1899423a427886c0e4119a913385","Charge mis-id","f");

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
   entry=leg->AddEntry("f0f9364c97f14589b4d81cca42c386d1","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("e8df5a9ddb9043e3a590c761a746f387","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("b0a662e86b25404d86f041121c126b3e","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("dcc3cbe0af704093851a0f2d183433e9","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("c9e853fa62df44f9be02021e15315ffb","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_9ed95c67501a44efab8d2735d22bcd92","Observed","P");
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
