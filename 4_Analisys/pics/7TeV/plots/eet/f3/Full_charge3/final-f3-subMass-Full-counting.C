{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:02:12 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-13.125,337.5,118.125);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *5887eb7ae57b434db75368571097155e = new THStack();
   5887eb7ae57b434db75368571097155e->SetName("5887eb7ae57b434db75368571097155e");
   5887eb7ae57b434db75368571097155e->SetTitle("ZZ");
   5887eb7ae57b434db75368571097155e->SetMaximum(100);
   
   TH1F *5887eb7ae57b434db75368571097155e_stack_10 = new TH1F("5887eb7ae57b434db75368571097155e_stack_10","ZZ",1,0,300);
   5887eb7ae57b434db75368571097155e_stack_10->SetMinimum(0);
   5887eb7ae57b434db75368571097155e_stack_10->SetMaximum(105);
   5887eb7ae57b434db75368571097155e_stack_10->SetDirectory(0);
   5887eb7ae57b434db75368571097155e_stack_10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   5887eb7ae57b434db75368571097155e_stack_10->SetLineColor(ci);
   5887eb7ae57b434db75368571097155e_stack_10->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   5887eb7ae57b434db75368571097155e_stack_10->GetXaxis()->SetLabelFont(42);
   5887eb7ae57b434db75368571097155e_stack_10->GetXaxis()->SetLabelSize(0.035);
   5887eb7ae57b434db75368571097155e_stack_10->GetXaxis()->SetTitleSize(0.035);
   5887eb7ae57b434db75368571097155e_stack_10->GetXaxis()->SetTitleFont(42);
   5887eb7ae57b434db75368571097155e_stack_10->GetYaxis()->SetTitle("Events");
   5887eb7ae57b434db75368571097155e_stack_10->GetYaxis()->SetLabelFont(42);
   5887eb7ae57b434db75368571097155e_stack_10->GetYaxis()->SetLabelSize(0.035);
   5887eb7ae57b434db75368571097155e_stack_10->GetYaxis()->SetTitleSize(0.035);
   5887eb7ae57b434db75368571097155e_stack_10->GetYaxis()->SetTitleFont(42);
   5887eb7ae57b434db75368571097155e_stack_10->GetZaxis()->SetLabelFont(42);
   5887eb7ae57b434db75368571097155e_stack_10->GetZaxis()->SetLabelSize(0.035);
   5887eb7ae57b434db75368571097155e_stack_10->GetZaxis()->SetTitleSize(0.035);
   5887eb7ae57b434db75368571097155e_stack_10->GetZaxis()->SetTitleFont(42);
   5887eb7ae57b434db75368571097155e->SetHistogram(5887eb7ae57b434db75368571097155e_stack_10);
   
   
   TH1D *5887eb7ae57b434db75368571097155e = new TH1D("5887eb7ae57b434db75368571097155e","ZZ",1,0,300);
   5887eb7ae57b434db75368571097155e->SetBinContent(1,0.1895474);
   5887eb7ae57b434db75368571097155e->SetBinContent(2,0.00324733);
   5887eb7ae57b434db75368571097155e->SetBinError(1,0.01195198);
   5887eb7ae57b434db75368571097155e->SetBinError(2,0.001624803);
   5887eb7ae57b434db75368571097155e->SetEntries(251.5105);

   ci = TColor::GetColor("#50a634");
   5887eb7ae57b434db75368571097155e->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   5887eb7ae57b434db75368571097155e->SetLineColor(ci);
   5887eb7ae57b434db75368571097155e->GetXaxis()->SetLabelFont(42);
   5887eb7ae57b434db75368571097155e->GetXaxis()->SetLabelSize(0.035);
   5887eb7ae57b434db75368571097155e->GetXaxis()->SetTitleSize(0.035);
   5887eb7ae57b434db75368571097155e->GetXaxis()->SetTitleFont(42);
   5887eb7ae57b434db75368571097155e->GetYaxis()->SetLabelFont(42);
   5887eb7ae57b434db75368571097155e->GetYaxis()->SetLabelSize(0.035);
   5887eb7ae57b434db75368571097155e->GetYaxis()->SetTitleSize(0.035);
   5887eb7ae57b434db75368571097155e->GetYaxis()->SetTitleFont(42);
   5887eb7ae57b434db75368571097155e->GetZaxis()->SetLabelFont(42);
   5887eb7ae57b434db75368571097155e->GetZaxis()->SetLabelSize(0.035);
   5887eb7ae57b434db75368571097155e->GetZaxis()->SetTitleSize(0.035);
   5887eb7ae57b434db75368571097155e->GetZaxis()->SetTitleFont(42);
   5887eb7ae57b434db75368571097155e->Add(5887eb7ae57b434db75368571097155e,"hist");
   
   TH1D *c878baa958db4b6cb37a4169f37b0e90 = new TH1D("c878baa958db4b6cb37a4169f37b0e90","Charge mis-id",1,0,300);
   c878baa958db4b6cb37a4169f37b0e90->SetBinContent(1,15.18687);
   c878baa958db4b6cb37a4169f37b0e90->SetBinContent(2,0.1058829);
   c878baa958db4b6cb37a4169f37b0e90->SetBinError(1,0.1828619);
   c878baa958db4b6cb37a4169f37b0e90->SetBinError(2,0.01713824);
   c878baa958db4b6cb37a4169f37b0e90->SetEntries(6905.448);

   ci = TColor::GetColor("#9999cc");
   c878baa958db4b6cb37a4169f37b0e90->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   c878baa958db4b6cb37a4169f37b0e90->SetLineColor(ci);
   c878baa958db4b6cb37a4169f37b0e90->SetMarkerStyle(20);
   c878baa958db4b6cb37a4169f37b0e90->GetXaxis()->SetLabelFont(42);
   c878baa958db4b6cb37a4169f37b0e90->GetXaxis()->SetLabelSize(0.035);
   c878baa958db4b6cb37a4169f37b0e90->GetXaxis()->SetTitleSize(0.035);
   c878baa958db4b6cb37a4169f37b0e90->GetXaxis()->SetTitleFont(42);
   c878baa958db4b6cb37a4169f37b0e90->GetYaxis()->SetLabelFont(42);
   c878baa958db4b6cb37a4169f37b0e90->GetYaxis()->SetLabelSize(0.035);
   c878baa958db4b6cb37a4169f37b0e90->GetYaxis()->SetTitleSize(0.035);
   c878baa958db4b6cb37a4169f37b0e90->GetYaxis()->SetTitleFont(42);
   c878baa958db4b6cb37a4169f37b0e90->GetZaxis()->SetLabelFont(42);
   c878baa958db4b6cb37a4169f37b0e90->GetZaxis()->SetLabelSize(0.035);
   c878baa958db4b6cb37a4169f37b0e90->GetZaxis()->SetTitleSize(0.035);
   c878baa958db4b6cb37a4169f37b0e90->GetZaxis()->SetTitleFont(42);
   5887eb7ae57b434db75368571097155e->Add(c878baa958db4b6cb37a4169f37b0e90,"hist");
   
   TH1D *4c758f259d2b4174ab8d0e74b975126b = new TH1D("4c758f259d2b4174ab8d0e74b975126b","WZ#rightarrow3l",1,0,300);
   4c758f259d2b4174ab8d0e74b975126b->SetBinContent(1,2.80726);
   4c758f259d2b4174ab8d0e74b975126b->SetBinContent(2,0.02020646);
   4c758f259d2b4174ab8d0e74b975126b->SetBinError(1,0.1354275);
   4c758f259d2b4174ab8d0e74b975126b->SetBinError(2,0.01167588);
   4c758f259d2b4174ab8d0e74b975126b->SetEntries(429.6867);

   ci = TColor::GetColor("#dc322f");
   4c758f259d2b4174ab8d0e74b975126b->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   4c758f259d2b4174ab8d0e74b975126b->SetLineColor(ci);
   4c758f259d2b4174ab8d0e74b975126b->GetXaxis()->SetLabelFont(42);
   4c758f259d2b4174ab8d0e74b975126b->GetXaxis()->SetLabelSize(0.035);
   4c758f259d2b4174ab8d0e74b975126b->GetXaxis()->SetTitleSize(0.035);
   4c758f259d2b4174ab8d0e74b975126b->GetXaxis()->SetTitleFont(42);
   4c758f259d2b4174ab8d0e74b975126b->GetYaxis()->SetLabelFont(42);
   4c758f259d2b4174ab8d0e74b975126b->GetYaxis()->SetLabelSize(0.035);
   4c758f259d2b4174ab8d0e74b975126b->GetYaxis()->SetTitleSize(0.035);
   4c758f259d2b4174ab8d0e74b975126b->GetYaxis()->SetTitleFont(42);
   4c758f259d2b4174ab8d0e74b975126b->GetZaxis()->SetLabelFont(42);
   4c758f259d2b4174ab8d0e74b975126b->GetZaxis()->SetLabelSize(0.035);
   4c758f259d2b4174ab8d0e74b975126b->GetZaxis()->SetTitleSize(0.035);
   4c758f259d2b4174ab8d0e74b975126b->GetZaxis()->SetTitleFont(42);
   5887eb7ae57b434db75368571097155e->Add(4c758f259d2b4174ab8d0e74b975126b,"hist");
   
   TH1D *c2b66a58369f44d085bf149d9e640a44 = new TH1D("c2b66a58369f44d085bf149d9e640a44","WZ#rightarrowl#tau#tau",1,0,300);
   c2b66a58369f44d085bf149d9e640a44->SetBinContent(1,0.8011893);
   c2b66a58369f44d085bf149d9e640a44->SetBinContent(2,0.006992234);
   c2b66a58369f44d085bf149d9e640a44->SetBinError(1,0.07199674);
   c2b66a58369f44d085bf149d9e640a44->SetBinError(2,0.006601791);
   c2b66a58369f44d085bf149d9e640a44->SetEntries(123.8353);

   ci = TColor::GetColor("#268bd2");
   c2b66a58369f44d085bf149d9e640a44->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   c2b66a58369f44d085bf149d9e640a44->SetLineColor(ci);
   c2b66a58369f44d085bf149d9e640a44->GetXaxis()->SetLabelFont(42);
   c2b66a58369f44d085bf149d9e640a44->GetXaxis()->SetLabelSize(0.035);
   c2b66a58369f44d085bf149d9e640a44->GetXaxis()->SetTitleSize(0.035);
   c2b66a58369f44d085bf149d9e640a44->GetXaxis()->SetTitleFont(42);
   c2b66a58369f44d085bf149d9e640a44->GetYaxis()->SetLabelFont(42);
   c2b66a58369f44d085bf149d9e640a44->GetYaxis()->SetLabelSize(0.035);
   c2b66a58369f44d085bf149d9e640a44->GetYaxis()->SetTitleSize(0.035);
   c2b66a58369f44d085bf149d9e640a44->GetYaxis()->SetTitleFont(42);
   c2b66a58369f44d085bf149d9e640a44->GetZaxis()->SetLabelFont(42);
   c2b66a58369f44d085bf149d9e640a44->GetZaxis()->SetLabelSize(0.035);
   c2b66a58369f44d085bf149d9e640a44->GetZaxis()->SetTitleSize(0.035);
   c2b66a58369f44d085bf149d9e640a44->GetZaxis()->SetTitleFont(42);
   5887eb7ae57b434db75368571097155e->Add(c2b66a58369f44d085bf149d9e640a44,"hist");
   
   TH1D *3cf90b782001452bbc5411eb2d93c5fc = new TH1D("3cf90b782001452bbc5411eb2d93c5fc","Reducible bkg.",1,0,300);
   3cf90b782001452bbc5411eb2d93c5fc->SetBinContent(0,1e-05);
   3cf90b782001452bbc5411eb2d93c5fc->SetBinContent(1,26.06906);
   3cf90b782001452bbc5411eb2d93c5fc->SetBinContent(2,0.3787898);
   3cf90b782001452bbc5411eb2d93c5fc->SetBinError(0,0.01288186);
   3cf90b782001452bbc5411eb2d93c5fc->SetBinError(1,1.607667);
   3cf90b782001452bbc5411eb2d93c5fc->SetBinError(2,0.1362076);
   3cf90b782001452bbc5411eb2d93c5fc->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   3cf90b782001452bbc5411eb2d93c5fc->SetFillColor(ci);
   3cf90b782001452bbc5411eb2d93c5fc->SetMarkerStyle(20);
   3cf90b782001452bbc5411eb2d93c5fc->GetXaxis()->SetLabelFont(42);
   3cf90b782001452bbc5411eb2d93c5fc->GetXaxis()->SetLabelSize(0.035);
   3cf90b782001452bbc5411eb2d93c5fc->GetXaxis()->SetTitleSize(0.035);
   3cf90b782001452bbc5411eb2d93c5fc->GetXaxis()->SetTitleFont(42);
   3cf90b782001452bbc5411eb2d93c5fc->GetYaxis()->SetLabelFont(42);
   3cf90b782001452bbc5411eb2d93c5fc->GetYaxis()->SetLabelSize(0.035);
   3cf90b782001452bbc5411eb2d93c5fc->GetYaxis()->SetTitleSize(0.035);
   3cf90b782001452bbc5411eb2d93c5fc->GetYaxis()->SetTitleFont(42);
   3cf90b782001452bbc5411eb2d93c5fc->GetZaxis()->SetLabelFont(42);
   3cf90b782001452bbc5411eb2d93c5fc->GetZaxis()->SetLabelSize(0.035);
   3cf90b782001452bbc5411eb2d93c5fc->GetZaxis()->SetTitleSize(0.035);
   3cf90b782001452bbc5411eb2d93c5fc->GetZaxis()->SetTitleFont(42);
   5887eb7ae57b434db75368571097155e->Add(3cf90b782001452bbc5411eb2d93c5fc,"hist");
   5887eb7ae57b434db75368571097155e->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("5887eb7ae57b434db75368571097155e","ZZ","f");

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
   entry=leg->AddEntry("c878baa958db4b6cb37a4169f37b0e90","Charge mis-id","f");

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
   entry=leg->AddEntry("4c758f259d2b4174ab8d0e74b975126b","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("c2b66a58369f44d085bf149d9e640a44","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("3cf90b782001452bbc5411eb2d93c5fc","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2ef5b59a88044d0799873a8764cc091a","Bkg. Unc.","f");
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
   
   TH1D *2ef5b59a88044d0799873a8764cc091a = new TH1D("2ef5b59a88044d0799873a8764cc091a","Bkg. Unc.",1,0,300);
   2ef5b59a88044d0799873a8764cc091a->SetBinContent(1,45.05393);
   2ef5b59a88044d0799873a8764cc091a->SetBinError(1,2.125121);
   2ef5b59a88044d0799873a8764cc091a->SetEntries(1);
   2ef5b59a88044d0799873a8764cc091a->SetFillColor(1);
   2ef5b59a88044d0799873a8764cc091a->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   2ef5b59a88044d0799873a8764cc091a->SetLineColor(ci);
   2ef5b59a88044d0799873a8764cc091a->SetMarkerSize(0);
   2ef5b59a88044d0799873a8764cc091a->GetXaxis()->SetLabelFont(42);
   2ef5b59a88044d0799873a8764cc091a->GetXaxis()->SetLabelSize(0.035);
   2ef5b59a88044d0799873a8764cc091a->GetXaxis()->SetTitleSize(0.035);
   2ef5b59a88044d0799873a8764cc091a->GetXaxis()->SetTitleFont(42);
   2ef5b59a88044d0799873a8764cc091a->GetYaxis()->SetLabelFont(42);
   2ef5b59a88044d0799873a8764cc091a->GetYaxis()->SetLabelSize(0.035);
   2ef5b59a88044d0799873a8764cc091a->GetYaxis()->SetTitleSize(0.035);
   2ef5b59a88044d0799873a8764cc091a->GetYaxis()->SetTitleFont(42);
   2ef5b59a88044d0799873a8764cc091a->GetZaxis()->SetLabelFont(42);
   2ef5b59a88044d0799873a8764cc091a->GetZaxis()->SetLabelSize(0.035);
   2ef5b59a88044d0799873a8764cc091a->GetZaxis()->SetTitleSize(0.035);
   2ef5b59a88044d0799873a8764cc091a->GetZaxis()->SetTitleFont(42);
   2ef5b59a88044d0799873a8764cc091a->Draw("hist pe2,same");
   
   TH1D *2040189f17b04b95955a6ab53ef080cf = new TH1D("2040189f17b04b95955a6ab53ef080cf","Observed",1,0,300);
   2040189f17b04b95955a6ab53ef080cf->SetBinContent(1,50);
   2040189f17b04b95955a6ab53ef080cf->SetBinError(1,7.071068);
   2040189f17b04b95955a6ab53ef080cf->SetEntries(50);
   2040189f17b04b95955a6ab53ef080cf->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   2040189f17b04b95955a6ab53ef080cf->SetLineColor(ci);
   2040189f17b04b95955a6ab53ef080cf->SetMarkerStyle(20);
   2040189f17b04b95955a6ab53ef080cf->GetXaxis()->SetLabelFont(42);
   2040189f17b04b95955a6ab53ef080cf->GetXaxis()->SetLabelSize(0.035);
   2040189f17b04b95955a6ab53ef080cf->GetXaxis()->SetTitleSize(0.035);
   2040189f17b04b95955a6ab53ef080cf->GetXaxis()->SetTitleFont(42);
   2040189f17b04b95955a6ab53ef080cf->GetYaxis()->SetLabelFont(42);
   2040189f17b04b95955a6ab53ef080cf->GetYaxis()->SetLabelSize(0.035);
   2040189f17b04b95955a6ab53ef080cf->GetYaxis()->SetTitleSize(0.035);
   2040189f17b04b95955a6ab53ef080cf->GetYaxis()->SetTitleFont(42);
   2040189f17b04b95955a6ab53ef080cf->GetZaxis()->SetLabelFont(42);
   2040189f17b04b95955a6ab53ef080cf->GetZaxis()->SetLabelSize(0.035);
   2040189f17b04b95955a6ab53ef080cf->GetZaxis()->SetTitleSize(0.035);
   2040189f17b04b95955a6ab53ef080cf->GetZaxis()->SetTitleFont(42);
   2040189f17b04b95955a6ab53ef080cf->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("5887eb7ae57b434db75368571097155e","ZZ","f");

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
   entry=leg->AddEntry("c878baa958db4b6cb37a4169f37b0e90","Charge mis-id","f");

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
   entry=leg->AddEntry("4c758f259d2b4174ab8d0e74b975126b","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("c2b66a58369f44d085bf149d9e640a44","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("3cf90b782001452bbc5411eb2d93c5fc","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2ef5b59a88044d0799873a8764cc091a","Bkg. Unc.","f");
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
