{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:05:21 2014) by ROOT version5.32/00
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
   
   THStack *fbc40eb1c15d445d97c014b8ee46861e = new THStack();
   fbc40eb1c15d445d97c014b8ee46861e->SetName("fbc40eb1c15d445d97c014b8ee46861e");
   fbc40eb1c15d445d97c014b8ee46861e->SetTitle("WZ#rightarrow3l");
   fbc40eb1c15d445d97c014b8ee46861e->SetMaximum(6);
   
   TH1F *fbc40eb1c15d445d97c014b8ee46861e_stack_4 = new TH1F("fbc40eb1c15d445d97c014b8ee46861e_stack_4","WZ#rightarrow3l",1,0,300);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->SetMinimum(0);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->SetMaximum(6.3);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->SetDirectory(0);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->SetLineColor(ci);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetXaxis()->SetLabelFont(42);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetXaxis()->SetLabelSize(0.035);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetXaxis()->SetTitleSize(0.035);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetXaxis()->SetTitleFont(42);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetYaxis()->SetTitle("Events");
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetYaxis()->SetLabelFont(42);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetYaxis()->SetLabelSize(0.035);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetYaxis()->SetTitleSize(0.035);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetYaxis()->SetTitleFont(42);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetZaxis()->SetLabelFont(42);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetZaxis()->SetLabelSize(0.035);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetZaxis()->SetTitleSize(0.035);
   fbc40eb1c15d445d97c014b8ee46861e_stack_4->GetZaxis()->SetTitleFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->SetHistogram(fbc40eb1c15d445d97c014b8ee46861e_stack_4);
   
   
   TH1D *fbc40eb1c15d445d97c014b8ee46861e = new TH1D("fbc40eb1c15d445d97c014b8ee46861e","WZ#rightarrow3l",1,0,300);
   fbc40eb1c15d445d97c014b8ee46861e->SetBinContent(1,0.166049);
   fbc40eb1c15d445d97c014b8ee46861e->SetBinError(1,0.04072795);
   fbc40eb1c15d445d97c014b8ee46861e->SetEntries(16.62216);

   ci = TColor::GetColor("#dc322f");
   fbc40eb1c15d445d97c014b8ee46861e->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   fbc40eb1c15d445d97c014b8ee46861e->SetLineColor(ci);
   fbc40eb1c15d445d97c014b8ee46861e->GetXaxis()->SetLabelFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->GetXaxis()->SetLabelSize(0.035);
   fbc40eb1c15d445d97c014b8ee46861e->GetXaxis()->SetTitleSize(0.035);
   fbc40eb1c15d445d97c014b8ee46861e->GetXaxis()->SetTitleFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->GetYaxis()->SetLabelFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->GetYaxis()->SetLabelSize(0.035);
   fbc40eb1c15d445d97c014b8ee46861e->GetYaxis()->SetTitleSize(0.035);
   fbc40eb1c15d445d97c014b8ee46861e->GetYaxis()->SetTitleFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->GetZaxis()->SetLabelFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->GetZaxis()->SetLabelSize(0.035);
   fbc40eb1c15d445d97c014b8ee46861e->GetZaxis()->SetTitleSize(0.035);
   fbc40eb1c15d445d97c014b8ee46861e->GetZaxis()->SetTitleFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->Add(fbc40eb1c15d445d97c014b8ee46861e,"hist");
   
   TH1D *4cf8020ba8e34063aca0a95b277005e9 = new TH1D("4cf8020ba8e34063aca0a95b277005e9","ZZ",1,0,300);
   4cf8020ba8e34063aca0a95b277005e9->SetBinContent(1,0.03826147);
   4cf8020ba8e34063aca0a95b277005e9->SetBinContent(2,0.0005540796);
   4cf8020ba8e34063aca0a95b277005e9->SetBinError(1,0.004523473);
   4cf8020ba8e34063aca0a95b277005e9->SetBinError(2,0.0005540796);
   4cf8020ba8e34063aca0a95b277005e9->SetEntries(71.54499);

   ci = TColor::GetColor("#50a634");
   4cf8020ba8e34063aca0a95b277005e9->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   4cf8020ba8e34063aca0a95b277005e9->SetLineColor(ci);
   4cf8020ba8e34063aca0a95b277005e9->GetXaxis()->SetLabelFont(42);
   4cf8020ba8e34063aca0a95b277005e9->GetXaxis()->SetLabelSize(0.035);
   4cf8020ba8e34063aca0a95b277005e9->GetXaxis()->SetTitleSize(0.035);
   4cf8020ba8e34063aca0a95b277005e9->GetXaxis()->SetTitleFont(42);
   4cf8020ba8e34063aca0a95b277005e9->GetYaxis()->SetLabelFont(42);
   4cf8020ba8e34063aca0a95b277005e9->GetYaxis()->SetLabelSize(0.035);
   4cf8020ba8e34063aca0a95b277005e9->GetYaxis()->SetTitleSize(0.035);
   4cf8020ba8e34063aca0a95b277005e9->GetYaxis()->SetTitleFont(42);
   4cf8020ba8e34063aca0a95b277005e9->GetZaxis()->SetLabelFont(42);
   4cf8020ba8e34063aca0a95b277005e9->GetZaxis()->SetLabelSize(0.035);
   4cf8020ba8e34063aca0a95b277005e9->GetZaxis()->SetTitleSize(0.035);
   4cf8020ba8e34063aca0a95b277005e9->GetZaxis()->SetTitleFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->Add(4cf8020ba8e34063aca0a95b277005e9,"hist");
   
   TH1D *5e84746df7b94f29b9f45ac82549376b = new TH1D("5e84746df7b94f29b9f45ac82549376b","Charge mis-id",1,0,300);
   5e84746df7b94f29b9f45ac82549376b->SetBinContent(1,0.1131761);
   5e84746df7b94f29b9f45ac82549376b->SetBinError(1,0.01456164);
   5e84746df7b94f29b9f45ac82549376b->SetEntries(60.40722);

   ci = TColor::GetColor("#9999cc");
   5e84746df7b94f29b9f45ac82549376b->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   5e84746df7b94f29b9f45ac82549376b->SetLineColor(ci);
   5e84746df7b94f29b9f45ac82549376b->SetMarkerStyle(20);
   5e84746df7b94f29b9f45ac82549376b->GetXaxis()->SetLabelFont(42);
   5e84746df7b94f29b9f45ac82549376b->GetXaxis()->SetLabelSize(0.035);
   5e84746df7b94f29b9f45ac82549376b->GetXaxis()->SetTitleSize(0.035);
   5e84746df7b94f29b9f45ac82549376b->GetXaxis()->SetTitleFont(42);
   5e84746df7b94f29b9f45ac82549376b->GetYaxis()->SetLabelFont(42);
   5e84746df7b94f29b9f45ac82549376b->GetYaxis()->SetLabelSize(0.035);
   5e84746df7b94f29b9f45ac82549376b->GetYaxis()->SetTitleSize(0.035);
   5e84746df7b94f29b9f45ac82549376b->GetYaxis()->SetTitleFont(42);
   5e84746df7b94f29b9f45ac82549376b->GetZaxis()->SetLabelFont(42);
   5e84746df7b94f29b9f45ac82549376b->GetZaxis()->SetLabelSize(0.035);
   5e84746df7b94f29b9f45ac82549376b->GetZaxis()->SetTitleSize(0.035);
   5e84746df7b94f29b9f45ac82549376b->GetZaxis()->SetTitleFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->Add(5e84746df7b94f29b9f45ac82549376b,"hist");
   
   TH1D *53eeccdee76a42f78ef329cb1fb0b247 = new TH1D("53eeccdee76a42f78ef329cb1fb0b247","WZ#rightarrowl#tau#tau",1,0,300);
   53eeccdee76a42f78ef329cb1fb0b247->SetBinContent(1,0.1378011);
   53eeccdee76a42f78ef329cb1fb0b247->SetBinError(1,0.03833654);
   53eeccdee76a42f78ef329cb1fb0b247->SetEntries(12.92051);

   ci = TColor::GetColor("#268bd2");
   53eeccdee76a42f78ef329cb1fb0b247->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   53eeccdee76a42f78ef329cb1fb0b247->SetLineColor(ci);
   53eeccdee76a42f78ef329cb1fb0b247->GetXaxis()->SetLabelFont(42);
   53eeccdee76a42f78ef329cb1fb0b247->GetXaxis()->SetLabelSize(0.035);
   53eeccdee76a42f78ef329cb1fb0b247->GetXaxis()->SetTitleSize(0.035);
   53eeccdee76a42f78ef329cb1fb0b247->GetXaxis()->SetTitleFont(42);
   53eeccdee76a42f78ef329cb1fb0b247->GetYaxis()->SetLabelFont(42);
   53eeccdee76a42f78ef329cb1fb0b247->GetYaxis()->SetLabelSize(0.035);
   53eeccdee76a42f78ef329cb1fb0b247->GetYaxis()->SetTitleSize(0.035);
   53eeccdee76a42f78ef329cb1fb0b247->GetYaxis()->SetTitleFont(42);
   53eeccdee76a42f78ef329cb1fb0b247->GetZaxis()->SetLabelFont(42);
   53eeccdee76a42f78ef329cb1fb0b247->GetZaxis()->SetLabelSize(0.035);
   53eeccdee76a42f78ef329cb1fb0b247->GetZaxis()->SetTitleSize(0.035);
   53eeccdee76a42f78ef329cb1fb0b247->GetZaxis()->SetTitleFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->Add(53eeccdee76a42f78ef329cb1fb0b247,"hist");
   
   TH1D *40c6342cc89146b89535db0b71659b8d = new TH1D("40c6342cc89146b89535db0b71659b8d","Reducible bkg.",1,0,300);
   40c6342cc89146b89535db0b71659b8d->SetBinContent(0,1e-05);
   40c6342cc89146b89535db0b71659b8d->SetBinContent(1,1.666412);
   40c6342cc89146b89535db0b71659b8d->SetBinContent(2,0.08461236);
   40c6342cc89146b89535db0b71659b8d->SetBinError(0,0.04359065);
   40c6342cc89146b89535db0b71659b8d->SetBinError(1,0.4892189);
   40c6342cc89146b89535db0b71659b8d->SetBinError(2,0.05986537);
   40c6342cc89146b89535db0b71659b8d->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   40c6342cc89146b89535db0b71659b8d->SetFillColor(ci);
   40c6342cc89146b89535db0b71659b8d->SetMarkerStyle(20);
   40c6342cc89146b89535db0b71659b8d->GetXaxis()->SetLabelFont(42);
   40c6342cc89146b89535db0b71659b8d->GetXaxis()->SetLabelSize(0.035);
   40c6342cc89146b89535db0b71659b8d->GetXaxis()->SetTitleSize(0.035);
   40c6342cc89146b89535db0b71659b8d->GetXaxis()->SetTitleFont(42);
   40c6342cc89146b89535db0b71659b8d->GetYaxis()->SetLabelFont(42);
   40c6342cc89146b89535db0b71659b8d->GetYaxis()->SetLabelSize(0.035);
   40c6342cc89146b89535db0b71659b8d->GetYaxis()->SetTitleSize(0.035);
   40c6342cc89146b89535db0b71659b8d->GetYaxis()->SetTitleFont(42);
   40c6342cc89146b89535db0b71659b8d->GetZaxis()->SetLabelFont(42);
   40c6342cc89146b89535db0b71659b8d->GetZaxis()->SetLabelSize(0.035);
   40c6342cc89146b89535db0b71659b8d->GetZaxis()->SetTitleSize(0.035);
   40c6342cc89146b89535db0b71659b8d->GetZaxis()->SetTitleFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->Add(40c6342cc89146b89535db0b71659b8d,"hist");
   
   TH1D *0db8447280324f22891f5af9c73e6223 = new TH1D("0db8447280324f22891f5af9c73e6223","VH H#rightarrowWW",1,0,300);
   0db8447280324f22891f5af9c73e6223->SetBinContent(1,0.0009419945);
   0db8447280324f22891f5af9c73e6223->SetBinError(1,0.0006101644);
   0db8447280324f22891f5af9c73e6223->SetEntries(2.383433);

   ci = TColor::GetColor("#cb4b16");
   0db8447280324f22891f5af9c73e6223->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   0db8447280324f22891f5af9c73e6223->SetLineColor(ci);
   0db8447280324f22891f5af9c73e6223->GetXaxis()->SetLabelFont(42);
   0db8447280324f22891f5af9c73e6223->GetXaxis()->SetLabelSize(0.035);
   0db8447280324f22891f5af9c73e6223->GetXaxis()->SetTitleSize(0.035);
   0db8447280324f22891f5af9c73e6223->GetXaxis()->SetTitleFont(42);
   0db8447280324f22891f5af9c73e6223->GetYaxis()->SetLabelFont(42);
   0db8447280324f22891f5af9c73e6223->GetYaxis()->SetLabelSize(0.035);
   0db8447280324f22891f5af9c73e6223->GetYaxis()->SetTitleSize(0.035);
   0db8447280324f22891f5af9c73e6223->GetYaxis()->SetTitleFont(42);
   0db8447280324f22891f5af9c73e6223->GetZaxis()->SetLabelFont(42);
   0db8447280324f22891f5af9c73e6223->GetZaxis()->SetLabelSize(0.035);
   0db8447280324f22891f5af9c73e6223->GetZaxis()->SetTitleSize(0.035);
   0db8447280324f22891f5af9c73e6223->GetZaxis()->SetTitleFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->Add(0db8447280324f22891f5af9c73e6223,"hist");
   
   TH1D *99d498e795db46cf9a24bed4732e872e = new TH1D("99d498e795db46cf9a24bed4732e872e","(1#times) m_{H} = 125",1,0,300);
   99d498e795db46cf9a24bed4732e872e->SetBinContent(1,0.01412523);
   99d498e795db46cf9a24bed4732e872e->SetBinError(1,0.007143835);
   99d498e795db46cf9a24bed4732e872e->SetEntries(3.909562);
   99d498e795db46cf9a24bed4732e872e->SetFillColor(1);
   99d498e795db46cf9a24bed4732e872e->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   99d498e795db46cf9a24bed4732e872e->SetLineColor(ci);
   99d498e795db46cf9a24bed4732e872e->SetLineStyle(2);
   99d498e795db46cf9a24bed4732e872e->SetLineWidth(4);
   99d498e795db46cf9a24bed4732e872e->GetXaxis()->SetLabelFont(42);
   99d498e795db46cf9a24bed4732e872e->GetXaxis()->SetLabelSize(0.035);
   99d498e795db46cf9a24bed4732e872e->GetXaxis()->SetTitleSize(0.035);
   99d498e795db46cf9a24bed4732e872e->GetXaxis()->SetTitleFont(42);
   99d498e795db46cf9a24bed4732e872e->GetYaxis()->SetLabelFont(42);
   99d498e795db46cf9a24bed4732e872e->GetYaxis()->SetLabelSize(0.035);
   99d498e795db46cf9a24bed4732e872e->GetYaxis()->SetTitleSize(0.035);
   99d498e795db46cf9a24bed4732e872e->GetYaxis()->SetTitleFont(42);
   99d498e795db46cf9a24bed4732e872e->GetZaxis()->SetLabelFont(42);
   99d498e795db46cf9a24bed4732e872e->GetZaxis()->SetLabelSize(0.035);
   99d498e795db46cf9a24bed4732e872e->GetZaxis()->SetTitleSize(0.035);
   99d498e795db46cf9a24bed4732e872e->GetZaxis()->SetTitleFont(42);
   fbc40eb1c15d445d97c014b8ee46861e->Add(99d498e795db46cf9a24bed4732e872e,"hist");
   fbc40eb1c15d445d97c014b8ee46861e->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("fbc40eb1c15d445d97c014b8ee46861e","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("4cf8020ba8e34063aca0a95b277005e9","ZZ","f");

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
   entry=leg->AddEntry("5e84746df7b94f29b9f45ac82549376b","Charge mis-id","f");

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
   entry=leg->AddEntry("53eeccdee76a42f78ef329cb1fb0b247","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("40c6342cc89146b89535db0b71659b8d","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("0db8447280324f22891f5af9c73e6223","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("99d498e795db46cf9a24bed4732e872e","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f0bd7d0a01d24fbe882e407f3c586adf","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_cb5056d03e14462d8f98a7154b50b422","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *f0bd7d0a01d24fbe882e407f3c586adf = new TH1D("f0bd7d0a01d24fbe882e407f3c586adf","Bkg. Unc.",1,0,300);
   f0bd7d0a01d24fbe882e407f3c586adf->SetBinContent(1,2.1217);
   f0bd7d0a01d24fbe882e407f3c586adf->SetBinError(1,1.666753);
   f0bd7d0a01d24fbe882e407f3c586adf->SetEntries(1);
   f0bd7d0a01d24fbe882e407f3c586adf->SetFillColor(1);
   f0bd7d0a01d24fbe882e407f3c586adf->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   f0bd7d0a01d24fbe882e407f3c586adf->SetLineColor(ci);
   f0bd7d0a01d24fbe882e407f3c586adf->SetMarkerSize(0);
   f0bd7d0a01d24fbe882e407f3c586adf->GetXaxis()->SetLabelFont(42);
   f0bd7d0a01d24fbe882e407f3c586adf->GetXaxis()->SetLabelSize(0.035);
   f0bd7d0a01d24fbe882e407f3c586adf->GetXaxis()->SetTitleSize(0.035);
   f0bd7d0a01d24fbe882e407f3c586adf->GetXaxis()->SetTitleFont(42);
   f0bd7d0a01d24fbe882e407f3c586adf->GetYaxis()->SetLabelFont(42);
   f0bd7d0a01d24fbe882e407f3c586adf->GetYaxis()->SetLabelSize(0.035);
   f0bd7d0a01d24fbe882e407f3c586adf->GetYaxis()->SetTitleSize(0.035);
   f0bd7d0a01d24fbe882e407f3c586adf->GetYaxis()->SetTitleFont(42);
   f0bd7d0a01d24fbe882e407f3c586adf->GetZaxis()->SetLabelFont(42);
   f0bd7d0a01d24fbe882e407f3c586adf->GetZaxis()->SetLabelSize(0.035);
   f0bd7d0a01d24fbe882e407f3c586adf->GetZaxis()->SetTitleSize(0.035);
   f0bd7d0a01d24fbe882e407f3c586adf->GetZaxis()->SetTitleFont(42);
   f0bd7d0a01d24fbe882e407f3c586adf->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_cb5056d03e14462d8f98a7154b50b422");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,5);
   grae->SetPointError(0,0,0,2.159724,3.382539);
   
   TH1F *Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224 = new TH1F("Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224","Observed",100,149.9,151.1);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->SetMinimum(2.286049);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->SetMaximum(8.936766);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->SetDirectory(0);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->SetLineColor(ci);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_cb5056d03e14462d8f98a7154b50b4224);
   
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
   entry=leg->AddEntry("fbc40eb1c15d445d97c014b8ee46861e","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("4cf8020ba8e34063aca0a95b277005e9","ZZ","f");

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
   entry=leg->AddEntry("5e84746df7b94f29b9f45ac82549376b","Charge mis-id","f");

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
   entry=leg->AddEntry("53eeccdee76a42f78ef329cb1fb0b247","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("40c6342cc89146b89535db0b71659b8d","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("0db8447280324f22891f5af9c73e6223","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("99d498e795db46cf9a24bed4732e872e","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f0bd7d0a01d24fbe882e407f3c586adf","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_cb5056d03e14462d8f98a7154b50b422","Observed","P");
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
