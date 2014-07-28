{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 03:52:40 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-0.4725,337.5,4.2525);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *e2d3ddf823e04b54b60854b26a318c81 = new THStack();
   e2d3ddf823e04b54b60854b26a318c81->SetName("e2d3ddf823e04b54b60854b26a318c81");
   e2d3ddf823e04b54b60854b26a318c81->SetTitle("WZ#rightarrow3l");
   e2d3ddf823e04b54b60854b26a318c81->SetMaximum(3.6);
   
   TH1F *e2d3ddf823e04b54b60854b26a318c81_stack_2 = new TH1F("e2d3ddf823e04b54b60854b26a318c81_stack_2","WZ#rightarrow3l",1,0,300);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->SetMinimum(0);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->SetMaximum(3.78);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->SetDirectory(0);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   e2d3ddf823e04b54b60854b26a318c81_stack_2->SetLineColor(ci);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetXaxis()->SetLabelFont(42);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetXaxis()->SetLabelSize(0.035);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetXaxis()->SetTitleSize(0.035);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetXaxis()->SetTitleFont(42);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetYaxis()->SetTitle("Events");
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetYaxis()->SetLabelFont(42);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetYaxis()->SetLabelSize(0.035);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetYaxis()->SetTitleSize(0.035);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetYaxis()->SetTitleFont(42);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetZaxis()->SetLabelFont(42);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetZaxis()->SetLabelSize(0.035);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetZaxis()->SetTitleSize(0.035);
   e2d3ddf823e04b54b60854b26a318c81_stack_2->GetZaxis()->SetTitleFont(42);
   e2d3ddf823e04b54b60854b26a318c81->SetHistogram(e2d3ddf823e04b54b60854b26a318c81_stack_2);
   
   
   TH1D *e2d3ddf823e04b54b60854b26a318c81 = new TH1D("e2d3ddf823e04b54b60854b26a318c81","WZ#rightarrow3l",1,0,300);
   e2d3ddf823e04b54b60854b26a318c81->SetBinContent(1,0.1105958);
   e2d3ddf823e04b54b60854b26a318c81->SetBinError(1,0.02745291);
   e2d3ddf823e04b54b60854b26a318c81->SetEntries(16.22933);

   ci = TColor::GetColor("#dc322f");
   e2d3ddf823e04b54b60854b26a318c81->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   e2d3ddf823e04b54b60854b26a318c81->SetLineColor(ci);
   e2d3ddf823e04b54b60854b26a318c81->GetXaxis()->SetLabelFont(42);
   e2d3ddf823e04b54b60854b26a318c81->GetXaxis()->SetLabelSize(0.035);
   e2d3ddf823e04b54b60854b26a318c81->GetXaxis()->SetTitleSize(0.035);
   e2d3ddf823e04b54b60854b26a318c81->GetXaxis()->SetTitleFont(42);
   e2d3ddf823e04b54b60854b26a318c81->GetYaxis()->SetLabelFont(42);
   e2d3ddf823e04b54b60854b26a318c81->GetYaxis()->SetLabelSize(0.035);
   e2d3ddf823e04b54b60854b26a318c81->GetYaxis()->SetTitleSize(0.035);
   e2d3ddf823e04b54b60854b26a318c81->GetYaxis()->SetTitleFont(42);
   e2d3ddf823e04b54b60854b26a318c81->GetZaxis()->SetLabelFont(42);
   e2d3ddf823e04b54b60854b26a318c81->GetZaxis()->SetLabelSize(0.035);
   e2d3ddf823e04b54b60854b26a318c81->GetZaxis()->SetTitleSize(0.035);
   e2d3ddf823e04b54b60854b26a318c81->GetZaxis()->SetTitleFont(42);
   e2d3ddf823e04b54b60854b26a318c81->Add(e2d3ddf823e04b54b60854b26a318c81,"hist");
   
   TH1D *e1e3ea1490984ebbbb541a0d6cc33c68 = new TH1D("e1e3ea1490984ebbbb541a0d6cc33c68","ZZ",1,0,300);
   e1e3ea1490984ebbbb541a0d6cc33c68->SetBinContent(1,0.01618866);
   e1e3ea1490984ebbbb541a0d6cc33c68->SetBinError(1,0.003580409);
   e1e3ea1490984ebbbb541a0d6cc33c68->SetEntries(20.44356);

   ci = TColor::GetColor("#50a634");
   e1e3ea1490984ebbbb541a0d6cc33c68->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   e1e3ea1490984ebbbb541a0d6cc33c68->SetLineColor(ci);
   e1e3ea1490984ebbbb541a0d6cc33c68->GetXaxis()->SetLabelFont(42);
   e1e3ea1490984ebbbb541a0d6cc33c68->GetXaxis()->SetLabelSize(0.035);
   e1e3ea1490984ebbbb541a0d6cc33c68->GetXaxis()->SetTitleSize(0.035);
   e1e3ea1490984ebbbb541a0d6cc33c68->GetXaxis()->SetTitleFont(42);
   e1e3ea1490984ebbbb541a0d6cc33c68->GetYaxis()->SetLabelFont(42);
   e1e3ea1490984ebbbb541a0d6cc33c68->GetYaxis()->SetLabelSize(0.035);
   e1e3ea1490984ebbbb541a0d6cc33c68->GetYaxis()->SetTitleSize(0.035);
   e1e3ea1490984ebbbb541a0d6cc33c68->GetYaxis()->SetTitleFont(42);
   e1e3ea1490984ebbbb541a0d6cc33c68->GetZaxis()->SetLabelFont(42);
   e1e3ea1490984ebbbb541a0d6cc33c68->GetZaxis()->SetLabelSize(0.035);
   e1e3ea1490984ebbbb541a0d6cc33c68->GetZaxis()->SetTitleSize(0.035);
   e1e3ea1490984ebbbb541a0d6cc33c68->GetZaxis()->SetTitleFont(42);
   e2d3ddf823e04b54b60854b26a318c81->Add(e1e3ea1490984ebbbb541a0d6cc33c68,"hist");
   
   TH1D *0bd3b4ab487b4c249e965fde2d7a07b0 = new TH1D("0bd3b4ab487b4c249e965fde2d7a07b0","Charge mis-id",1,0,300);
   0bd3b4ab487b4c249e965fde2d7a07b0->SetBinContent(1,0.06118698);
   0bd3b4ab487b4c249e965fde2d7a07b0->SetBinError(1,0.01333774);
   0bd3b4ab487b4c249e965fde2d7a07b0->SetEntries(21.04522);

   ci = TColor::GetColor("#9999cc");
   0bd3b4ab487b4c249e965fde2d7a07b0->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   0bd3b4ab487b4c249e965fde2d7a07b0->SetLineColor(ci);
   0bd3b4ab487b4c249e965fde2d7a07b0->SetMarkerStyle(20);
   0bd3b4ab487b4c249e965fde2d7a07b0->GetXaxis()->SetLabelFont(42);
   0bd3b4ab487b4c249e965fde2d7a07b0->GetXaxis()->SetLabelSize(0.035);
   0bd3b4ab487b4c249e965fde2d7a07b0->GetXaxis()->SetTitleSize(0.035);
   0bd3b4ab487b4c249e965fde2d7a07b0->GetXaxis()->SetTitleFont(42);
   0bd3b4ab487b4c249e965fde2d7a07b0->GetYaxis()->SetLabelFont(42);
   0bd3b4ab487b4c249e965fde2d7a07b0->GetYaxis()->SetLabelSize(0.035);
   0bd3b4ab487b4c249e965fde2d7a07b0->GetYaxis()->SetTitleSize(0.035);
   0bd3b4ab487b4c249e965fde2d7a07b0->GetYaxis()->SetTitleFont(42);
   0bd3b4ab487b4c249e965fde2d7a07b0->GetZaxis()->SetLabelFont(42);
   0bd3b4ab487b4c249e965fde2d7a07b0->GetZaxis()->SetLabelSize(0.035);
   0bd3b4ab487b4c249e965fde2d7a07b0->GetZaxis()->SetTitleSize(0.035);
   0bd3b4ab487b4c249e965fde2d7a07b0->GetZaxis()->SetTitleFont(42);
   e2d3ddf823e04b54b60854b26a318c81->Add(0bd3b4ab487b4c249e965fde2d7a07b0,"hist");
   
   TH1D *bb702e480e6d411dbd8a49d9b30a172d = new TH1D("bb702e480e6d411dbd8a49d9b30a172d","WZ#rightarrowl#tau#tau",1,0,300);
   bb702e480e6d411dbd8a49d9b30a172d->SetBinContent(1,0.04483122);
   bb702e480e6d411dbd8a49d9b30a172d->SetBinError(1,0.01719395);
   bb702e480e6d411dbd8a49d9b30a172d->SetEntries(6.798445);

   ci = TColor::GetColor("#268bd2");
   bb702e480e6d411dbd8a49d9b30a172d->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   bb702e480e6d411dbd8a49d9b30a172d->SetLineColor(ci);
   bb702e480e6d411dbd8a49d9b30a172d->GetXaxis()->SetLabelFont(42);
   bb702e480e6d411dbd8a49d9b30a172d->GetXaxis()->SetLabelSize(0.035);
   bb702e480e6d411dbd8a49d9b30a172d->GetXaxis()->SetTitleSize(0.035);
   bb702e480e6d411dbd8a49d9b30a172d->GetXaxis()->SetTitleFont(42);
   bb702e480e6d411dbd8a49d9b30a172d->GetYaxis()->SetLabelFont(42);
   bb702e480e6d411dbd8a49d9b30a172d->GetYaxis()->SetLabelSize(0.035);
   bb702e480e6d411dbd8a49d9b30a172d->GetYaxis()->SetTitleSize(0.035);
   bb702e480e6d411dbd8a49d9b30a172d->GetYaxis()->SetTitleFont(42);
   bb702e480e6d411dbd8a49d9b30a172d->GetZaxis()->SetLabelFont(42);
   bb702e480e6d411dbd8a49d9b30a172d->GetZaxis()->SetLabelSize(0.035);
   bb702e480e6d411dbd8a49d9b30a172d->GetZaxis()->SetTitleSize(0.035);
   bb702e480e6d411dbd8a49d9b30a172d->GetZaxis()->SetTitleFont(42);
   e2d3ddf823e04b54b60854b26a318c81->Add(bb702e480e6d411dbd8a49d9b30a172d,"hist");
   
   TH1D *45f5709366504db6993db3d2efde6b25 = new TH1D("45f5709366504db6993db3d2efde6b25","Reducible bkg.",1,0,300);
   45f5709366504db6993db3d2efde6b25->SetBinContent(0,1e-05);
   45f5709366504db6993db3d2efde6b25->SetBinContent(1,0.2164152);
   45f5709366504db6993db3d2efde6b25->SetBinContent(2,1e-05);
   45f5709366504db6993db3d2efde6b25->SetBinError(0,0.007670806);
   45f5709366504db6993db3d2efde6b25->SetBinError(1,0.06894914);
   45f5709366504db6993db3d2efde6b25->SetBinError(2,0.007670806);
   45f5709366504db6993db3d2efde6b25->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   45f5709366504db6993db3d2efde6b25->SetFillColor(ci);
   45f5709366504db6993db3d2efde6b25->SetMarkerStyle(20);
   45f5709366504db6993db3d2efde6b25->GetXaxis()->SetLabelFont(42);
   45f5709366504db6993db3d2efde6b25->GetXaxis()->SetLabelSize(0.035);
   45f5709366504db6993db3d2efde6b25->GetXaxis()->SetTitleSize(0.035);
   45f5709366504db6993db3d2efde6b25->GetXaxis()->SetTitleFont(42);
   45f5709366504db6993db3d2efde6b25->GetYaxis()->SetLabelFont(42);
   45f5709366504db6993db3d2efde6b25->GetYaxis()->SetLabelSize(0.035);
   45f5709366504db6993db3d2efde6b25->GetYaxis()->SetTitleSize(0.035);
   45f5709366504db6993db3d2efde6b25->GetYaxis()->SetTitleFont(42);
   45f5709366504db6993db3d2efde6b25->GetZaxis()->SetLabelFont(42);
   45f5709366504db6993db3d2efde6b25->GetZaxis()->SetLabelSize(0.035);
   45f5709366504db6993db3d2efde6b25->GetZaxis()->SetTitleSize(0.035);
   45f5709366504db6993db3d2efde6b25->GetZaxis()->SetTitleFont(42);
   e2d3ddf823e04b54b60854b26a318c81->Add(45f5709366504db6993db3d2efde6b25,"hist");
   
   TH1D *fed02a951f3145fb85a258a031f2b06f = new TH1D("fed02a951f3145fb85a258a031f2b06f","VH H#rightarrowWW",1,0,300);
   fed02a951f3145fb85a258a031f2b06f->SetBinContent(1,0.0006460034);
   fed02a951f3145fb85a258a031f2b06f->SetBinError(1,0.0002934781);
   fed02a951f3145fb85a258a031f2b06f->SetEntries(4.845271);

   ci = TColor::GetColor("#cb4b16");
   fed02a951f3145fb85a258a031f2b06f->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   fed02a951f3145fb85a258a031f2b06f->SetLineColor(ci);
   fed02a951f3145fb85a258a031f2b06f->GetXaxis()->SetLabelFont(42);
   fed02a951f3145fb85a258a031f2b06f->GetXaxis()->SetLabelSize(0.035);
   fed02a951f3145fb85a258a031f2b06f->GetXaxis()->SetTitleSize(0.035);
   fed02a951f3145fb85a258a031f2b06f->GetXaxis()->SetTitleFont(42);
   fed02a951f3145fb85a258a031f2b06f->GetYaxis()->SetLabelFont(42);
   fed02a951f3145fb85a258a031f2b06f->GetYaxis()->SetLabelSize(0.035);
   fed02a951f3145fb85a258a031f2b06f->GetYaxis()->SetTitleSize(0.035);
   fed02a951f3145fb85a258a031f2b06f->GetYaxis()->SetTitleFont(42);
   fed02a951f3145fb85a258a031f2b06f->GetZaxis()->SetLabelFont(42);
   fed02a951f3145fb85a258a031f2b06f->GetZaxis()->SetLabelSize(0.035);
   fed02a951f3145fb85a258a031f2b06f->GetZaxis()->SetTitleSize(0.035);
   fed02a951f3145fb85a258a031f2b06f->GetZaxis()->SetTitleFont(42);
   e2d3ddf823e04b54b60854b26a318c81->Add(fed02a951f3145fb85a258a031f2b06f,"hist");
   
   TH1D *00af71eedaec453dbbeee6601bb7ac74 = new TH1D("00af71eedaec453dbbeee6601bb7ac74","(1#times) m_{H} = 125",1,0,300);
   00af71eedaec453dbbeee6601bb7ac74->SetBinContent(1,0.001358079);
   00af71eedaec453dbbeee6601bb7ac74->SetBinError(1,0.001236926);
   00af71eedaec453dbbeee6601bb7ac74->SetEntries(1.205487);
   00af71eedaec453dbbeee6601bb7ac74->SetFillColor(1);
   00af71eedaec453dbbeee6601bb7ac74->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   00af71eedaec453dbbeee6601bb7ac74->SetLineColor(ci);
   00af71eedaec453dbbeee6601bb7ac74->SetLineStyle(2);
   00af71eedaec453dbbeee6601bb7ac74->SetLineWidth(4);
   00af71eedaec453dbbeee6601bb7ac74->GetXaxis()->SetLabelFont(42);
   00af71eedaec453dbbeee6601bb7ac74->GetXaxis()->SetLabelSize(0.035);
   00af71eedaec453dbbeee6601bb7ac74->GetXaxis()->SetTitleSize(0.035);
   00af71eedaec453dbbeee6601bb7ac74->GetXaxis()->SetTitleFont(42);
   00af71eedaec453dbbeee6601bb7ac74->GetYaxis()->SetLabelFont(42);
   00af71eedaec453dbbeee6601bb7ac74->GetYaxis()->SetLabelSize(0.035);
   00af71eedaec453dbbeee6601bb7ac74->GetYaxis()->SetTitleSize(0.035);
   00af71eedaec453dbbeee6601bb7ac74->GetYaxis()->SetTitleFont(42);
   00af71eedaec453dbbeee6601bb7ac74->GetZaxis()->SetLabelFont(42);
   00af71eedaec453dbbeee6601bb7ac74->GetZaxis()->SetLabelSize(0.035);
   00af71eedaec453dbbeee6601bb7ac74->GetZaxis()->SetTitleSize(0.035);
   00af71eedaec453dbbeee6601bb7ac74->GetZaxis()->SetTitleFont(42);
   e2d3ddf823e04b54b60854b26a318c81->Add(00af71eedaec453dbbeee6601bb7ac74,"hist");
   e2d3ddf823e04b54b60854b26a318c81->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("e2d3ddf823e04b54b60854b26a318c81","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("e1e3ea1490984ebbbb541a0d6cc33c68","ZZ","f");

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
   entry=leg->AddEntry("0bd3b4ab487b4c249e965fde2d7a07b0","Charge mis-id","f");

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
   entry=leg->AddEntry("bb702e480e6d411dbd8a49d9b30a172d","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("45f5709366504db6993db3d2efde6b25","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("fed02a951f3145fb85a258a031f2b06f","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("00af71eedaec453dbbeee6601bb7ac74","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f55bfd05d440405180c060b26f63deb1","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_dc0401a900d947fc88d119adb78d7e37","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *f55bfd05d440405180c060b26f63deb1 = new TH1D("f55bfd05d440405180c060b26f63deb1","Bkg. Unc.",1,0,300);
   f55bfd05d440405180c060b26f63deb1->SetBinContent(1,0.4492179);
   f55bfd05d440405180c060b26f63deb1->SetBinError(1,0.2173831);
   f55bfd05d440405180c060b26f63deb1->SetEntries(1);
   f55bfd05d440405180c060b26f63deb1->SetFillColor(1);
   f55bfd05d440405180c060b26f63deb1->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   f55bfd05d440405180c060b26f63deb1->SetLineColor(ci);
   f55bfd05d440405180c060b26f63deb1->SetMarkerSize(0);
   f55bfd05d440405180c060b26f63deb1->GetXaxis()->SetLabelFont(42);
   f55bfd05d440405180c060b26f63deb1->GetXaxis()->SetLabelSize(0.035);
   f55bfd05d440405180c060b26f63deb1->GetXaxis()->SetTitleSize(0.035);
   f55bfd05d440405180c060b26f63deb1->GetXaxis()->SetTitleFont(42);
   f55bfd05d440405180c060b26f63deb1->GetYaxis()->SetLabelFont(42);
   f55bfd05d440405180c060b26f63deb1->GetYaxis()->SetLabelSize(0.035);
   f55bfd05d440405180c060b26f63deb1->GetYaxis()->SetTitleSize(0.035);
   f55bfd05d440405180c060b26f63deb1->GetYaxis()->SetTitleFont(42);
   f55bfd05d440405180c060b26f63deb1->GetZaxis()->SetLabelFont(42);
   f55bfd05d440405180c060b26f63deb1->GetZaxis()->SetLabelSize(0.035);
   f55bfd05d440405180c060b26f63deb1->GetZaxis()->SetTitleSize(0.035);
   f55bfd05d440405180c060b26f63deb1->GetZaxis()->SetTitleFont(42);
   f55bfd05d440405180c060b26f63deb1->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_dc0401a900d947fc88d119adb78d7e37");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,3);
   grae->SetPointError(0,0,0,1.632727,2.918242);
   
   TH1F *Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372 = new TH1F("Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372","Observed",100,149.9,151.1);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->SetMinimum(0.9121763);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->SetMaximum(6.373339);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->SetDirectory(0);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->SetLineColor(ci);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_dc0401a900d947fc88d119adb78d7e372);
   
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
   entry=leg->AddEntry("e2d3ddf823e04b54b60854b26a318c81","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("e1e3ea1490984ebbbb541a0d6cc33c68","ZZ","f");

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
   entry=leg->AddEntry("0bd3b4ab487b4c249e965fde2d7a07b0","Charge mis-id","f");

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
   entry=leg->AddEntry("bb702e480e6d411dbd8a49d9b30a172d","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("45f5709366504db6993db3d2efde6b25","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("fed02a951f3145fb85a258a031f2b06f","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("00af71eedaec453dbbeee6601bb7ac74","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f55bfd05d440405180c060b26f63deb1","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_dc0401a900d947fc88d119adb78d7e37","Observed","P");
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
