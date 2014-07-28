{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 03:52:28 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-1.261314,337.5,11.35183);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *49d5420f85c744b3811d0928fca2784b = new THStack();
   49d5420f85c744b3811d0928fca2784b->SetName("49d5420f85c744b3811d0928fca2784b");
   49d5420f85c744b3811d0928fca2784b->SetTitle("WZ#rightarrow3l");
   49d5420f85c744b3811d0928fca2784b->SetMaximum(9.610012);
   
   TH1F *49d5420f85c744b3811d0928fca2784b_stack_1 = new TH1F("49d5420f85c744b3811d0928fca2784b_stack_1","WZ#rightarrow3l",1,0,300);
   49d5420f85c744b3811d0928fca2784b_stack_1->SetMinimum(0);
   49d5420f85c744b3811d0928fca2784b_stack_1->SetMaximum(10.09051);
   49d5420f85c744b3811d0928fca2784b_stack_1->SetDirectory(0);
   49d5420f85c744b3811d0928fca2784b_stack_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   49d5420f85c744b3811d0928fca2784b_stack_1->SetLineColor(ci);
   49d5420f85c744b3811d0928fca2784b_stack_1->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   49d5420f85c744b3811d0928fca2784b_stack_1->GetXaxis()->SetLabelFont(42);
   49d5420f85c744b3811d0928fca2784b_stack_1->GetXaxis()->SetLabelSize(0.035);
   49d5420f85c744b3811d0928fca2784b_stack_1->GetXaxis()->SetTitleSize(0.035);
   49d5420f85c744b3811d0928fca2784b_stack_1->GetXaxis()->SetTitleFont(42);
   49d5420f85c744b3811d0928fca2784b_stack_1->GetYaxis()->SetTitle("Events");
   49d5420f85c744b3811d0928fca2784b_stack_1->GetYaxis()->SetLabelFont(42);
   49d5420f85c744b3811d0928fca2784b_stack_1->GetYaxis()->SetLabelSize(0.035);
   49d5420f85c744b3811d0928fca2784b_stack_1->GetYaxis()->SetTitleSize(0.035);
   49d5420f85c744b3811d0928fca2784b_stack_1->GetYaxis()->SetTitleFont(42);
   49d5420f85c744b3811d0928fca2784b_stack_1->GetZaxis()->SetLabelFont(42);
   49d5420f85c744b3811d0928fca2784b_stack_1->GetZaxis()->SetLabelSize(0.035);
   49d5420f85c744b3811d0928fca2784b_stack_1->GetZaxis()->SetTitleSize(0.035);
   49d5420f85c744b3811d0928fca2784b_stack_1->GetZaxis()->SetTitleFont(42);
   49d5420f85c744b3811d0928fca2784b->SetHistogram(49d5420f85c744b3811d0928fca2784b_stack_1);
   
   
   TH1D *49d5420f85c744b3811d0928fca2784b = new TH1D("49d5420f85c744b3811d0928fca2784b","WZ#rightarrow3l",1,0,300);
   49d5420f85c744b3811d0928fca2784b->SetBinContent(1,0.5499664);
   49d5420f85c744b3811d0928fca2784b->SetBinError(1,0.060241);
   49d5420f85c744b3811d0928fca2784b->SetEntries(83.34664);

   ci = TColor::GetColor("#dc322f");
   49d5420f85c744b3811d0928fca2784b->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   49d5420f85c744b3811d0928fca2784b->SetLineColor(ci);
   49d5420f85c744b3811d0928fca2784b->GetXaxis()->SetLabelFont(42);
   49d5420f85c744b3811d0928fca2784b->GetXaxis()->SetLabelSize(0.035);
   49d5420f85c744b3811d0928fca2784b->GetXaxis()->SetTitleSize(0.035);
   49d5420f85c744b3811d0928fca2784b->GetXaxis()->SetTitleFont(42);
   49d5420f85c744b3811d0928fca2784b->GetYaxis()->SetLabelFont(42);
   49d5420f85c744b3811d0928fca2784b->GetYaxis()->SetLabelSize(0.035);
   49d5420f85c744b3811d0928fca2784b->GetYaxis()->SetTitleSize(0.035);
   49d5420f85c744b3811d0928fca2784b->GetYaxis()->SetTitleFont(42);
   49d5420f85c744b3811d0928fca2784b->GetZaxis()->SetLabelFont(42);
   49d5420f85c744b3811d0928fca2784b->GetZaxis()->SetLabelSize(0.035);
   49d5420f85c744b3811d0928fca2784b->GetZaxis()->SetTitleSize(0.035);
   49d5420f85c744b3811d0928fca2784b->GetZaxis()->SetTitleFont(42);
   49d5420f85c744b3811d0928fca2784b->Add(49d5420f85c744b3811d0928fca2784b,"hist");
   
   TH1D *47d0ef7105a14833b3d6b3c5a1bb51f3 = new TH1D("47d0ef7105a14833b3d6b3c5a1bb51f3","ZZ",1,0,300);
   47d0ef7105a14833b3d6b3c5a1bb51f3->SetBinContent(1,0.8529601);
   47d0ef7105a14833b3d6b3c5a1bb51f3->SetBinError(1,0.0258438);
   47d0ef7105a14833b3d6b3c5a1bb51f3->SetEntries(1089.293);

   ci = TColor::GetColor("#50a634");
   47d0ef7105a14833b3d6b3c5a1bb51f3->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   47d0ef7105a14833b3d6b3c5a1bb51f3->SetLineColor(ci);
   47d0ef7105a14833b3d6b3c5a1bb51f3->GetXaxis()->SetLabelFont(42);
   47d0ef7105a14833b3d6b3c5a1bb51f3->GetXaxis()->SetLabelSize(0.035);
   47d0ef7105a14833b3d6b3c5a1bb51f3->GetXaxis()->SetTitleSize(0.035);
   47d0ef7105a14833b3d6b3c5a1bb51f3->GetXaxis()->SetTitleFont(42);
   47d0ef7105a14833b3d6b3c5a1bb51f3->GetYaxis()->SetLabelFont(42);
   47d0ef7105a14833b3d6b3c5a1bb51f3->GetYaxis()->SetLabelSize(0.035);
   47d0ef7105a14833b3d6b3c5a1bb51f3->GetYaxis()->SetTitleSize(0.035);
   47d0ef7105a14833b3d6b3c5a1bb51f3->GetYaxis()->SetTitleFont(42);
   47d0ef7105a14833b3d6b3c5a1bb51f3->GetZaxis()->SetLabelFont(42);
   47d0ef7105a14833b3d6b3c5a1bb51f3->GetZaxis()->SetLabelSize(0.035);
   47d0ef7105a14833b3d6b3c5a1bb51f3->GetZaxis()->SetTitleSize(0.035);
   47d0ef7105a14833b3d6b3c5a1bb51f3->GetZaxis()->SetTitleFont(42);
   49d5420f85c744b3811d0928fca2784b->Add(47d0ef7105a14833b3d6b3c5a1bb51f3,"hist");
   
   TH1D *b52c03275d45494db94bfb91dbcdb078 = new TH1D("b52c03275d45494db94bfb91dbcdb078","Charge mis-id",1,0,300);
   b52c03275d45494db94bfb91dbcdb078->SetBinContent(1,0.05394652);
   b52c03275d45494db94bfb91dbcdb078->SetBinError(1,0.01171796);
   b52c03275d45494db94bfb91dbcdb078->SetEntries(21.19449);

   ci = TColor::GetColor("#9999cc");
   b52c03275d45494db94bfb91dbcdb078->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   b52c03275d45494db94bfb91dbcdb078->SetLineColor(ci);
   b52c03275d45494db94bfb91dbcdb078->SetMarkerStyle(20);
   b52c03275d45494db94bfb91dbcdb078->GetXaxis()->SetLabelFont(42);
   b52c03275d45494db94bfb91dbcdb078->GetXaxis()->SetLabelSize(0.035);
   b52c03275d45494db94bfb91dbcdb078->GetXaxis()->SetTitleSize(0.035);
   b52c03275d45494db94bfb91dbcdb078->GetXaxis()->SetTitleFont(42);
   b52c03275d45494db94bfb91dbcdb078->GetYaxis()->SetLabelFont(42);
   b52c03275d45494db94bfb91dbcdb078->GetYaxis()->SetLabelSize(0.035);
   b52c03275d45494db94bfb91dbcdb078->GetYaxis()->SetTitleSize(0.035);
   b52c03275d45494db94bfb91dbcdb078->GetYaxis()->SetTitleFont(42);
   b52c03275d45494db94bfb91dbcdb078->GetZaxis()->SetLabelFont(42);
   b52c03275d45494db94bfb91dbcdb078->GetZaxis()->SetLabelSize(0.035);
   b52c03275d45494db94bfb91dbcdb078->GetZaxis()->SetTitleSize(0.035);
   b52c03275d45494db94bfb91dbcdb078->GetZaxis()->SetTitleFont(42);
   49d5420f85c744b3811d0928fca2784b->Add(b52c03275d45494db94bfb91dbcdb078,"hist");
   
   TH1D *781fbc6d80c34d08af7ae4e8fddb0e8d = new TH1D("781fbc6d80c34d08af7ae4e8fddb0e8d","WZ#rightarrowl#tau#tau",1,0,300);
   781fbc6d80c34d08af7ae4e8fddb0e8d->SetBinContent(1,4.142008);
   781fbc6d80c34d08af7ae4e8fddb0e8d->SetBinError(1,0.1649386);
   781fbc6d80c34d08af7ae4e8fddb0e8d->SetEntries(630.6338);

   ci = TColor::GetColor("#268bd2");
   781fbc6d80c34d08af7ae4e8fddb0e8d->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   781fbc6d80c34d08af7ae4e8fddb0e8d->SetLineColor(ci);
   781fbc6d80c34d08af7ae4e8fddb0e8d->GetXaxis()->SetLabelFont(42);
   781fbc6d80c34d08af7ae4e8fddb0e8d->GetXaxis()->SetLabelSize(0.035);
   781fbc6d80c34d08af7ae4e8fddb0e8d->GetXaxis()->SetTitleSize(0.035);
   781fbc6d80c34d08af7ae4e8fddb0e8d->GetXaxis()->SetTitleFont(42);
   781fbc6d80c34d08af7ae4e8fddb0e8d->GetYaxis()->SetLabelFont(42);
   781fbc6d80c34d08af7ae4e8fddb0e8d->GetYaxis()->SetLabelSize(0.035);
   781fbc6d80c34d08af7ae4e8fddb0e8d->GetYaxis()->SetTitleSize(0.035);
   781fbc6d80c34d08af7ae4e8fddb0e8d->GetYaxis()->SetTitleFont(42);
   781fbc6d80c34d08af7ae4e8fddb0e8d->GetZaxis()->SetLabelFont(42);
   781fbc6d80c34d08af7ae4e8fddb0e8d->GetZaxis()->SetLabelSize(0.035);
   781fbc6d80c34d08af7ae4e8fddb0e8d->GetZaxis()->SetTitleSize(0.035);
   781fbc6d80c34d08af7ae4e8fddb0e8d->GetZaxis()->SetTitleFont(42);
   49d5420f85c744b3811d0928fca2784b->Add(781fbc6d80c34d08af7ae4e8fddb0e8d,"hist");
   
   TH1D *a782cfe3d7594393a8a7a422527d99da = new TH1D("a782cfe3d7594393a8a7a422527d99da","Reducible bkg.",1,0,300);
   a782cfe3d7594393a8a7a422527d99da->SetBinContent(0,1e-05);
   a782cfe3d7594393a8a7a422527d99da->SetBinContent(1,1.858343);
   a782cfe3d7594393a8a7a422527d99da->SetBinContent(2,1e-05);
   a782cfe3d7594393a8a7a422527d99da->SetBinError(0,0.008839936);
   a782cfe3d7594393a8a7a422527d99da->SetBinError(1,0.5321119);
   a782cfe3d7594393a8a7a422527d99da->SetBinError(2,0.008839936);
   a782cfe3d7594393a8a7a422527d99da->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   a782cfe3d7594393a8a7a422527d99da->SetFillColor(ci);
   a782cfe3d7594393a8a7a422527d99da->SetMarkerStyle(20);
   a782cfe3d7594393a8a7a422527d99da->GetXaxis()->SetLabelFont(42);
   a782cfe3d7594393a8a7a422527d99da->GetXaxis()->SetLabelSize(0.035);
   a782cfe3d7594393a8a7a422527d99da->GetXaxis()->SetTitleSize(0.035);
   a782cfe3d7594393a8a7a422527d99da->GetXaxis()->SetTitleFont(42);
   a782cfe3d7594393a8a7a422527d99da->GetYaxis()->SetLabelFont(42);
   a782cfe3d7594393a8a7a422527d99da->GetYaxis()->SetLabelSize(0.035);
   a782cfe3d7594393a8a7a422527d99da->GetYaxis()->SetTitleSize(0.035);
   a782cfe3d7594393a8a7a422527d99da->GetYaxis()->SetTitleFont(42);
   a782cfe3d7594393a8a7a422527d99da->GetZaxis()->SetLabelFont(42);
   a782cfe3d7594393a8a7a422527d99da->GetZaxis()->SetLabelSize(0.035);
   a782cfe3d7594393a8a7a422527d99da->GetZaxis()->SetTitleSize(0.035);
   a782cfe3d7594393a8a7a422527d99da->GetZaxis()->SetTitleFont(42);
   49d5420f85c744b3811d0928fca2784b->Add(a782cfe3d7594393a8a7a422527d99da,"hist");
   
   TH1D *f09e4bb00c3343b285a874c41fc4c622 = new TH1D("f09e4bb00c3343b285a874c41fc4c622","VH H#rightarrowWW",1,0,300);
   f09e4bb00c3343b285a874c41fc4c622->SetBinContent(1,0.03515544);
   f09e4bb00c3343b285a874c41fc4c622->SetBinError(1,0.002229644);
   f09e4bb00c3343b285a874c41fc4c622->SetEntries(248.6074);

   ci = TColor::GetColor("#cb4b16");
   f09e4bb00c3343b285a874c41fc4c622->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   f09e4bb00c3343b285a874c41fc4c622->SetLineColor(ci);
   f09e4bb00c3343b285a874c41fc4c622->GetXaxis()->SetLabelFont(42);
   f09e4bb00c3343b285a874c41fc4c622->GetXaxis()->SetLabelSize(0.035);
   f09e4bb00c3343b285a874c41fc4c622->GetXaxis()->SetTitleSize(0.035);
   f09e4bb00c3343b285a874c41fc4c622->GetXaxis()->SetTitleFont(42);
   f09e4bb00c3343b285a874c41fc4c622->GetYaxis()->SetLabelFont(42);
   f09e4bb00c3343b285a874c41fc4c622->GetYaxis()->SetLabelSize(0.035);
   f09e4bb00c3343b285a874c41fc4c622->GetYaxis()->SetTitleSize(0.035);
   f09e4bb00c3343b285a874c41fc4c622->GetYaxis()->SetTitleFont(42);
   f09e4bb00c3343b285a874c41fc4c622->GetZaxis()->SetLabelFont(42);
   f09e4bb00c3343b285a874c41fc4c622->GetZaxis()->SetLabelSize(0.035);
   f09e4bb00c3343b285a874c41fc4c622->GetZaxis()->SetTitleSize(0.035);
   f09e4bb00c3343b285a874c41fc4c622->GetZaxis()->SetTitleFont(42);
   49d5420f85c744b3811d0928fca2784b->Add(f09e4bb00c3343b285a874c41fc4c622,"hist");
   
   TH1D *13fb04e7212149208a022c243cef86ab = new TH1D("13fb04e7212149208a022c243cef86ab","(1#times) m_{H} = 125",1,0,300);
   13fb04e7212149208a022c243cef86ab->SetBinContent(1,0.5159635);
   13fb04e7212149208a022c243cef86ab->SetBinContent(2,0.001127858);
   13fb04e7212149208a022c243cef86ab->SetBinError(1,0.0238625);
   13fb04e7212149208a022c243cef86ab->SetBinError(2,0.001127858);
   13fb04e7212149208a022c243cef86ab->SetEntries(467.5261);
   13fb04e7212149208a022c243cef86ab->SetFillColor(1);
   13fb04e7212149208a022c243cef86ab->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   13fb04e7212149208a022c243cef86ab->SetLineColor(ci);
   13fb04e7212149208a022c243cef86ab->SetLineStyle(2);
   13fb04e7212149208a022c243cef86ab->SetLineWidth(4);
   13fb04e7212149208a022c243cef86ab->GetXaxis()->SetLabelFont(42);
   13fb04e7212149208a022c243cef86ab->GetXaxis()->SetLabelSize(0.035);
   13fb04e7212149208a022c243cef86ab->GetXaxis()->SetTitleSize(0.035);
   13fb04e7212149208a022c243cef86ab->GetXaxis()->SetTitleFont(42);
   13fb04e7212149208a022c243cef86ab->GetYaxis()->SetLabelFont(42);
   13fb04e7212149208a022c243cef86ab->GetYaxis()->SetLabelSize(0.035);
   13fb04e7212149208a022c243cef86ab->GetYaxis()->SetTitleSize(0.035);
   13fb04e7212149208a022c243cef86ab->GetYaxis()->SetTitleFont(42);
   13fb04e7212149208a022c243cef86ab->GetZaxis()->SetLabelFont(42);
   13fb04e7212149208a022c243cef86ab->GetZaxis()->SetLabelSize(0.035);
   13fb04e7212149208a022c243cef86ab->GetZaxis()->SetTitleSize(0.035);
   13fb04e7212149208a022c243cef86ab->GetZaxis()->SetTitleFont(42);
   49d5420f85c744b3811d0928fca2784b->Add(13fb04e7212149208a022c243cef86ab,"hist");
   49d5420f85c744b3811d0928fca2784b->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("49d5420f85c744b3811d0928fca2784b","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("47d0ef7105a14833b3d6b3c5a1bb51f3","ZZ","f");

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
   entry=leg->AddEntry("b52c03275d45494db94bfb91dbcdb078","Charge mis-id","f");

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
   entry=leg->AddEntry("781fbc6d80c34d08af7ae4e8fddb0e8d","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("a782cfe3d7594393a8a7a422527d99da","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f09e4bb00c3343b285a874c41fc4c622","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("13fb04e7212149208a022c243cef86ab","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("99f6af094c05498496b04bbe0f790746","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_279491b8a2194ab2bba33cbf59934bfe","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *99f6af094c05498496b04bbe0f790746 = new TH1D("99f6af094c05498496b04bbe0f790746","Bkg. Unc.",1,0,300);
   99f6af094c05498496b04bbe0f790746->SetBinContent(1,7.457225);
   99f6af094c05498496b04bbe0f790746->SetBinError(1,1.690572);
   99f6af094c05498496b04bbe0f790746->SetEntries(1);
   99f6af094c05498496b04bbe0f790746->SetFillColor(1);
   99f6af094c05498496b04bbe0f790746->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   99f6af094c05498496b04bbe0f790746->SetLineColor(ci);
   99f6af094c05498496b04bbe0f790746->SetMarkerSize(0);
   99f6af094c05498496b04bbe0f790746->GetXaxis()->SetLabelFont(42);
   99f6af094c05498496b04bbe0f790746->GetXaxis()->SetLabelSize(0.035);
   99f6af094c05498496b04bbe0f790746->GetXaxis()->SetTitleSize(0.035);
   99f6af094c05498496b04bbe0f790746->GetXaxis()->SetTitleFont(42);
   99f6af094c05498496b04bbe0f790746->GetYaxis()->SetLabelFont(42);
   99f6af094c05498496b04bbe0f790746->GetYaxis()->SetLabelSize(0.035);
   99f6af094c05498496b04bbe0f790746->GetYaxis()->SetTitleSize(0.035);
   99f6af094c05498496b04bbe0f790746->GetYaxis()->SetTitleFont(42);
   99f6af094c05498496b04bbe0f790746->GetZaxis()->SetLabelFont(42);
   99f6af094c05498496b04bbe0f790746->GetZaxis()->SetLabelSize(0.035);
   99f6af094c05498496b04bbe0f790746->GetZaxis()->SetTitleSize(0.035);
   99f6af094c05498496b04bbe0f790746->GetZaxis()->SetTitleFont(42);
   99f6af094c05498496b04bbe0f790746->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_279491b8a2194ab2bba33cbf59934bfe");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,6);
   grae->SetPointError(0,0,0,2.379969,3.583712);
   
   TH1F *Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1 = new TH1F("Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1","Observed",100,149.9,151.1);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->SetMinimum(3.023663);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->SetMaximum(10.18008);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->SetDirectory(0);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->SetLineColor(ci);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_279491b8a2194ab2bba33cbf59934bfe1);
   
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
   entry=leg->AddEntry("49d5420f85c744b3811d0928fca2784b","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("47d0ef7105a14833b3d6b3c5a1bb51f3","ZZ","f");

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
   entry=leg->AddEntry("b52c03275d45494db94bfb91dbcdb078","Charge mis-id","f");

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
   entry=leg->AddEntry("781fbc6d80c34d08af7ae4e8fddb0e8d","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("a782cfe3d7594393a8a7a422527d99da","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f09e4bb00c3343b285a874c41fc4c622","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("13fb04e7212149208a022c243cef86ab","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("99f6af094c05498496b04bbe0f790746","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_279491b8a2194ab2bba33cbf59934bfe","Observed","P");
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
