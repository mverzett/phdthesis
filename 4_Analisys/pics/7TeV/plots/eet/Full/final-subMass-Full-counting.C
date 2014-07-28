{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:01:02 2014) by ROOT version5.32/00
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
   
   THStack *2cf50a47b36e42be9be3638df926409d = new THStack();
   2cf50a47b36e42be9be3638df926409d->SetName("2cf50a47b36e42be9be3638df926409d");
   2cf50a47b36e42be9be3638df926409d->SetTitle("WZ#rightarrow3l");
   2cf50a47b36e42be9be3638df926409d->SetMaximum(6);
   
   TH1F *2cf50a47b36e42be9be3638df926409d_stack_3 = new TH1F("2cf50a47b36e42be9be3638df926409d_stack_3","WZ#rightarrow3l",1,0,300);
   2cf50a47b36e42be9be3638df926409d_stack_3->SetMinimum(0);
   2cf50a47b36e42be9be3638df926409d_stack_3->SetMaximum(6.3);
   2cf50a47b36e42be9be3638df926409d_stack_3->SetDirectory(0);
   2cf50a47b36e42be9be3638df926409d_stack_3->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   2cf50a47b36e42be9be3638df926409d_stack_3->SetLineColor(ci);
   2cf50a47b36e42be9be3638df926409d_stack_3->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   2cf50a47b36e42be9be3638df926409d_stack_3->GetXaxis()->SetLabelFont(42);
   2cf50a47b36e42be9be3638df926409d_stack_3->GetXaxis()->SetLabelSize(0.035);
   2cf50a47b36e42be9be3638df926409d_stack_3->GetXaxis()->SetTitleSize(0.035);
   2cf50a47b36e42be9be3638df926409d_stack_3->GetXaxis()->SetTitleFont(42);
   2cf50a47b36e42be9be3638df926409d_stack_3->GetYaxis()->SetTitle("Events");
   2cf50a47b36e42be9be3638df926409d_stack_3->GetYaxis()->SetLabelFont(42);
   2cf50a47b36e42be9be3638df926409d_stack_3->GetYaxis()->SetLabelSize(0.035);
   2cf50a47b36e42be9be3638df926409d_stack_3->GetYaxis()->SetTitleSize(0.035);
   2cf50a47b36e42be9be3638df926409d_stack_3->GetYaxis()->SetTitleFont(42);
   2cf50a47b36e42be9be3638df926409d_stack_3->GetZaxis()->SetLabelFont(42);
   2cf50a47b36e42be9be3638df926409d_stack_3->GetZaxis()->SetLabelSize(0.035);
   2cf50a47b36e42be9be3638df926409d_stack_3->GetZaxis()->SetTitleSize(0.035);
   2cf50a47b36e42be9be3638df926409d_stack_3->GetZaxis()->SetTitleFont(42);
   2cf50a47b36e42be9be3638df926409d->SetHistogram(2cf50a47b36e42be9be3638df926409d_stack_3);
   
   
   TH1D *2cf50a47b36e42be9be3638df926409d = new TH1D("2cf50a47b36e42be9be3638df926409d","WZ#rightarrow3l",1,0,300);
   2cf50a47b36e42be9be3638df926409d->SetBinContent(1,0.2176068);
   2cf50a47b36e42be9be3638df926409d->SetBinError(1,0.03801822);
   2cf50a47b36e42be9be3638df926409d->SetEntries(32.76131);

   ci = TColor::GetColor("#dc322f");
   2cf50a47b36e42be9be3638df926409d->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   2cf50a47b36e42be9be3638df926409d->SetLineColor(ci);
   2cf50a47b36e42be9be3638df926409d->GetXaxis()->SetLabelFont(42);
   2cf50a47b36e42be9be3638df926409d->GetXaxis()->SetLabelSize(0.035);
   2cf50a47b36e42be9be3638df926409d->GetXaxis()->SetTitleSize(0.035);
   2cf50a47b36e42be9be3638df926409d->GetXaxis()->SetTitleFont(42);
   2cf50a47b36e42be9be3638df926409d->GetYaxis()->SetLabelFont(42);
   2cf50a47b36e42be9be3638df926409d->GetYaxis()->SetLabelSize(0.035);
   2cf50a47b36e42be9be3638df926409d->GetYaxis()->SetTitleSize(0.035);
   2cf50a47b36e42be9be3638df926409d->GetYaxis()->SetTitleFont(42);
   2cf50a47b36e42be9be3638df926409d->GetZaxis()->SetLabelFont(42);
   2cf50a47b36e42be9be3638df926409d->GetZaxis()->SetLabelSize(0.035);
   2cf50a47b36e42be9be3638df926409d->GetZaxis()->SetTitleSize(0.035);
   2cf50a47b36e42be9be3638df926409d->GetZaxis()->SetTitleFont(42);
   2cf50a47b36e42be9be3638df926409d->Add(2cf50a47b36e42be9be3638df926409d,"hist");
   
   TH1D *3519938651114b15b48f530fffeac5c1 = new TH1D("3519938651114b15b48f530fffeac5c1","ZZ",1,0,300);
   3519938651114b15b48f530fffeac5c1->SetBinContent(1,0.3039803);
   3519938651114b15b48f530fffeac5c1->SetBinError(1,0.01531985);
   3519938651114b15b48f530fffeac5c1->SetEntries(393.715);

   ci = TColor::GetColor("#50a634");
   3519938651114b15b48f530fffeac5c1->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   3519938651114b15b48f530fffeac5c1->SetLineColor(ci);
   3519938651114b15b48f530fffeac5c1->GetXaxis()->SetLabelFont(42);
   3519938651114b15b48f530fffeac5c1->GetXaxis()->SetLabelSize(0.035);
   3519938651114b15b48f530fffeac5c1->GetXaxis()->SetTitleSize(0.035);
   3519938651114b15b48f530fffeac5c1->GetXaxis()->SetTitleFont(42);
   3519938651114b15b48f530fffeac5c1->GetYaxis()->SetLabelFont(42);
   3519938651114b15b48f530fffeac5c1->GetYaxis()->SetLabelSize(0.035);
   3519938651114b15b48f530fffeac5c1->GetYaxis()->SetTitleSize(0.035);
   3519938651114b15b48f530fffeac5c1->GetYaxis()->SetTitleFont(42);
   3519938651114b15b48f530fffeac5c1->GetZaxis()->SetLabelFont(42);
   3519938651114b15b48f530fffeac5c1->GetZaxis()->SetLabelSize(0.035);
   3519938651114b15b48f530fffeac5c1->GetZaxis()->SetTitleSize(0.035);
   3519938651114b15b48f530fffeac5c1->GetZaxis()->SetTitleFont(42);
   2cf50a47b36e42be9be3638df926409d->Add(3519938651114b15b48f530fffeac5c1,"hist");
   
   TH1D *d338f7280685480ca390258fa3ecc9c4 = new TH1D("d338f7280685480ca390258fa3ecc9c4","Charge mis-id",1,0,300);
   d338f7280685480ca390258fa3ecc9c4->SetBinContent(1,0.5454157);
   d338f7280685480ca390258fa3ecc9c4->SetBinError(1,0.03402354);
   d338f7280685480ca390258fa3ecc9c4->SetEntries(257.0139);

   ci = TColor::GetColor("#9999cc");
   d338f7280685480ca390258fa3ecc9c4->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   d338f7280685480ca390258fa3ecc9c4->SetLineColor(ci);
   d338f7280685480ca390258fa3ecc9c4->SetMarkerStyle(20);
   d338f7280685480ca390258fa3ecc9c4->GetXaxis()->SetLabelFont(42);
   d338f7280685480ca390258fa3ecc9c4->GetXaxis()->SetLabelSize(0.035);
   d338f7280685480ca390258fa3ecc9c4->GetXaxis()->SetTitleSize(0.035);
   d338f7280685480ca390258fa3ecc9c4->GetXaxis()->SetTitleFont(42);
   d338f7280685480ca390258fa3ecc9c4->GetYaxis()->SetLabelFont(42);
   d338f7280685480ca390258fa3ecc9c4->GetYaxis()->SetLabelSize(0.035);
   d338f7280685480ca390258fa3ecc9c4->GetYaxis()->SetTitleSize(0.035);
   d338f7280685480ca390258fa3ecc9c4->GetYaxis()->SetTitleFont(42);
   d338f7280685480ca390258fa3ecc9c4->GetZaxis()->SetLabelFont(42);
   d338f7280685480ca390258fa3ecc9c4->GetZaxis()->SetLabelSize(0.035);
   d338f7280685480ca390258fa3ecc9c4->GetZaxis()->SetTitleSize(0.035);
   d338f7280685480ca390258fa3ecc9c4->GetZaxis()->SetTitleFont(42);
   2cf50a47b36e42be9be3638df926409d->Add(d338f7280685480ca390258fa3ecc9c4,"hist");
   
   TH1D *608605acbf254a41a3f531a251eeab1a = new TH1D("608605acbf254a41a3f531a251eeab1a","WZ#rightarrowl#tau#tau",1,0,300);
   608605acbf254a41a3f531a251eeab1a->SetBinContent(1,1.544992);
   608605acbf254a41a3f531a251eeab1a->SetBinError(1,0.09996712);
   608605acbf254a41a3f531a251eeab1a->SetEntries(238.8571);

   ci = TColor::GetColor("#268bd2");
   608605acbf254a41a3f531a251eeab1a->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   608605acbf254a41a3f531a251eeab1a->SetLineColor(ci);
   608605acbf254a41a3f531a251eeab1a->GetXaxis()->SetLabelFont(42);
   608605acbf254a41a3f531a251eeab1a->GetXaxis()->SetLabelSize(0.035);
   608605acbf254a41a3f531a251eeab1a->GetXaxis()->SetTitleSize(0.035);
   608605acbf254a41a3f531a251eeab1a->GetXaxis()->SetTitleFont(42);
   608605acbf254a41a3f531a251eeab1a->GetYaxis()->SetLabelFont(42);
   608605acbf254a41a3f531a251eeab1a->GetYaxis()->SetLabelSize(0.035);
   608605acbf254a41a3f531a251eeab1a->GetYaxis()->SetTitleSize(0.035);
   608605acbf254a41a3f531a251eeab1a->GetYaxis()->SetTitleFont(42);
   608605acbf254a41a3f531a251eeab1a->GetZaxis()->SetLabelFont(42);
   608605acbf254a41a3f531a251eeab1a->GetZaxis()->SetLabelSize(0.035);
   608605acbf254a41a3f531a251eeab1a->GetZaxis()->SetTitleSize(0.035);
   608605acbf254a41a3f531a251eeab1a->GetZaxis()->SetTitleFont(42);
   2cf50a47b36e42be9be3638df926409d->Add(608605acbf254a41a3f531a251eeab1a,"hist");
   
   TH1D *2629b81dc698454d9247381befb15d2c = new TH1D("2629b81dc698454d9247381befb15d2c","Reducible bkg.",1,0,300);
   2629b81dc698454d9247381befb15d2c->SetBinContent(0,1e-05);
   2629b81dc698454d9247381befb15d2c->SetBinContent(1,1.754683);
   2629b81dc698454d9247381befb15d2c->SetBinContent(2,0.000349219);
   2629b81dc698454d9247381befb15d2c->SetBinError(0,0.01394283);
   2629b81dc698454d9247381befb15d2c->SetBinError(1,0.3767787);
   2629b81dc698454d9247381befb15d2c->SetBinError(2,0.000349219);
   2629b81dc698454d9247381befb15d2c->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   2629b81dc698454d9247381befb15d2c->SetFillColor(ci);
   2629b81dc698454d9247381befb15d2c->SetMarkerStyle(20);
   2629b81dc698454d9247381befb15d2c->GetXaxis()->SetLabelFont(42);
   2629b81dc698454d9247381befb15d2c->GetXaxis()->SetLabelSize(0.035);
   2629b81dc698454d9247381befb15d2c->GetXaxis()->SetTitleSize(0.035);
   2629b81dc698454d9247381befb15d2c->GetXaxis()->SetTitleFont(42);
   2629b81dc698454d9247381befb15d2c->GetYaxis()->SetLabelFont(42);
   2629b81dc698454d9247381befb15d2c->GetYaxis()->SetLabelSize(0.035);
   2629b81dc698454d9247381befb15d2c->GetYaxis()->SetTitleSize(0.035);
   2629b81dc698454d9247381befb15d2c->GetYaxis()->SetTitleFont(42);
   2629b81dc698454d9247381befb15d2c->GetZaxis()->SetLabelFont(42);
   2629b81dc698454d9247381befb15d2c->GetZaxis()->SetLabelSize(0.035);
   2629b81dc698454d9247381befb15d2c->GetZaxis()->SetTitleSize(0.035);
   2629b81dc698454d9247381befb15d2c->GetZaxis()->SetTitleFont(42);
   2cf50a47b36e42be9be3638df926409d->Add(2629b81dc698454d9247381befb15d2c,"hist");
   
   TH1D *be7c1df8f4d54ec581ec53f257d5ef74 = new TH1D("be7c1df8f4d54ec581ec53f257d5ef74","VH H#rightarrowWW",1,0,300);
   be7c1df8f4d54ec581ec53f257d5ef74->SetBinContent(1,0.01013043);
   be7c1df8f4d54ec581ec53f257d5ef74->SetBinError(1,0.001197451);
   be7c1df8f4d54ec581ec53f257d5ef74->SetEntries(71.57148);

   ci = TColor::GetColor("#cb4b16");
   be7c1df8f4d54ec581ec53f257d5ef74->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   be7c1df8f4d54ec581ec53f257d5ef74->SetLineColor(ci);
   be7c1df8f4d54ec581ec53f257d5ef74->GetXaxis()->SetLabelFont(42);
   be7c1df8f4d54ec581ec53f257d5ef74->GetXaxis()->SetLabelSize(0.035);
   be7c1df8f4d54ec581ec53f257d5ef74->GetXaxis()->SetTitleSize(0.035);
   be7c1df8f4d54ec581ec53f257d5ef74->GetXaxis()->SetTitleFont(42);
   be7c1df8f4d54ec581ec53f257d5ef74->GetYaxis()->SetLabelFont(42);
   be7c1df8f4d54ec581ec53f257d5ef74->GetYaxis()->SetLabelSize(0.035);
   be7c1df8f4d54ec581ec53f257d5ef74->GetYaxis()->SetTitleSize(0.035);
   be7c1df8f4d54ec581ec53f257d5ef74->GetYaxis()->SetTitleFont(42);
   be7c1df8f4d54ec581ec53f257d5ef74->GetZaxis()->SetLabelFont(42);
   be7c1df8f4d54ec581ec53f257d5ef74->GetZaxis()->SetLabelSize(0.035);
   be7c1df8f4d54ec581ec53f257d5ef74->GetZaxis()->SetTitleSize(0.035);
   be7c1df8f4d54ec581ec53f257d5ef74->GetZaxis()->SetTitleFont(42);
   2cf50a47b36e42be9be3638df926409d->Add(be7c1df8f4d54ec581ec53f257d5ef74,"hist");
   
   TH1D *184e3a7483844ff8b4fb2a94a24e05c7 = new TH1D("184e3a7483844ff8b4fb2a94a24e05c7","(1#times) m_{H} = 125",1,0,300);
   184e3a7483844ff8b4fb2a94a24e05c7->SetBinContent(1,0.2006741);
   184e3a7483844ff8b4fb2a94a24e05c7->SetBinError(1,0.01476517);
   184e3a7483844ff8b4fb2a94a24e05c7->SetEntries(184.7165);
   184e3a7483844ff8b4fb2a94a24e05c7->SetFillColor(1);
   184e3a7483844ff8b4fb2a94a24e05c7->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   184e3a7483844ff8b4fb2a94a24e05c7->SetLineColor(ci);
   184e3a7483844ff8b4fb2a94a24e05c7->SetLineStyle(2);
   184e3a7483844ff8b4fb2a94a24e05c7->SetLineWidth(4);
   184e3a7483844ff8b4fb2a94a24e05c7->GetXaxis()->SetLabelFont(42);
   184e3a7483844ff8b4fb2a94a24e05c7->GetXaxis()->SetLabelSize(0.035);
   184e3a7483844ff8b4fb2a94a24e05c7->GetXaxis()->SetTitleSize(0.035);
   184e3a7483844ff8b4fb2a94a24e05c7->GetXaxis()->SetTitleFont(42);
   184e3a7483844ff8b4fb2a94a24e05c7->GetYaxis()->SetLabelFont(42);
   184e3a7483844ff8b4fb2a94a24e05c7->GetYaxis()->SetLabelSize(0.035);
   184e3a7483844ff8b4fb2a94a24e05c7->GetYaxis()->SetTitleSize(0.035);
   184e3a7483844ff8b4fb2a94a24e05c7->GetYaxis()->SetTitleFont(42);
   184e3a7483844ff8b4fb2a94a24e05c7->GetZaxis()->SetLabelFont(42);
   184e3a7483844ff8b4fb2a94a24e05c7->GetZaxis()->SetLabelSize(0.035);
   184e3a7483844ff8b4fb2a94a24e05c7->GetZaxis()->SetTitleSize(0.035);
   184e3a7483844ff8b4fb2a94a24e05c7->GetZaxis()->SetTitleFont(42);
   2cf50a47b36e42be9be3638df926409d->Add(184e3a7483844ff8b4fb2a94a24e05c7,"hist");
   2cf50a47b36e42be9be3638df926409d->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("2cf50a47b36e42be9be3638df926409d","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("3519938651114b15b48f530fffeac5c1","ZZ","f");

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
   entry=leg->AddEntry("d338f7280685480ca390258fa3ecc9c4","Charge mis-id","f");

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
   entry=leg->AddEntry("608605acbf254a41a3f531a251eeab1a","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("2629b81dc698454d9247381befb15d2c","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("be7c1df8f4d54ec581ec53f257d5ef74","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("184e3a7483844ff8b4fb2a94a24e05c7","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("be16199fabc5476ca0c85f69769de4ec","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_befac2cc63bd43d6a120171f3fe9ffda","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *be16199fabc5476ca0c85f69769de4ec = new TH1D("be16199fabc5476ca0c85f69769de4ec","Bkg. Unc.",1,0,300);
   be16199fabc5476ca0c85f69769de4ec->SetBinContent(1,4.366678);
   be16199fabc5476ca0c85f69769de4ec->SetBinError(1,0.8636389);
   be16199fabc5476ca0c85f69769de4ec->SetEntries(1);
   be16199fabc5476ca0c85f69769de4ec->SetFillColor(1);
   be16199fabc5476ca0c85f69769de4ec->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   be16199fabc5476ca0c85f69769de4ec->SetLineColor(ci);
   be16199fabc5476ca0c85f69769de4ec->SetMarkerSize(0);
   be16199fabc5476ca0c85f69769de4ec->GetXaxis()->SetLabelFont(42);
   be16199fabc5476ca0c85f69769de4ec->GetXaxis()->SetLabelSize(0.035);
   be16199fabc5476ca0c85f69769de4ec->GetXaxis()->SetTitleSize(0.035);
   be16199fabc5476ca0c85f69769de4ec->GetXaxis()->SetTitleFont(42);
   be16199fabc5476ca0c85f69769de4ec->GetYaxis()->SetLabelFont(42);
   be16199fabc5476ca0c85f69769de4ec->GetYaxis()->SetLabelSize(0.035);
   be16199fabc5476ca0c85f69769de4ec->GetYaxis()->SetTitleSize(0.035);
   be16199fabc5476ca0c85f69769de4ec->GetYaxis()->SetTitleFont(42);
   be16199fabc5476ca0c85f69769de4ec->GetZaxis()->SetLabelFont(42);
   be16199fabc5476ca0c85f69769de4ec->GetZaxis()->SetLabelSize(0.035);
   be16199fabc5476ca0c85f69769de4ec->GetZaxis()->SetTitleSize(0.035);
   be16199fabc5476ca0c85f69769de4ec->GetZaxis()->SetTitleFont(42);
   be16199fabc5476ca0c85f69769de4ec->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_befac2cc63bd43d6a120171f3fe9ffda");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,5);
   grae->SetPointError(0,0,0,2.159724,3.382539);
   
   TH1F *Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3 = new TH1F("Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3","Observed",100,149.9,151.1);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->SetMinimum(2.286049);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->SetMaximum(8.936766);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->SetDirectory(0);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->SetLineColor(ci);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_befac2cc63bd43d6a120171f3fe9ffda3);
   
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
   entry=leg->AddEntry("2cf50a47b36e42be9be3638df926409d","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("3519938651114b15b48f530fffeac5c1","ZZ","f");

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
   entry=leg->AddEntry("d338f7280685480ca390258fa3ecc9c4","Charge mis-id","f");

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
   entry=leg->AddEntry("608605acbf254a41a3f531a251eeab1a","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("2629b81dc698454d9247381befb15d2c","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("be7c1df8f4d54ec581ec53f257d5ef74","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("184e3a7483844ff8b4fb2a94a24e05c7","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("be16199fabc5476ca0c85f69769de4ec","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_befac2cc63bd43d6a120171f3fe9ffda","Observed","P");
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
