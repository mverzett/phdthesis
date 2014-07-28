{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:12:25 2014) by ROOT version5.32/00
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
   
   THStack *648b21f90d7b4c5488e6cbd6bf4ea8ab = new THStack();
   648b21f90d7b4c5488e6cbd6bf4ea8ab->SetName("648b21f90d7b4c5488e6cbd6bf4ea8ab");
   648b21f90d7b4c5488e6cbd6bf4ea8ab->SetTitle("WZ#rightarrow3l");
   648b21f90d7b4c5488e6cbd6bf4ea8ab->SetMaximum(6);
   
   TH1F *648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4 = new TH1F("648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4","WZ#rightarrow3l",1,0,300);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->SetMinimum(0);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->SetMaximum(6.3);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->SetDirectory(0);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->SetLineColor(ci);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetXaxis()->SetLabelFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetXaxis()->SetLabelSize(0.035);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetXaxis()->SetTitleSize(0.035);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetXaxis()->SetTitleFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetYaxis()->SetTitle("Events");
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetYaxis()->SetLabelFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetYaxis()->SetLabelSize(0.035);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetYaxis()->SetTitleSize(0.035);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetYaxis()->SetTitleFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetZaxis()->SetLabelFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetZaxis()->SetLabelSize(0.035);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetZaxis()->SetTitleSize(0.035);
   648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4->GetZaxis()->SetTitleFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->SetHistogram(648b21f90d7b4c5488e6cbd6bf4ea8ab_stack_4);
   
   
   TH1D *648b21f90d7b4c5488e6cbd6bf4ea8ab = new TH1D("648b21f90d7b4c5488e6cbd6bf4ea8ab","WZ#rightarrow3l",1,0,300);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->SetBinContent(1,0.08997665);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->SetBinError(1,0.02875718);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->SetEntries(9.789645);

   ci = TColor::GetColor("#dc322f");
   648b21f90d7b4c5488e6cbd6bf4ea8ab->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   648b21f90d7b4c5488e6cbd6bf4ea8ab->SetLineColor(ci);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->GetXaxis()->SetLabelFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->GetXaxis()->SetLabelSize(0.035);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->GetXaxis()->SetTitleSize(0.035);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->GetXaxis()->SetTitleFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->GetYaxis()->SetLabelFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->GetYaxis()->SetLabelSize(0.035);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->GetYaxis()->SetTitleSize(0.035);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->GetYaxis()->SetTitleFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->GetZaxis()->SetLabelFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->GetZaxis()->SetLabelSize(0.035);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->GetZaxis()->SetTitleSize(0.035);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->GetZaxis()->SetTitleFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->Add(648b21f90d7b4c5488e6cbd6bf4ea8ab,"hist");
   
   TH1D *b6c566e0fe76400893c60bbd4bc8107a = new TH1D("b6c566e0fe76400893c60bbd4bc8107a","ZZ",1,0,300);
   b6c566e0fe76400893c60bbd4bc8107a->SetBinContent(1,0.0241377);
   b6c566e0fe76400893c60bbd4bc8107a->SetBinContent(2,0.0004211853);
   b6c566e0fe76400893c60bbd4bc8107a->SetBinError(1,0.003411745);
   b6c566e0fe76400893c60bbd4bc8107a->SetBinError(2,0.0004211853);
   b6c566e0fe76400893c60bbd4bc8107a->SetEntries(50.05397);

   ci = TColor::GetColor("#50a634");
   b6c566e0fe76400893c60bbd4bc8107a->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   b6c566e0fe76400893c60bbd4bc8107a->SetLineColor(ci);
   b6c566e0fe76400893c60bbd4bc8107a->GetXaxis()->SetLabelFont(42);
   b6c566e0fe76400893c60bbd4bc8107a->GetXaxis()->SetLabelSize(0.035);
   b6c566e0fe76400893c60bbd4bc8107a->GetXaxis()->SetTitleSize(0.035);
   b6c566e0fe76400893c60bbd4bc8107a->GetXaxis()->SetTitleFont(42);
   b6c566e0fe76400893c60bbd4bc8107a->GetYaxis()->SetLabelFont(42);
   b6c566e0fe76400893c60bbd4bc8107a->GetYaxis()->SetLabelSize(0.035);
   b6c566e0fe76400893c60bbd4bc8107a->GetYaxis()->SetTitleSize(0.035);
   b6c566e0fe76400893c60bbd4bc8107a->GetYaxis()->SetTitleFont(42);
   b6c566e0fe76400893c60bbd4bc8107a->GetZaxis()->SetLabelFont(42);
   b6c566e0fe76400893c60bbd4bc8107a->GetZaxis()->SetLabelSize(0.035);
   b6c566e0fe76400893c60bbd4bc8107a->GetZaxis()->SetTitleSize(0.035);
   b6c566e0fe76400893c60bbd4bc8107a->GetZaxis()->SetTitleFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->Add(b6c566e0fe76400893c60bbd4bc8107a,"hist");
   
   TH1D *1e7c49413ead4dff930d1a77943e1ebc = new TH1D("1e7c49413ead4dff930d1a77943e1ebc","Charge mis-id",1,0,300);
   1e7c49413ead4dff930d1a77943e1ebc->SetBinContent(1,1.672653);
   1e7c49413ead4dff930d1a77943e1ebc->SetBinContent(2,0.004329216);
   1e7c49413ead4dff930d1a77943e1ebc->SetBinError(1,0.05189108);
   1e7c49413ead4dff930d1a77943e1ebc->SetBinError(2,0.002480412);
   1e7c49413ead4dff930d1a77943e1ebc->SetEntries(1039.509);

   ci = TColor::GetColor("#9999cc");
   1e7c49413ead4dff930d1a77943e1ebc->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   1e7c49413ead4dff930d1a77943e1ebc->SetLineColor(ci);
   1e7c49413ead4dff930d1a77943e1ebc->SetMarkerStyle(20);
   1e7c49413ead4dff930d1a77943e1ebc->GetXaxis()->SetLabelFont(42);
   1e7c49413ead4dff930d1a77943e1ebc->GetXaxis()->SetLabelSize(0.035);
   1e7c49413ead4dff930d1a77943e1ebc->GetXaxis()->SetTitleSize(0.035);
   1e7c49413ead4dff930d1a77943e1ebc->GetXaxis()->SetTitleFont(42);
   1e7c49413ead4dff930d1a77943e1ebc->GetYaxis()->SetLabelFont(42);
   1e7c49413ead4dff930d1a77943e1ebc->GetYaxis()->SetLabelSize(0.035);
   1e7c49413ead4dff930d1a77943e1ebc->GetYaxis()->SetTitleSize(0.035);
   1e7c49413ead4dff930d1a77943e1ebc->GetYaxis()->SetTitleFont(42);
   1e7c49413ead4dff930d1a77943e1ebc->GetZaxis()->SetLabelFont(42);
   1e7c49413ead4dff930d1a77943e1ebc->GetZaxis()->SetLabelSize(0.035);
   1e7c49413ead4dff930d1a77943e1ebc->GetZaxis()->SetTitleSize(0.035);
   1e7c49413ead4dff930d1a77943e1ebc->GetZaxis()->SetTitleFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->Add(1e7c49413ead4dff930d1a77943e1ebc,"hist");
   
   TH1D *f521fcb333464337b1023bf413e952f9 = new TH1D("f521fcb333464337b1023bf413e952f9","WZ#rightarrowl#tau#tau",1,0,300);
   f521fcb333464337b1023bf413e952f9->SetBinContent(1,0.09395146);
   f521fcb333464337b1023bf413e952f9->SetBinError(1,0.03013851);
   f521fcb333464337b1023bf413e952f9->SetEntries(9.717701);

   ci = TColor::GetColor("#268bd2");
   f521fcb333464337b1023bf413e952f9->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   f521fcb333464337b1023bf413e952f9->SetLineColor(ci);
   f521fcb333464337b1023bf413e952f9->GetXaxis()->SetLabelFont(42);
   f521fcb333464337b1023bf413e952f9->GetXaxis()->SetLabelSize(0.035);
   f521fcb333464337b1023bf413e952f9->GetXaxis()->SetTitleSize(0.035);
   f521fcb333464337b1023bf413e952f9->GetXaxis()->SetTitleFont(42);
   f521fcb333464337b1023bf413e952f9->GetYaxis()->SetLabelFont(42);
   f521fcb333464337b1023bf413e952f9->GetYaxis()->SetLabelSize(0.035);
   f521fcb333464337b1023bf413e952f9->GetYaxis()->SetTitleSize(0.035);
   f521fcb333464337b1023bf413e952f9->GetYaxis()->SetTitleFont(42);
   f521fcb333464337b1023bf413e952f9->GetZaxis()->SetLabelFont(42);
   f521fcb333464337b1023bf413e952f9->GetZaxis()->SetLabelSize(0.035);
   f521fcb333464337b1023bf413e952f9->GetZaxis()->SetTitleSize(0.035);
   f521fcb333464337b1023bf413e952f9->GetZaxis()->SetTitleFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->Add(f521fcb333464337b1023bf413e952f9,"hist");
   
   TH1D *8abcee112ba44617b58c0f4cfcc2d2b3 = new TH1D("8abcee112ba44617b58c0f4cfcc2d2b3","Reducible bkg.",1,0,300);
   8abcee112ba44617b58c0f4cfcc2d2b3->SetBinContent(0,1e-05);
   8abcee112ba44617b58c0f4cfcc2d2b3->SetBinContent(1,2.680282);
   8abcee112ba44617b58c0f4cfcc2d2b3->SetBinContent(2,0.09835606);
   8abcee112ba44617b58c0f4cfcc2d2b3->SetBinError(0,0.02645582);
   8abcee112ba44617b58c0f4cfcc2d2b3->SetBinError(1,0.6598894);
   8abcee112ba44617b58c0f4cfcc2d2b3->SetBinError(2,0.106406);
   8abcee112ba44617b58c0f4cfcc2d2b3->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   8abcee112ba44617b58c0f4cfcc2d2b3->SetFillColor(ci);
   8abcee112ba44617b58c0f4cfcc2d2b3->SetMarkerStyle(20);
   8abcee112ba44617b58c0f4cfcc2d2b3->GetXaxis()->SetLabelFont(42);
   8abcee112ba44617b58c0f4cfcc2d2b3->GetXaxis()->SetLabelSize(0.035);
   8abcee112ba44617b58c0f4cfcc2d2b3->GetXaxis()->SetTitleSize(0.035);
   8abcee112ba44617b58c0f4cfcc2d2b3->GetXaxis()->SetTitleFont(42);
   8abcee112ba44617b58c0f4cfcc2d2b3->GetYaxis()->SetLabelFont(42);
   8abcee112ba44617b58c0f4cfcc2d2b3->GetYaxis()->SetLabelSize(0.035);
   8abcee112ba44617b58c0f4cfcc2d2b3->GetYaxis()->SetTitleSize(0.035);
   8abcee112ba44617b58c0f4cfcc2d2b3->GetYaxis()->SetTitleFont(42);
   8abcee112ba44617b58c0f4cfcc2d2b3->GetZaxis()->SetLabelFont(42);
   8abcee112ba44617b58c0f4cfcc2d2b3->GetZaxis()->SetLabelSize(0.035);
   8abcee112ba44617b58c0f4cfcc2d2b3->GetZaxis()->SetTitleSize(0.035);
   8abcee112ba44617b58c0f4cfcc2d2b3->GetZaxis()->SetTitleFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->Add(8abcee112ba44617b58c0f4cfcc2d2b3,"hist");
   
   TH1D *65b662c977684fed88c819cacdcf3d43 = new TH1D("65b662c977684fed88c819cacdcf3d43","VH H#rightarrowWW",1,0,300);
   65b662c977684fed88c819cacdcf3d43->SetBinContent(1,0.0009754478);
   65b662c977684fed88c819cacdcf3d43->SetBinError(1,0.000689813);
   65b662c977684fed88c819cacdcf3d43->SetEntries(1.99961);

   ci = TColor::GetColor("#cb4b16");
   65b662c977684fed88c819cacdcf3d43->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   65b662c977684fed88c819cacdcf3d43->SetLineColor(ci);
   65b662c977684fed88c819cacdcf3d43->GetXaxis()->SetLabelFont(42);
   65b662c977684fed88c819cacdcf3d43->GetXaxis()->SetLabelSize(0.035);
   65b662c977684fed88c819cacdcf3d43->GetXaxis()->SetTitleSize(0.035);
   65b662c977684fed88c819cacdcf3d43->GetXaxis()->SetTitleFont(42);
   65b662c977684fed88c819cacdcf3d43->GetYaxis()->SetLabelFont(42);
   65b662c977684fed88c819cacdcf3d43->GetYaxis()->SetLabelSize(0.035);
   65b662c977684fed88c819cacdcf3d43->GetYaxis()->SetTitleSize(0.035);
   65b662c977684fed88c819cacdcf3d43->GetYaxis()->SetTitleFont(42);
   65b662c977684fed88c819cacdcf3d43->GetZaxis()->SetLabelFont(42);
   65b662c977684fed88c819cacdcf3d43->GetZaxis()->SetLabelSize(0.035);
   65b662c977684fed88c819cacdcf3d43->GetZaxis()->SetTitleSize(0.035);
   65b662c977684fed88c819cacdcf3d43->GetZaxis()->SetTitleFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->Add(65b662c977684fed88c819cacdcf3d43,"hist");
   
   TH1D *344c9575e5af44008360f0eef14cbe86 = new TH1D("344c9575e5af44008360f0eef14cbe86","(1#times) m_{H} = 125",1,0,300);
   344c9575e5af44008360f0eef14cbe86->SetBinContent(1,0.009919152);
   344c9575e5af44008360f0eef14cbe86->SetBinError(1,0.005742936);
   344c9575e5af44008360f0eef14cbe86->SetEntries(2.983192);
   344c9575e5af44008360f0eef14cbe86->SetFillColor(1);
   344c9575e5af44008360f0eef14cbe86->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   344c9575e5af44008360f0eef14cbe86->SetLineColor(ci);
   344c9575e5af44008360f0eef14cbe86->SetLineStyle(2);
   344c9575e5af44008360f0eef14cbe86->SetLineWidth(4);
   344c9575e5af44008360f0eef14cbe86->GetXaxis()->SetLabelFont(42);
   344c9575e5af44008360f0eef14cbe86->GetXaxis()->SetLabelSize(0.035);
   344c9575e5af44008360f0eef14cbe86->GetXaxis()->SetTitleSize(0.035);
   344c9575e5af44008360f0eef14cbe86->GetXaxis()->SetTitleFont(42);
   344c9575e5af44008360f0eef14cbe86->GetYaxis()->SetLabelFont(42);
   344c9575e5af44008360f0eef14cbe86->GetYaxis()->SetLabelSize(0.035);
   344c9575e5af44008360f0eef14cbe86->GetYaxis()->SetTitleSize(0.035);
   344c9575e5af44008360f0eef14cbe86->GetYaxis()->SetTitleFont(42);
   344c9575e5af44008360f0eef14cbe86->GetZaxis()->SetLabelFont(42);
   344c9575e5af44008360f0eef14cbe86->GetZaxis()->SetLabelSize(0.035);
   344c9575e5af44008360f0eef14cbe86->GetZaxis()->SetTitleSize(0.035);
   344c9575e5af44008360f0eef14cbe86->GetZaxis()->SetTitleFont(42);
   648b21f90d7b4c5488e6cbd6bf4ea8ab->Add(344c9575e5af44008360f0eef14cbe86,"hist");
   648b21f90d7b4c5488e6cbd6bf4ea8ab->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("648b21f90d7b4c5488e6cbd6bf4ea8ab","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("b6c566e0fe76400893c60bbd4bc8107a","ZZ","f");

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
   entry=leg->AddEntry("1e7c49413ead4dff930d1a77943e1ebc","Charge mis-id","f");

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
   entry=leg->AddEntry("f521fcb333464337b1023bf413e952f9","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("8abcee112ba44617b58c0f4cfcc2d2b3","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("65b662c977684fed88c819cacdcf3d43","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("344c9575e5af44008360f0eef14cbe86","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("233fd72559fb4c9a85bdd00dd38e1d98","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_53f7229b25ac40eca18b2264c81a8c5c","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *233fd72559fb4c9a85bdd00dd38e1d98 = new TH1D("233fd72559fb4c9a85bdd00dd38e1d98","Bkg. Unc.",1,0,300);
   233fd72559fb4c9a85bdd00dd38e1d98->SetBinContent(1,4.561001);
   233fd72559fb4c9a85bdd00dd38e1d98->SetBinError(1,2.680848);
   233fd72559fb4c9a85bdd00dd38e1d98->SetEntries(1);
   233fd72559fb4c9a85bdd00dd38e1d98->SetFillColor(1);
   233fd72559fb4c9a85bdd00dd38e1d98->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   233fd72559fb4c9a85bdd00dd38e1d98->SetLineColor(ci);
   233fd72559fb4c9a85bdd00dd38e1d98->SetMarkerSize(0);
   233fd72559fb4c9a85bdd00dd38e1d98->GetXaxis()->SetLabelFont(42);
   233fd72559fb4c9a85bdd00dd38e1d98->GetXaxis()->SetLabelSize(0.035);
   233fd72559fb4c9a85bdd00dd38e1d98->GetXaxis()->SetTitleSize(0.035);
   233fd72559fb4c9a85bdd00dd38e1d98->GetXaxis()->SetTitleFont(42);
   233fd72559fb4c9a85bdd00dd38e1d98->GetYaxis()->SetLabelFont(42);
   233fd72559fb4c9a85bdd00dd38e1d98->GetYaxis()->SetLabelSize(0.035);
   233fd72559fb4c9a85bdd00dd38e1d98->GetYaxis()->SetTitleSize(0.035);
   233fd72559fb4c9a85bdd00dd38e1d98->GetYaxis()->SetTitleFont(42);
   233fd72559fb4c9a85bdd00dd38e1d98->GetZaxis()->SetLabelFont(42);
   233fd72559fb4c9a85bdd00dd38e1d98->GetZaxis()->SetLabelSize(0.035);
   233fd72559fb4c9a85bdd00dd38e1d98->GetZaxis()->SetTitleSize(0.035);
   233fd72559fb4c9a85bdd00dd38e1d98->GetZaxis()->SetTitleFont(42);
   233fd72559fb4c9a85bdd00dd38e1d98->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_53f7229b25ac40eca18b2264c81a8c5c");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,5);
   grae->SetPointError(0,0,0,2.159724,3.382539);
   
   TH1F *Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4 = new TH1F("Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4","Observed",100,149.9,151.1);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->SetMinimum(2.286049);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->SetMaximum(8.936766);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->SetDirectory(0);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->SetLineColor(ci);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_53f7229b25ac40eca18b2264c81a8c5c4);
   
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
   entry=leg->AddEntry("648b21f90d7b4c5488e6cbd6bf4ea8ab","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("b6c566e0fe76400893c60bbd4bc8107a","ZZ","f");

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
   entry=leg->AddEntry("1e7c49413ead4dff930d1a77943e1ebc","Charge mis-id","f");

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
   entry=leg->AddEntry("f521fcb333464337b1023bf413e952f9","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("8abcee112ba44617b58c0f4cfcc2d2b3","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("65b662c977684fed88c819cacdcf3d43","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("344c9575e5af44008360f0eef14cbe86","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("233fd72559fb4c9a85bdd00dd38e1d98","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_53f7229b25ac40eca18b2264c81a8c5c","Observed","P");
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
