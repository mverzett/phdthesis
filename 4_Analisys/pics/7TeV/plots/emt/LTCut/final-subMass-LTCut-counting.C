{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 03:53:52 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-0.9398936,337.5,8.459041);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *8935348063fa4021812f1b23086ffc5f = new THStack();
   8935348063fa4021812f1b23086ffc5f->SetName("8935348063fa4021812f1b23086ffc5f");
   8935348063fa4021812f1b23086ffc5f->SetTitle("WZ#rightarrow3l");
   8935348063fa4021812f1b23086ffc5f->SetMaximum(7.161093);
   
   TH1F *8935348063fa4021812f1b23086ffc5f_stack_7 = new TH1F("8935348063fa4021812f1b23086ffc5f_stack_7","WZ#rightarrow3l",1,0,300);
   8935348063fa4021812f1b23086ffc5f_stack_7->SetMinimum(0);
   8935348063fa4021812f1b23086ffc5f_stack_7->SetMaximum(7.519148);
   8935348063fa4021812f1b23086ffc5f_stack_7->SetDirectory(0);
   8935348063fa4021812f1b23086ffc5f_stack_7->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   8935348063fa4021812f1b23086ffc5f_stack_7->SetLineColor(ci);
   8935348063fa4021812f1b23086ffc5f_stack_7->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   8935348063fa4021812f1b23086ffc5f_stack_7->GetXaxis()->SetLabelFont(42);
   8935348063fa4021812f1b23086ffc5f_stack_7->GetXaxis()->SetLabelSize(0.035);
   8935348063fa4021812f1b23086ffc5f_stack_7->GetXaxis()->SetTitleSize(0.035);
   8935348063fa4021812f1b23086ffc5f_stack_7->GetXaxis()->SetTitleFont(42);
   8935348063fa4021812f1b23086ffc5f_stack_7->GetYaxis()->SetTitle("Events");
   8935348063fa4021812f1b23086ffc5f_stack_7->GetYaxis()->SetLabelFont(42);
   8935348063fa4021812f1b23086ffc5f_stack_7->GetYaxis()->SetLabelSize(0.035);
   8935348063fa4021812f1b23086ffc5f_stack_7->GetYaxis()->SetTitleSize(0.035);
   8935348063fa4021812f1b23086ffc5f_stack_7->GetYaxis()->SetTitleFont(42);
   8935348063fa4021812f1b23086ffc5f_stack_7->GetZaxis()->SetLabelFont(42);
   8935348063fa4021812f1b23086ffc5f_stack_7->GetZaxis()->SetLabelSize(0.035);
   8935348063fa4021812f1b23086ffc5f_stack_7->GetZaxis()->SetTitleSize(0.035);
   8935348063fa4021812f1b23086ffc5f_stack_7->GetZaxis()->SetTitleFont(42);
   8935348063fa4021812f1b23086ffc5f->SetHistogram(8935348063fa4021812f1b23086ffc5f_stack_7);
   
   
   TH1D *8935348063fa4021812f1b23086ffc5f = new TH1D("8935348063fa4021812f1b23086ffc5f","WZ#rightarrow3l",1,0,300);
   8935348063fa4021812f1b23086ffc5f->SetBinContent(1,0.4644029);
   8935348063fa4021812f1b23086ffc5f->SetBinError(1,0.05506605);
   8935348063fa4021812f1b23086ffc5f->SetEntries(71.12494);

   ci = TColor::GetColor("#dc322f");
   8935348063fa4021812f1b23086ffc5f->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   8935348063fa4021812f1b23086ffc5f->SetLineColor(ci);
   8935348063fa4021812f1b23086ffc5f->GetXaxis()->SetLabelFont(42);
   8935348063fa4021812f1b23086ffc5f->GetXaxis()->SetLabelSize(0.035);
   8935348063fa4021812f1b23086ffc5f->GetXaxis()->SetTitleSize(0.035);
   8935348063fa4021812f1b23086ffc5f->GetXaxis()->SetTitleFont(42);
   8935348063fa4021812f1b23086ffc5f->GetYaxis()->SetLabelFont(42);
   8935348063fa4021812f1b23086ffc5f->GetYaxis()->SetLabelSize(0.035);
   8935348063fa4021812f1b23086ffc5f->GetYaxis()->SetTitleSize(0.035);
   8935348063fa4021812f1b23086ffc5f->GetYaxis()->SetTitleFont(42);
   8935348063fa4021812f1b23086ffc5f->GetZaxis()->SetLabelFont(42);
   8935348063fa4021812f1b23086ffc5f->GetZaxis()->SetLabelSize(0.035);
   8935348063fa4021812f1b23086ffc5f->GetZaxis()->SetTitleSize(0.035);
   8935348063fa4021812f1b23086ffc5f->GetZaxis()->SetTitleFont(42);
   8935348063fa4021812f1b23086ffc5f->Add(8935348063fa4021812f1b23086ffc5f,"hist");
   
   TH1D *489c28195cc74eb0bd1f405c9f7c12e8 = new TH1D("489c28195cc74eb0bd1f405c9f7c12e8","ZZ",1,0,300);
   489c28195cc74eb0bd1f405c9f7c12e8->SetBinContent(1,0.6443202);
   489c28195cc74eb0bd1f405c9f7c12e8->SetBinError(1,0.02246681);
   489c28195cc74eb0bd1f405c9f7c12e8->SetEntries(822.4709);

   ci = TColor::GetColor("#50a634");
   489c28195cc74eb0bd1f405c9f7c12e8->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   489c28195cc74eb0bd1f405c9f7c12e8->SetLineColor(ci);
   489c28195cc74eb0bd1f405c9f7c12e8->GetXaxis()->SetLabelFont(42);
   489c28195cc74eb0bd1f405c9f7c12e8->GetXaxis()->SetLabelSize(0.035);
   489c28195cc74eb0bd1f405c9f7c12e8->GetXaxis()->SetTitleSize(0.035);
   489c28195cc74eb0bd1f405c9f7c12e8->GetXaxis()->SetTitleFont(42);
   489c28195cc74eb0bd1f405c9f7c12e8->GetYaxis()->SetLabelFont(42);
   489c28195cc74eb0bd1f405c9f7c12e8->GetYaxis()->SetLabelSize(0.035);
   489c28195cc74eb0bd1f405c9f7c12e8->GetYaxis()->SetTitleSize(0.035);
   489c28195cc74eb0bd1f405c9f7c12e8->GetYaxis()->SetTitleFont(42);
   489c28195cc74eb0bd1f405c9f7c12e8->GetZaxis()->SetLabelFont(42);
   489c28195cc74eb0bd1f405c9f7c12e8->GetZaxis()->SetLabelSize(0.035);
   489c28195cc74eb0bd1f405c9f7c12e8->GetZaxis()->SetTitleSize(0.035);
   489c28195cc74eb0bd1f405c9f7c12e8->GetZaxis()->SetTitleFont(42);
   8935348063fa4021812f1b23086ffc5f->Add(489c28195cc74eb0bd1f405c9f7c12e8,"hist");
   
   TH1D *9ef3712c4c5d4f36967a30caac660033 = new TH1D("9ef3712c4c5d4f36967a30caac660033","Charge mis-id",1,0,300);
   9ef3712c4c5d4f36967a30caac660033->SetBinContent(1,0.04384956);
   9ef3712c4c5d4f36967a30caac660033->SetBinError(1,0.01120829);
   9ef3712c4c5d4f36967a30caac660033->SetEntries(15.30564);

   ci = TColor::GetColor("#9999cc");
   9ef3712c4c5d4f36967a30caac660033->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   9ef3712c4c5d4f36967a30caac660033->SetLineColor(ci);
   9ef3712c4c5d4f36967a30caac660033->SetMarkerStyle(20);
   9ef3712c4c5d4f36967a30caac660033->GetXaxis()->SetLabelFont(42);
   9ef3712c4c5d4f36967a30caac660033->GetXaxis()->SetLabelSize(0.035);
   9ef3712c4c5d4f36967a30caac660033->GetXaxis()->SetTitleSize(0.035);
   9ef3712c4c5d4f36967a30caac660033->GetXaxis()->SetTitleFont(42);
   9ef3712c4c5d4f36967a30caac660033->GetYaxis()->SetLabelFont(42);
   9ef3712c4c5d4f36967a30caac660033->GetYaxis()->SetLabelSize(0.035);
   9ef3712c4c5d4f36967a30caac660033->GetYaxis()->SetTitleSize(0.035);
   9ef3712c4c5d4f36967a30caac660033->GetYaxis()->SetTitleFont(42);
   9ef3712c4c5d4f36967a30caac660033->GetZaxis()->SetLabelFont(42);
   9ef3712c4c5d4f36967a30caac660033->GetZaxis()->SetLabelSize(0.035);
   9ef3712c4c5d4f36967a30caac660033->GetZaxis()->SetTitleSize(0.035);
   9ef3712c4c5d4f36967a30caac660033->GetZaxis()->SetTitleFont(42);
   8935348063fa4021812f1b23086ffc5f->Add(9ef3712c4c5d4f36967a30caac660033,"hist");
   
   TH1D *ed9bf46ffdbc4fcf8a353a1911c0d2ce = new TH1D("ed9bf46ffdbc4fcf8a353a1911c0d2ce","WZ#rightarrowl#tau#tau",1,0,300);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->SetBinContent(1,3.161911);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->SetBinError(1,0.1442928);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->SetEntries(480.1863);

   ci = TColor::GetColor("#268bd2");
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->SetLineColor(ci);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->GetXaxis()->SetLabelFont(42);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->GetXaxis()->SetLabelSize(0.035);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->GetXaxis()->SetTitleSize(0.035);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->GetXaxis()->SetTitleFont(42);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->GetYaxis()->SetLabelFont(42);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->GetYaxis()->SetLabelSize(0.035);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->GetYaxis()->SetTitleSize(0.035);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->GetYaxis()->SetTitleFont(42);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->GetZaxis()->SetLabelFont(42);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->GetZaxis()->SetLabelSize(0.035);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->GetZaxis()->SetTitleSize(0.035);
   ed9bf46ffdbc4fcf8a353a1911c0d2ce->GetZaxis()->SetTitleFont(42);
   8935348063fa4021812f1b23086ffc5f->Add(ed9bf46ffdbc4fcf8a353a1911c0d2ce,"hist");
   
   TH1D *ecf6cdaede7a47939edd50daa7c960af = new TH1D("ecf6cdaede7a47939edd50daa7c960af","Reducible bkg.",1,0,300);
   ecf6cdaede7a47939edd50daa7c960af->SetBinContent(0,1e-05);
   ecf6cdaede7a47939edd50daa7c960af->SetBinContent(1,1.179978);
   ecf6cdaede7a47939edd50daa7c960af->SetBinContent(2,1e-05);
   ecf6cdaede7a47939edd50daa7c960af->SetBinError(0,0.007458153);
   ecf6cdaede7a47939edd50daa7c960af->SetBinError(1,0.4544298);
   ecf6cdaede7a47939edd50daa7c960af->SetBinError(2,0.007458153);
   ecf6cdaede7a47939edd50daa7c960af->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   ecf6cdaede7a47939edd50daa7c960af->SetFillColor(ci);
   ecf6cdaede7a47939edd50daa7c960af->SetMarkerStyle(20);
   ecf6cdaede7a47939edd50daa7c960af->GetXaxis()->SetLabelFont(42);
   ecf6cdaede7a47939edd50daa7c960af->GetXaxis()->SetLabelSize(0.035);
   ecf6cdaede7a47939edd50daa7c960af->GetXaxis()->SetTitleSize(0.035);
   ecf6cdaede7a47939edd50daa7c960af->GetXaxis()->SetTitleFont(42);
   ecf6cdaede7a47939edd50daa7c960af->GetYaxis()->SetLabelFont(42);
   ecf6cdaede7a47939edd50daa7c960af->GetYaxis()->SetLabelSize(0.035);
   ecf6cdaede7a47939edd50daa7c960af->GetYaxis()->SetTitleSize(0.035);
   ecf6cdaede7a47939edd50daa7c960af->GetYaxis()->SetTitleFont(42);
   ecf6cdaede7a47939edd50daa7c960af->GetZaxis()->SetLabelFont(42);
   ecf6cdaede7a47939edd50daa7c960af->GetZaxis()->SetLabelSize(0.035);
   ecf6cdaede7a47939edd50daa7c960af->GetZaxis()->SetTitleSize(0.035);
   ecf6cdaede7a47939edd50daa7c960af->GetZaxis()->SetTitleFont(42);
   8935348063fa4021812f1b23086ffc5f->Add(ecf6cdaede7a47939edd50daa7c960af,"hist");
   
   TH1D *29adfabc47414fbfbc291e3e444a6248 = new TH1D("29adfabc47414fbfbc291e3e444a6248","VH H#rightarrowWW",1,0,300);
   29adfabc47414fbfbc291e3e444a6248->SetBinContent(1,0.0280925);
   29adfabc47414fbfbc291e3e444a6248->SetBinError(1,0.001995193);
   29adfabc47414fbfbc291e3e444a6248->SetEntries(198.2488);

   ci = TColor::GetColor("#cb4b16");
   29adfabc47414fbfbc291e3e444a6248->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   29adfabc47414fbfbc291e3e444a6248->SetLineColor(ci);
   29adfabc47414fbfbc291e3e444a6248->GetXaxis()->SetLabelFont(42);
   29adfabc47414fbfbc291e3e444a6248->GetXaxis()->SetLabelSize(0.035);
   29adfabc47414fbfbc291e3e444a6248->GetXaxis()->SetTitleSize(0.035);
   29adfabc47414fbfbc291e3e444a6248->GetXaxis()->SetTitleFont(42);
   29adfabc47414fbfbc291e3e444a6248->GetYaxis()->SetLabelFont(42);
   29adfabc47414fbfbc291e3e444a6248->GetYaxis()->SetLabelSize(0.035);
   29adfabc47414fbfbc291e3e444a6248->GetYaxis()->SetTitleSize(0.035);
   29adfabc47414fbfbc291e3e444a6248->GetYaxis()->SetTitleFont(42);
   29adfabc47414fbfbc291e3e444a6248->GetZaxis()->SetLabelFont(42);
   29adfabc47414fbfbc291e3e444a6248->GetZaxis()->SetLabelSize(0.035);
   29adfabc47414fbfbc291e3e444a6248->GetZaxis()->SetTitleSize(0.035);
   29adfabc47414fbfbc291e3e444a6248->GetZaxis()->SetTitleFont(42);
   8935348063fa4021812f1b23086ffc5f->Add(29adfabc47414fbfbc291e3e444a6248,"hist");
   
   TH1D *537c389f8013435ab79ce791a96a8241 = new TH1D("537c389f8013435ab79ce791a96a8241","(1#times) m_{H} = 125",1,0,300);
   537c389f8013435ab79ce791a96a8241->SetBinContent(1,0.4450237);
   537c389f8013435ab79ce791a96a8241->SetBinContent(2,0.001127858);
   537c389f8013435ab79ce791a96a8241->SetBinError(1,0.02221825);
   537c389f8013435ab79ce791a96a8241->SetBinError(2,0.001127858);
   537c389f8013435ab79ce791a96a8241->SetEntries(401.1869);
   537c389f8013435ab79ce791a96a8241->SetFillColor(1);
   537c389f8013435ab79ce791a96a8241->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   537c389f8013435ab79ce791a96a8241->SetLineColor(ci);
   537c389f8013435ab79ce791a96a8241->SetLineStyle(2);
   537c389f8013435ab79ce791a96a8241->SetLineWidth(4);
   537c389f8013435ab79ce791a96a8241->GetXaxis()->SetLabelFont(42);
   537c389f8013435ab79ce791a96a8241->GetXaxis()->SetLabelSize(0.035);
   537c389f8013435ab79ce791a96a8241->GetXaxis()->SetTitleSize(0.035);
   537c389f8013435ab79ce791a96a8241->GetXaxis()->SetTitleFont(42);
   537c389f8013435ab79ce791a96a8241->GetYaxis()->SetLabelFont(42);
   537c389f8013435ab79ce791a96a8241->GetYaxis()->SetLabelSize(0.035);
   537c389f8013435ab79ce791a96a8241->GetYaxis()->SetTitleSize(0.035);
   537c389f8013435ab79ce791a96a8241->GetYaxis()->SetTitleFont(42);
   537c389f8013435ab79ce791a96a8241->GetZaxis()->SetLabelFont(42);
   537c389f8013435ab79ce791a96a8241->GetZaxis()->SetLabelSize(0.035);
   537c389f8013435ab79ce791a96a8241->GetZaxis()->SetTitleSize(0.035);
   537c389f8013435ab79ce791a96a8241->GetZaxis()->SetTitleFont(42);
   8935348063fa4021812f1b23086ffc5f->Add(537c389f8013435ab79ce791a96a8241,"hist");
   8935348063fa4021812f1b23086ffc5f->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("8935348063fa4021812f1b23086ffc5f","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("489c28195cc74eb0bd1f405c9f7c12e8","ZZ","f");

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
   entry=leg->AddEntry("9ef3712c4c5d4f36967a30caac660033","Charge mis-id","f");

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
   entry=leg->AddEntry("ed9bf46ffdbc4fcf8a353a1911c0d2ce","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("ecf6cdaede7a47939edd50daa7c960af","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("29adfabc47414fbfbc291e3e444a6248","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("537c389f8013435ab79ce791a96a8241","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("688c0e0b413d4a68a18a00f933ba8d10","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_73f2bd91cb27465facf455aba6165489","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *688c0e0b413d4a68a18a00f933ba8d10 = new TH1D("688c0e0b413d4a68a18a00f933ba8d10","Bkg. Unc.",1,0,300);
   688c0e0b413d4a68a18a00f933ba8d10->SetBinContent(1,5.494462);
   688c0e0b413d4a68a18a00f933ba8d10->SetBinError(1,1.234763);
   688c0e0b413d4a68a18a00f933ba8d10->SetEntries(1);
   688c0e0b413d4a68a18a00f933ba8d10->SetFillColor(1);
   688c0e0b413d4a68a18a00f933ba8d10->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   688c0e0b413d4a68a18a00f933ba8d10->SetLineColor(ci);
   688c0e0b413d4a68a18a00f933ba8d10->SetMarkerSize(0);
   688c0e0b413d4a68a18a00f933ba8d10->GetXaxis()->SetLabelFont(42);
   688c0e0b413d4a68a18a00f933ba8d10->GetXaxis()->SetLabelSize(0.035);
   688c0e0b413d4a68a18a00f933ba8d10->GetXaxis()->SetTitleSize(0.035);
   688c0e0b413d4a68a18a00f933ba8d10->GetXaxis()->SetTitleFont(42);
   688c0e0b413d4a68a18a00f933ba8d10->GetYaxis()->SetLabelFont(42);
   688c0e0b413d4a68a18a00f933ba8d10->GetYaxis()->SetLabelSize(0.035);
   688c0e0b413d4a68a18a00f933ba8d10->GetYaxis()->SetTitleSize(0.035);
   688c0e0b413d4a68a18a00f933ba8d10->GetYaxis()->SetTitleFont(42);
   688c0e0b413d4a68a18a00f933ba8d10->GetZaxis()->SetLabelFont(42);
   688c0e0b413d4a68a18a00f933ba8d10->GetZaxis()->SetLabelSize(0.035);
   688c0e0b413d4a68a18a00f933ba8d10->GetZaxis()->SetTitleSize(0.035);
   688c0e0b413d4a68a18a00f933ba8d10->GetZaxis()->SetTitleFont(42);
   688c0e0b413d4a68a18a00f933ba8d10->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_73f2bd91cb27465facf455aba6165489");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,4);
   grae->SetPointError(0,0,0,1.914367,3.162815);
   
   TH1F *Graph_Graph_from_73f2bd91cb27465facf455aba61654897 = new TH1F("Graph_Graph_from_73f2bd91cb27465facf455aba61654897","Observed",100,149.9,151.1);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->SetMinimum(1.577915);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->SetMaximum(7.670533);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->SetDirectory(0);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->SetLineColor(ci);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_73f2bd91cb27465facf455aba61654897->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_73f2bd91cb27465facf455aba61654897);
   
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
   entry=leg->AddEntry("8935348063fa4021812f1b23086ffc5f","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("489c28195cc74eb0bd1f405c9f7c12e8","ZZ","f");

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
   entry=leg->AddEntry("9ef3712c4c5d4f36967a30caac660033","Charge mis-id","f");

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
   entry=leg->AddEntry("ed9bf46ffdbc4fcf8a353a1911c0d2ce","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("ecf6cdaede7a47939edd50daa7c960af","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("29adfabc47414fbfbc291e3e444a6248","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("537c389f8013435ab79ce791a96a8241","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("688c0e0b413d4a68a18a00f933ba8d10","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_73f2bd91cb27465facf455aba6165489","Observed","P");
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
