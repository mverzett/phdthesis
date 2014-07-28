{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 03:54:07 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-0.315,337.5,2.835);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *52b04fcbcd79467fb45c96ad900fb1f5 = new THStack();
   52b04fcbcd79467fb45c96ad900fb1f5->SetName("52b04fcbcd79467fb45c96ad900fb1f5");
   52b04fcbcd79467fb45c96ad900fb1f5->SetTitle("WZ#rightarrow3l");
   52b04fcbcd79467fb45c96ad900fb1f5->SetMaximum(2.4);
   
   TH1F *52b04fcbcd79467fb45c96ad900fb1f5_stack_8 = new TH1F("52b04fcbcd79467fb45c96ad900fb1f5_stack_8","WZ#rightarrow3l",1,0,300);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->SetMinimum(0);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->SetMaximum(2.52);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->SetDirectory(0);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->SetLineColor(ci);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetXaxis()->SetLabelFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetXaxis()->SetLabelSize(0.035);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetXaxis()->SetTitleSize(0.035);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetXaxis()->SetTitleFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetYaxis()->SetTitle("Events");
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetYaxis()->SetLabelFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetYaxis()->SetLabelSize(0.035);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetYaxis()->SetTitleSize(0.035);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetYaxis()->SetTitleFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetZaxis()->SetLabelFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetZaxis()->SetLabelSize(0.035);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetZaxis()->SetTitleSize(0.035);
   52b04fcbcd79467fb45c96ad900fb1f5_stack_8->GetZaxis()->SetTitleFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->SetHistogram(52b04fcbcd79467fb45c96ad900fb1f5_stack_8);
   
   
   TH1D *52b04fcbcd79467fb45c96ad900fb1f5 = new TH1D("52b04fcbcd79467fb45c96ad900fb1f5","WZ#rightarrow3l",1,0,300);
   52b04fcbcd79467fb45c96ad900fb1f5->SetBinContent(1,0.093292);
   52b04fcbcd79467fb45c96ad900fb1f5->SetBinError(1,0.02545579);
   52b04fcbcd79467fb45c96ad900fb1f5->SetEntries(13.43123);

   ci = TColor::GetColor("#dc322f");
   52b04fcbcd79467fb45c96ad900fb1f5->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   52b04fcbcd79467fb45c96ad900fb1f5->SetLineColor(ci);
   52b04fcbcd79467fb45c96ad900fb1f5->GetXaxis()->SetLabelFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->GetXaxis()->SetLabelSize(0.035);
   52b04fcbcd79467fb45c96ad900fb1f5->GetXaxis()->SetTitleSize(0.035);
   52b04fcbcd79467fb45c96ad900fb1f5->GetXaxis()->SetTitleFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->GetYaxis()->SetLabelFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->GetYaxis()->SetLabelSize(0.035);
   52b04fcbcd79467fb45c96ad900fb1f5->GetYaxis()->SetTitleSize(0.035);
   52b04fcbcd79467fb45c96ad900fb1f5->GetYaxis()->SetTitleFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->GetZaxis()->SetLabelFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->GetZaxis()->SetLabelSize(0.035);
   52b04fcbcd79467fb45c96ad900fb1f5->GetZaxis()->SetTitleSize(0.035);
   52b04fcbcd79467fb45c96ad900fb1f5->GetZaxis()->SetTitleFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->Add(52b04fcbcd79467fb45c96ad900fb1f5,"hist");
   
   TH1D *38b83febefb84dbd887b896bcd02c212 = new TH1D("38b83febefb84dbd887b896bcd02c212","ZZ",1,0,300);
   38b83febefb84dbd887b896bcd02c212->SetBinContent(1,0.01286861);
   38b83febefb84dbd887b896bcd02c212->SetBinError(1,0.003171134);
   38b83febefb84dbd887b896bcd02c212->SetEntries(16.46774);

   ci = TColor::GetColor("#50a634");
   38b83febefb84dbd887b896bcd02c212->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   38b83febefb84dbd887b896bcd02c212->SetLineColor(ci);
   38b83febefb84dbd887b896bcd02c212->GetXaxis()->SetLabelFont(42);
   38b83febefb84dbd887b896bcd02c212->GetXaxis()->SetLabelSize(0.035);
   38b83febefb84dbd887b896bcd02c212->GetXaxis()->SetTitleSize(0.035);
   38b83febefb84dbd887b896bcd02c212->GetXaxis()->SetTitleFont(42);
   38b83febefb84dbd887b896bcd02c212->GetYaxis()->SetLabelFont(42);
   38b83febefb84dbd887b896bcd02c212->GetYaxis()->SetLabelSize(0.035);
   38b83febefb84dbd887b896bcd02c212->GetYaxis()->SetTitleSize(0.035);
   38b83febefb84dbd887b896bcd02c212->GetYaxis()->SetTitleFont(42);
   38b83febefb84dbd887b896bcd02c212->GetZaxis()->SetLabelFont(42);
   38b83febefb84dbd887b896bcd02c212->GetZaxis()->SetLabelSize(0.035);
   38b83febefb84dbd887b896bcd02c212->GetZaxis()->SetTitleSize(0.035);
   38b83febefb84dbd887b896bcd02c212->GetZaxis()->SetTitleFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->Add(38b83febefb84dbd887b896bcd02c212,"hist");
   
   TH1D *07778131dce94ad5b8918c54c19a7433 = new TH1D("07778131dce94ad5b8918c54c19a7433","Charge mis-id",1,0,300);
   07778131dce94ad5b8918c54c19a7433->SetBinContent(1,0.05047601);
   07778131dce94ad5b8918c54c19a7433->SetBinError(1,0.01272007);
   07778131dce94ad5b8918c54c19a7433->SetEntries(15.74676);

   ci = TColor::GetColor("#9999cc");
   07778131dce94ad5b8918c54c19a7433->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   07778131dce94ad5b8918c54c19a7433->SetLineColor(ci);
   07778131dce94ad5b8918c54c19a7433->SetMarkerStyle(20);
   07778131dce94ad5b8918c54c19a7433->GetXaxis()->SetLabelFont(42);
   07778131dce94ad5b8918c54c19a7433->GetXaxis()->SetLabelSize(0.035);
   07778131dce94ad5b8918c54c19a7433->GetXaxis()->SetTitleSize(0.035);
   07778131dce94ad5b8918c54c19a7433->GetXaxis()->SetTitleFont(42);
   07778131dce94ad5b8918c54c19a7433->GetYaxis()->SetLabelFont(42);
   07778131dce94ad5b8918c54c19a7433->GetYaxis()->SetLabelSize(0.035);
   07778131dce94ad5b8918c54c19a7433->GetYaxis()->SetTitleSize(0.035);
   07778131dce94ad5b8918c54c19a7433->GetYaxis()->SetTitleFont(42);
   07778131dce94ad5b8918c54c19a7433->GetZaxis()->SetLabelFont(42);
   07778131dce94ad5b8918c54c19a7433->GetZaxis()->SetLabelSize(0.035);
   07778131dce94ad5b8918c54c19a7433->GetZaxis()->SetTitleSize(0.035);
   07778131dce94ad5b8918c54c19a7433->GetZaxis()->SetTitleFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->Add(07778131dce94ad5b8918c54c19a7433,"hist");
   
   TH1D *a1df1414865644f196ff28782013d7fc = new TH1D("a1df1414865644f196ff28782013d7fc","WZ#rightarrowl#tau#tau",1,0,300);
   a1df1414865644f196ff28782013d7fc->SetBinContent(1,0.03467328);
   a1df1414865644f196ff28782013d7fc->SetBinError(1,0.01548565);
   a1df1414865644f196ff28782013d7fc->SetEntries(5.013385);

   ci = TColor::GetColor("#268bd2");
   a1df1414865644f196ff28782013d7fc->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   a1df1414865644f196ff28782013d7fc->SetLineColor(ci);
   a1df1414865644f196ff28782013d7fc->GetXaxis()->SetLabelFont(42);
   a1df1414865644f196ff28782013d7fc->GetXaxis()->SetLabelSize(0.035);
   a1df1414865644f196ff28782013d7fc->GetXaxis()->SetTitleSize(0.035);
   a1df1414865644f196ff28782013d7fc->GetXaxis()->SetTitleFont(42);
   a1df1414865644f196ff28782013d7fc->GetYaxis()->SetLabelFont(42);
   a1df1414865644f196ff28782013d7fc->GetYaxis()->SetLabelSize(0.035);
   a1df1414865644f196ff28782013d7fc->GetYaxis()->SetTitleSize(0.035);
   a1df1414865644f196ff28782013d7fc->GetYaxis()->SetTitleFont(42);
   a1df1414865644f196ff28782013d7fc->GetZaxis()->SetLabelFont(42);
   a1df1414865644f196ff28782013d7fc->GetZaxis()->SetLabelSize(0.035);
   a1df1414865644f196ff28782013d7fc->GetZaxis()->SetTitleSize(0.035);
   a1df1414865644f196ff28782013d7fc->GetZaxis()->SetTitleFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->Add(a1df1414865644f196ff28782013d7fc,"hist");
   
   TH1D *de9ecdb042e049b4851012f210e87b54 = new TH1D("de9ecdb042e049b4851012f210e87b54","Reducible bkg.",1,0,300);
   de9ecdb042e049b4851012f210e87b54->SetBinContent(0,1e-05);
   de9ecdb042e049b4851012f210e87b54->SetBinContent(1,0.1472762);
   de9ecdb042e049b4851012f210e87b54->SetBinContent(2,1e-05);
   de9ecdb042e049b4851012f210e87b54->SetBinError(0,0.005809401);
   de9ecdb042e049b4851012f210e87b54->SetBinError(1,0.05177403);
   de9ecdb042e049b4851012f210e87b54->SetBinError(2,0.005809401);
   de9ecdb042e049b4851012f210e87b54->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   de9ecdb042e049b4851012f210e87b54->SetFillColor(ci);
   de9ecdb042e049b4851012f210e87b54->SetMarkerStyle(20);
   de9ecdb042e049b4851012f210e87b54->GetXaxis()->SetLabelFont(42);
   de9ecdb042e049b4851012f210e87b54->GetXaxis()->SetLabelSize(0.035);
   de9ecdb042e049b4851012f210e87b54->GetXaxis()->SetTitleSize(0.035);
   de9ecdb042e049b4851012f210e87b54->GetXaxis()->SetTitleFont(42);
   de9ecdb042e049b4851012f210e87b54->GetYaxis()->SetLabelFont(42);
   de9ecdb042e049b4851012f210e87b54->GetYaxis()->SetLabelSize(0.035);
   de9ecdb042e049b4851012f210e87b54->GetYaxis()->SetTitleSize(0.035);
   de9ecdb042e049b4851012f210e87b54->GetYaxis()->SetTitleFont(42);
   de9ecdb042e049b4851012f210e87b54->GetZaxis()->SetLabelFont(42);
   de9ecdb042e049b4851012f210e87b54->GetZaxis()->SetLabelSize(0.035);
   de9ecdb042e049b4851012f210e87b54->GetZaxis()->SetTitleSize(0.035);
   de9ecdb042e049b4851012f210e87b54->GetZaxis()->SetTitleFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->Add(de9ecdb042e049b4851012f210e87b54,"hist");
   
   TH1D *f88e0497f3f94ecfb16d2cbe9934b1e7 = new TH1D("f88e0497f3f94ecfb16d2cbe9934b1e7","VH H#rightarrowWW",1,0,300);
   f88e0497f3f94ecfb16d2cbe9934b1e7->SetBinContent(1,0.0003692091);
   f88e0497f3f94ecfb16d2cbe9934b1e7->SetBinError(1,0.0002186415);
   f88e0497f3f94ecfb16d2cbe9934b1e7->SetEntries(2.85154);

   ci = TColor::GetColor("#cb4b16");
   f88e0497f3f94ecfb16d2cbe9934b1e7->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   f88e0497f3f94ecfb16d2cbe9934b1e7->SetLineColor(ci);
   f88e0497f3f94ecfb16d2cbe9934b1e7->GetXaxis()->SetLabelFont(42);
   f88e0497f3f94ecfb16d2cbe9934b1e7->GetXaxis()->SetLabelSize(0.035);
   f88e0497f3f94ecfb16d2cbe9934b1e7->GetXaxis()->SetTitleSize(0.035);
   f88e0497f3f94ecfb16d2cbe9934b1e7->GetXaxis()->SetTitleFont(42);
   f88e0497f3f94ecfb16d2cbe9934b1e7->GetYaxis()->SetLabelFont(42);
   f88e0497f3f94ecfb16d2cbe9934b1e7->GetYaxis()->SetLabelSize(0.035);
   f88e0497f3f94ecfb16d2cbe9934b1e7->GetYaxis()->SetTitleSize(0.035);
   f88e0497f3f94ecfb16d2cbe9934b1e7->GetYaxis()->SetTitleFont(42);
   f88e0497f3f94ecfb16d2cbe9934b1e7->GetZaxis()->SetLabelFont(42);
   f88e0497f3f94ecfb16d2cbe9934b1e7->GetZaxis()->SetLabelSize(0.035);
   f88e0497f3f94ecfb16d2cbe9934b1e7->GetZaxis()->SetTitleSize(0.035);
   f88e0497f3f94ecfb16d2cbe9934b1e7->GetZaxis()->SetTitleFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->Add(f88e0497f3f94ecfb16d2cbe9934b1e7,"hist");
   
   TH1D *fbc3c262e0e94bb49891399f0adc6dc9 = new TH1D("fbc3c262e0e94bb49891399f0adc6dc9","(1#times) m_{H} = 125",1,0,300);
   fbc3c262e0e94bb49891399f0adc6dc9->SetBinContent(1,0.001358079);
   fbc3c262e0e94bb49891399f0adc6dc9->SetBinError(1,0.001236926);
   fbc3c262e0e94bb49891399f0adc6dc9->SetEntries(1.205487);
   fbc3c262e0e94bb49891399f0adc6dc9->SetFillColor(1);
   fbc3c262e0e94bb49891399f0adc6dc9->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   fbc3c262e0e94bb49891399f0adc6dc9->SetLineColor(ci);
   fbc3c262e0e94bb49891399f0adc6dc9->SetLineStyle(2);
   fbc3c262e0e94bb49891399f0adc6dc9->SetLineWidth(4);
   fbc3c262e0e94bb49891399f0adc6dc9->GetXaxis()->SetLabelFont(42);
   fbc3c262e0e94bb49891399f0adc6dc9->GetXaxis()->SetLabelSize(0.035);
   fbc3c262e0e94bb49891399f0adc6dc9->GetXaxis()->SetTitleSize(0.035);
   fbc3c262e0e94bb49891399f0adc6dc9->GetXaxis()->SetTitleFont(42);
   fbc3c262e0e94bb49891399f0adc6dc9->GetYaxis()->SetLabelFont(42);
   fbc3c262e0e94bb49891399f0adc6dc9->GetYaxis()->SetLabelSize(0.035);
   fbc3c262e0e94bb49891399f0adc6dc9->GetYaxis()->SetTitleSize(0.035);
   fbc3c262e0e94bb49891399f0adc6dc9->GetYaxis()->SetTitleFont(42);
   fbc3c262e0e94bb49891399f0adc6dc9->GetZaxis()->SetLabelFont(42);
   fbc3c262e0e94bb49891399f0adc6dc9->GetZaxis()->SetLabelSize(0.035);
   fbc3c262e0e94bb49891399f0adc6dc9->GetZaxis()->SetTitleSize(0.035);
   fbc3c262e0e94bb49891399f0adc6dc9->GetZaxis()->SetTitleFont(42);
   52b04fcbcd79467fb45c96ad900fb1f5->Add(fbc3c262e0e94bb49891399f0adc6dc9,"hist");
   52b04fcbcd79467fb45c96ad900fb1f5->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("52b04fcbcd79467fb45c96ad900fb1f5","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("38b83febefb84dbd887b896bcd02c212","ZZ","f");

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
   entry=leg->AddEntry("07778131dce94ad5b8918c54c19a7433","Charge mis-id","f");

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
   entry=leg->AddEntry("a1df1414865644f196ff28782013d7fc","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("de9ecdb042e049b4851012f210e87b54","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f88e0497f3f94ecfb16d2cbe9934b1e7","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("fbc3c262e0e94bb49891399f0adc6dc9","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("74548a555fff4a088131433df00971a5","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_8106b9fc0f4242c7b4b31ab2009962c1","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *74548a555fff4a088131433df00971a5 = new TH1D("74548a555fff4a088131433df00971a5","Bkg. Unc.",1,0,300);
   74548a555fff4a088131433df00971a5->SetBinContent(1,0.3385861);
   74548a555fff4a088131433df00971a5->SetBinError(1,0.1483783);
   74548a555fff4a088131433df00971a5->SetEntries(1);
   74548a555fff4a088131433df00971a5->SetFillColor(1);
   74548a555fff4a088131433df00971a5->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   74548a555fff4a088131433df00971a5->SetLineColor(ci);
   74548a555fff4a088131433df00971a5->SetMarkerSize(0);
   74548a555fff4a088131433df00971a5->GetXaxis()->SetLabelFont(42);
   74548a555fff4a088131433df00971a5->GetXaxis()->SetLabelSize(0.035);
   74548a555fff4a088131433df00971a5->GetXaxis()->SetTitleSize(0.035);
   74548a555fff4a088131433df00971a5->GetXaxis()->SetTitleFont(42);
   74548a555fff4a088131433df00971a5->GetYaxis()->SetLabelFont(42);
   74548a555fff4a088131433df00971a5->GetYaxis()->SetLabelSize(0.035);
   74548a555fff4a088131433df00971a5->GetYaxis()->SetTitleSize(0.035);
   74548a555fff4a088131433df00971a5->GetYaxis()->SetTitleFont(42);
   74548a555fff4a088131433df00971a5->GetZaxis()->SetLabelFont(42);
   74548a555fff4a088131433df00971a5->GetZaxis()->SetLabelSize(0.035);
   74548a555fff4a088131433df00971a5->GetZaxis()->SetTitleSize(0.035);
   74548a555fff4a088131433df00971a5->GetZaxis()->SetTitleFont(42);
   74548a555fff4a088131433df00971a5->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_8106b9fc0f4242c7b4b31ab2009962c1");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,2);
   grae->SetPointError(0,0,0,1.29183,2.63791);
   
   TH1F *Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18 = new TH1F("Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18","Observed",100,149.9,151.1);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->SetMinimum(0.3151964);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->SetMaximum(5.030884);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->SetDirectory(0);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->SetLineColor(ci);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_8106b9fc0f4242c7b4b31ab2009962c18);
   
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
   entry=leg->AddEntry("52b04fcbcd79467fb45c96ad900fb1f5","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("38b83febefb84dbd887b896bcd02c212","ZZ","f");

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
   entry=leg->AddEntry("07778131dce94ad5b8918c54c19a7433","Charge mis-id","f");

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
   entry=leg->AddEntry("a1df1414865644f196ff28782013d7fc","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("de9ecdb042e049b4851012f210e87b54","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f88e0497f3f94ecfb16d2cbe9934b1e7","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("fbc3c262e0e94bb49891399f0adc6dc9","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("74548a555fff4a088131433df00971a5","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_8106b9fc0f4242c7b4b31ab2009962c1","Observed","P");
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
