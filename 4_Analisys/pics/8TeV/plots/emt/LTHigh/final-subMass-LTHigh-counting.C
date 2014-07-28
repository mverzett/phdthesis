{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:05:09 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-3.315647,337.5,29.84082);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *58096cde7a8245e1a50a1e8fdd0ccc0a = new THStack();
   58096cde7a8245e1a50a1e8fdd0ccc0a->SetName("58096cde7a8245e1a50a1e8fdd0ccc0a");
   58096cde7a8245e1a50a1e8fdd0ccc0a->SetTitle("WZ#rightarrow3l");
   58096cde7a8245e1a50a1e8fdd0ccc0a->SetMaximum(25.26207);
   
   TH1F *58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3 = new TH1F("58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3","WZ#rightarrow3l",1,0,300);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->SetMinimum(0);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->SetMaximum(26.52517);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->SetDirectory(0);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->SetLineColor(ci);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetXaxis()->SetLabelFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetXaxis()->SetLabelSize(0.035);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetXaxis()->SetTitleSize(0.035);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetXaxis()->SetTitleFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetYaxis()->SetTitle("Events");
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetYaxis()->SetLabelFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetYaxis()->SetLabelSize(0.035);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetYaxis()->SetTitleSize(0.035);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetYaxis()->SetTitleFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetZaxis()->SetLabelFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetZaxis()->SetLabelSize(0.035);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetZaxis()->SetTitleSize(0.035);
   58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3->GetZaxis()->SetTitleFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->SetHistogram(58096cde7a8245e1a50a1e8fdd0ccc0a_stack_3);
   
   
   TH1D *58096cde7a8245e1a50a1e8fdd0ccc0a = new TH1D("58096cde7a8245e1a50a1e8fdd0ccc0a","WZ#rightarrow3l",1,0,300);
   58096cde7a8245e1a50a1e8fdd0ccc0a->SetBinContent(1,1.382278);
   58096cde7a8245e1a50a1e8fdd0ccc0a->SetBinContent(2,0.02154404);
   58096cde7a8245e1a50a1e8fdd0ccc0a->SetBinError(1,0.1220114);
   58096cde7a8245e1a50a1e8fdd0ccc0a->SetBinError(2,0.01524058);
   58096cde7a8245e1a50a1e8fdd0ccc0a->SetEntries(128.3481);

   ci = TColor::GetColor("#dc322f");
   58096cde7a8245e1a50a1e8fdd0ccc0a->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   58096cde7a8245e1a50a1e8fdd0ccc0a->SetLineColor(ci);
   58096cde7a8245e1a50a1e8fdd0ccc0a->GetXaxis()->SetLabelFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->GetXaxis()->SetLabelSize(0.035);
   58096cde7a8245e1a50a1e8fdd0ccc0a->GetXaxis()->SetTitleSize(0.035);
   58096cde7a8245e1a50a1e8fdd0ccc0a->GetXaxis()->SetTitleFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->GetYaxis()->SetLabelFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->GetYaxis()->SetLabelSize(0.035);
   58096cde7a8245e1a50a1e8fdd0ccc0a->GetYaxis()->SetTitleSize(0.035);
   58096cde7a8245e1a50a1e8fdd0ccc0a->GetYaxis()->SetTitleFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->GetZaxis()->SetLabelFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->GetZaxis()->SetLabelSize(0.035);
   58096cde7a8245e1a50a1e8fdd0ccc0a->GetZaxis()->SetTitleSize(0.035);
   58096cde7a8245e1a50a1e8fdd0ccc0a->GetZaxis()->SetTitleFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->Add(58096cde7a8245e1a50a1e8fdd0ccc0a,"hist");
   
   TH1D *ea6782bb58a64be39fd7f41ce9aee2d4 = new TH1D("ea6782bb58a64be39fd7f41ce9aee2d4","ZZ",1,0,300);
   ea6782bb58a64be39fd7f41ce9aee2d4->SetBinContent(1,0.7236903);
   ea6782bb58a64be39fd7f41ce9aee2d4->SetBinContent(2,0.0007050788);
   ea6782bb58a64be39fd7f41ce9aee2d4->SetBinError(1,0.01969868);
   ea6782bb58a64be39fd7f41ce9aee2d4->SetBinError(2,0.000637957);
   ea6782bb58a64be39fd7f41ce9aee2d4->SetEntries(1349.681);

   ci = TColor::GetColor("#50a634");
   ea6782bb58a64be39fd7f41ce9aee2d4->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   ea6782bb58a64be39fd7f41ce9aee2d4->SetLineColor(ci);
   ea6782bb58a64be39fd7f41ce9aee2d4->GetXaxis()->SetLabelFont(42);
   ea6782bb58a64be39fd7f41ce9aee2d4->GetXaxis()->SetLabelSize(0.035);
   ea6782bb58a64be39fd7f41ce9aee2d4->GetXaxis()->SetTitleSize(0.035);
   ea6782bb58a64be39fd7f41ce9aee2d4->GetXaxis()->SetTitleFont(42);
   ea6782bb58a64be39fd7f41ce9aee2d4->GetYaxis()->SetLabelFont(42);
   ea6782bb58a64be39fd7f41ce9aee2d4->GetYaxis()->SetLabelSize(0.035);
   ea6782bb58a64be39fd7f41ce9aee2d4->GetYaxis()->SetTitleSize(0.035);
   ea6782bb58a64be39fd7f41ce9aee2d4->GetYaxis()->SetTitleFont(42);
   ea6782bb58a64be39fd7f41ce9aee2d4->GetZaxis()->SetLabelFont(42);
   ea6782bb58a64be39fd7f41ce9aee2d4->GetZaxis()->SetLabelSize(0.035);
   ea6782bb58a64be39fd7f41ce9aee2d4->GetZaxis()->SetTitleSize(0.035);
   ea6782bb58a64be39fd7f41ce9aee2d4->GetZaxis()->SetTitleFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->Add(ea6782bb58a64be39fd7f41ce9aee2d4,"hist");
   
   TH1D *5bb992072285461381078e0fc6bbdc51 = new TH1D("5bb992072285461381078e0fc6bbdc51","Charge mis-id",1,0,300);
   5bb992072285461381078e0fc6bbdc51->SetBinContent(1,0.1599365);
   5bb992072285461381078e0fc6bbdc51->SetBinError(1,0.01867944);
   5bb992072285461381078e0fc6bbdc51->SetEntries(73.31066);

   ci = TColor::GetColor("#9999cc");
   5bb992072285461381078e0fc6bbdc51->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   5bb992072285461381078e0fc6bbdc51->SetLineColor(ci);
   5bb992072285461381078e0fc6bbdc51->SetMarkerStyle(20);
   5bb992072285461381078e0fc6bbdc51->GetXaxis()->SetLabelFont(42);
   5bb992072285461381078e0fc6bbdc51->GetXaxis()->SetLabelSize(0.035);
   5bb992072285461381078e0fc6bbdc51->GetXaxis()->SetTitleSize(0.035);
   5bb992072285461381078e0fc6bbdc51->GetXaxis()->SetTitleFont(42);
   5bb992072285461381078e0fc6bbdc51->GetYaxis()->SetLabelFont(42);
   5bb992072285461381078e0fc6bbdc51->GetYaxis()->SetLabelSize(0.035);
   5bb992072285461381078e0fc6bbdc51->GetYaxis()->SetTitleSize(0.035);
   5bb992072285461381078e0fc6bbdc51->GetYaxis()->SetTitleFont(42);
   5bb992072285461381078e0fc6bbdc51->GetZaxis()->SetLabelFont(42);
   5bb992072285461381078e0fc6bbdc51->GetZaxis()->SetLabelSize(0.035);
   5bb992072285461381078e0fc6bbdc51->GetZaxis()->SetTitleSize(0.035);
   5bb992072285461381078e0fc6bbdc51->GetZaxis()->SetTitleFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->Add(5bb992072285461381078e0fc6bbdc51,"hist");
   
   TH1D *f90c4e96c0584a4a843bb388b68bbb6d = new TH1D("f90c4e96c0584a4a843bb388b68bbb6d","WZ#rightarrowl#tau#tau",1,0,300);
   f90c4e96c0584a4a843bb388b68bbb6d->SetBinContent(1,9.130242);
   f90c4e96c0584a4a843bb388b68bbb6d->SetBinContent(2,0.02273599);
   f90c4e96c0584a4a843bb388b68bbb6d->SetBinError(1,0.3095542);
   f90c4e96c0584a4a843bb388b68bbb6d->SetBinError(2,0.01612053);
   f90c4e96c0584a4a843bb388b68bbb6d->SetEntries(869.944);

   ci = TColor::GetColor("#268bd2");
   f90c4e96c0584a4a843bb388b68bbb6d->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   f90c4e96c0584a4a843bb388b68bbb6d->SetLineColor(ci);
   f90c4e96c0584a4a843bb388b68bbb6d->GetXaxis()->SetLabelFont(42);
   f90c4e96c0584a4a843bb388b68bbb6d->GetXaxis()->SetLabelSize(0.035);
   f90c4e96c0584a4a843bb388b68bbb6d->GetXaxis()->SetTitleSize(0.035);
   f90c4e96c0584a4a843bb388b68bbb6d->GetXaxis()->SetTitleFont(42);
   f90c4e96c0584a4a843bb388b68bbb6d->GetYaxis()->SetLabelFont(42);
   f90c4e96c0584a4a843bb388b68bbb6d->GetYaxis()->SetLabelSize(0.035);
   f90c4e96c0584a4a843bb388b68bbb6d->GetYaxis()->SetTitleSize(0.035);
   f90c4e96c0584a4a843bb388b68bbb6d->GetYaxis()->SetTitleFont(42);
   f90c4e96c0584a4a843bb388b68bbb6d->GetZaxis()->SetLabelFont(42);
   f90c4e96c0584a4a843bb388b68bbb6d->GetZaxis()->SetLabelSize(0.035);
   f90c4e96c0584a4a843bb388b68bbb6d->GetZaxis()->SetTitleSize(0.035);
   f90c4e96c0584a4a843bb388b68bbb6d->GetZaxis()->SetTitleFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->Add(f90c4e96c0584a4a843bb388b68bbb6d,"hist");
   
   TH1D *499866108a2c420297c0e2af4984b0ac = new TH1D("499866108a2c420297c0e2af4984b0ac","Reducible bkg.",1,0,300);
   499866108a2c420297c0e2af4984b0ac->SetBinContent(0,1e-05);
   499866108a2c420297c0e2af4984b0ac->SetBinContent(1,8.147188);
   499866108a2c420297c0e2af4984b0ac->SetBinContent(2,0.01558676);
   499866108a2c420297c0e2af4984b0ac->SetBinError(0,0.03321245);
   499866108a2c420297c0e2af4984b0ac->SetBinError(1,1.332005);
   499866108a2c420297c0e2af4984b0ac->SetBinError(2,0.01167944);
   499866108a2c420297c0e2af4984b0ac->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   499866108a2c420297c0e2af4984b0ac->SetFillColor(ci);
   499866108a2c420297c0e2af4984b0ac->SetMarkerStyle(20);
   499866108a2c420297c0e2af4984b0ac->GetXaxis()->SetLabelFont(42);
   499866108a2c420297c0e2af4984b0ac->GetXaxis()->SetLabelSize(0.035);
   499866108a2c420297c0e2af4984b0ac->GetXaxis()->SetTitleSize(0.035);
   499866108a2c420297c0e2af4984b0ac->GetXaxis()->SetTitleFont(42);
   499866108a2c420297c0e2af4984b0ac->GetYaxis()->SetLabelFont(42);
   499866108a2c420297c0e2af4984b0ac->GetYaxis()->SetLabelSize(0.035);
   499866108a2c420297c0e2af4984b0ac->GetYaxis()->SetTitleSize(0.035);
   499866108a2c420297c0e2af4984b0ac->GetYaxis()->SetTitleFont(42);
   499866108a2c420297c0e2af4984b0ac->GetZaxis()->SetLabelFont(42);
   499866108a2c420297c0e2af4984b0ac->GetZaxis()->SetLabelSize(0.035);
   499866108a2c420297c0e2af4984b0ac->GetZaxis()->SetTitleSize(0.035);
   499866108a2c420297c0e2af4984b0ac->GetZaxis()->SetTitleFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->Add(499866108a2c420297c0e2af4984b0ac,"hist");
   
   TH1D *d9b48d2f2d5c42789e3f56c857290368 = new TH1D("d9b48d2f2d5c42789e3f56c857290368","VH H#rightarrowWW",1,0,300);
   d9b48d2f2d5c42789e3f56c857290368->SetBinContent(1,0.07277906);
   d9b48d2f2d5c42789e3f56c857290368->SetBinError(1,0.006166296);
   d9b48d2f2d5c42789e3f56c857290368->SetEntries(139.3042);

   ci = TColor::GetColor("#cb4b16");
   d9b48d2f2d5c42789e3f56c857290368->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   d9b48d2f2d5c42789e3f56c857290368->SetLineColor(ci);
   d9b48d2f2d5c42789e3f56c857290368->GetXaxis()->SetLabelFont(42);
   d9b48d2f2d5c42789e3f56c857290368->GetXaxis()->SetLabelSize(0.035);
   d9b48d2f2d5c42789e3f56c857290368->GetXaxis()->SetTitleSize(0.035);
   d9b48d2f2d5c42789e3f56c857290368->GetXaxis()->SetTitleFont(42);
   d9b48d2f2d5c42789e3f56c857290368->GetYaxis()->SetLabelFont(42);
   d9b48d2f2d5c42789e3f56c857290368->GetYaxis()->SetLabelSize(0.035);
   d9b48d2f2d5c42789e3f56c857290368->GetYaxis()->SetTitleSize(0.035);
   d9b48d2f2d5c42789e3f56c857290368->GetYaxis()->SetTitleFont(42);
   d9b48d2f2d5c42789e3f56c857290368->GetZaxis()->SetLabelFont(42);
   d9b48d2f2d5c42789e3f56c857290368->GetZaxis()->SetLabelSize(0.035);
   d9b48d2f2d5c42789e3f56c857290368->GetZaxis()->SetTitleSize(0.035);
   d9b48d2f2d5c42789e3f56c857290368->GetZaxis()->SetTitleFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->Add(d9b48d2f2d5c42789e3f56c857290368,"hist");
   
   TH1D *aa38eb2e1bc6497e9d11957841802a20 = new TH1D("aa38eb2e1bc6497e9d11957841802a20","(1#times) m_{H} = 125",1,0,300);
   aa38eb2e1bc6497e9d11957841802a20->SetBinContent(1,1.43561);
   aa38eb2e1bc6497e9d11957841802a20->SetBinContent(2,0.004212867);
   aa38eb2e1bc6497e9d11957841802a20->SetBinError(1,0.07611939);
   aa38eb2e1bc6497e9d11957841802a20->SetBinError(2,0.004212867);
   aa38eb2e1bc6497e9d11957841802a20->SetEntries(355.6986);
   aa38eb2e1bc6497e9d11957841802a20->SetFillColor(1);
   aa38eb2e1bc6497e9d11957841802a20->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   aa38eb2e1bc6497e9d11957841802a20->SetLineColor(ci);
   aa38eb2e1bc6497e9d11957841802a20->SetLineStyle(2);
   aa38eb2e1bc6497e9d11957841802a20->SetLineWidth(4);
   aa38eb2e1bc6497e9d11957841802a20->GetXaxis()->SetLabelFont(42);
   aa38eb2e1bc6497e9d11957841802a20->GetXaxis()->SetLabelSize(0.035);
   aa38eb2e1bc6497e9d11957841802a20->GetXaxis()->SetTitleSize(0.035);
   aa38eb2e1bc6497e9d11957841802a20->GetXaxis()->SetTitleFont(42);
   aa38eb2e1bc6497e9d11957841802a20->GetYaxis()->SetLabelFont(42);
   aa38eb2e1bc6497e9d11957841802a20->GetYaxis()->SetLabelSize(0.035);
   aa38eb2e1bc6497e9d11957841802a20->GetYaxis()->SetTitleSize(0.035);
   aa38eb2e1bc6497e9d11957841802a20->GetYaxis()->SetTitleFont(42);
   aa38eb2e1bc6497e9d11957841802a20->GetZaxis()->SetLabelFont(42);
   aa38eb2e1bc6497e9d11957841802a20->GetZaxis()->SetLabelSize(0.035);
   aa38eb2e1bc6497e9d11957841802a20->GetZaxis()->SetTitleSize(0.035);
   aa38eb2e1bc6497e9d11957841802a20->GetZaxis()->SetTitleFont(42);
   58096cde7a8245e1a50a1e8fdd0ccc0a->Add(aa38eb2e1bc6497e9d11957841802a20,"hist");
   58096cde7a8245e1a50a1e8fdd0ccc0a->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("58096cde7a8245e1a50a1e8fdd0ccc0a","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("ea6782bb58a64be39fd7f41ce9aee2d4","ZZ","f");

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
   entry=leg->AddEntry("5bb992072285461381078e0fc6bbdc51","Charge mis-id","f");

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
   entry=leg->AddEntry("f90c4e96c0584a4a843bb388b68bbb6d","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("499866108a2c420297c0e2af4984b0ac","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("d9b48d2f2d5c42789e3f56c857290368","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("aa38eb2e1bc6497e9d11957841802a20","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("41bc30bd661e4642b97d9b44b0868151","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_cd35c16b85c14c5791b0955297a49dc2","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *41bc30bd661e4642b97d9b44b0868151 = new TH1D("41bc30bd661e4642b97d9b44b0868151","Bkg. Unc.",1,0,300);
   41bc30bd661e4642b97d9b44b0868151->SetBinContent(1,19.54334);
   41bc30bd661e4642b97d9b44b0868151->SetBinError(1,4.023238);
   41bc30bd661e4642b97d9b44b0868151->SetEntries(1);
   41bc30bd661e4642b97d9b44b0868151->SetFillColor(1);
   41bc30bd661e4642b97d9b44b0868151->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   41bc30bd661e4642b97d9b44b0868151->SetLineColor(ci);
   41bc30bd661e4642b97d9b44b0868151->SetMarkerSize(0);
   41bc30bd661e4642b97d9b44b0868151->GetXaxis()->SetLabelFont(42);
   41bc30bd661e4642b97d9b44b0868151->GetXaxis()->SetLabelSize(0.035);
   41bc30bd661e4642b97d9b44b0868151->GetXaxis()->SetTitleSize(0.035);
   41bc30bd661e4642b97d9b44b0868151->GetXaxis()->SetTitleFont(42);
   41bc30bd661e4642b97d9b44b0868151->GetYaxis()->SetLabelFont(42);
   41bc30bd661e4642b97d9b44b0868151->GetYaxis()->SetLabelSize(0.035);
   41bc30bd661e4642b97d9b44b0868151->GetYaxis()->SetTitleSize(0.035);
   41bc30bd661e4642b97d9b44b0868151->GetYaxis()->SetTitleFont(42);
   41bc30bd661e4642b97d9b44b0868151->GetZaxis()->SetLabelFont(42);
   41bc30bd661e4642b97d9b44b0868151->GetZaxis()->SetLabelSize(0.035);
   41bc30bd661e4642b97d9b44b0868151->GetZaxis()->SetTitleSize(0.035);
   41bc30bd661e4642b97d9b44b0868151->GetZaxis()->SetTitleFont(42);
   41bc30bd661e4642b97d9b44b0868151->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_cd35c16b85c14c5791b0955297a49dc2");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,17);
   grae->SetPointError(0,0,0,4.082258,5.203825);
   
   TH1F *Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23 = new TH1F("Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23","Observed",100,149.9,151.1);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->SetMinimum(11.98913);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->SetMaximum(23.13243);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->SetDirectory(0);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->SetLineColor(ci);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_cd35c16b85c14c5791b0955297a49dc23);
   
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
   entry=leg->AddEntry("58096cde7a8245e1a50a1e8fdd0ccc0a","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("ea6782bb58a64be39fd7f41ce9aee2d4","ZZ","f");

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
   entry=leg->AddEntry("5bb992072285461381078e0fc6bbdc51","Charge mis-id","f");

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
   entry=leg->AddEntry("f90c4e96c0584a4a843bb388b68bbb6d","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("499866108a2c420297c0e2af4984b0ac","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("d9b48d2f2d5c42789e3f56c857290368","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("aa38eb2e1bc6497e9d11957841802a20","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("41bc30bd661e4642b97d9b44b0868151","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_cd35c16b85c14c5791b0955297a49dc2","Observed","P");
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
