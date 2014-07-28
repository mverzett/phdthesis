{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:01:25 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-0.1623549,337.5,1.461194);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *2b99684c85554378867ea31bf224681e = new THStack();
   2b99684c85554378867ea31bf224681e->SetName("2b99684c85554378867ea31bf224681e");
   2b99684c85554378867ea31bf224681e->SetTitle("WZ#rightarrow3l");
   2b99684c85554378867ea31bf224681e->SetMaximum(1.236989);
   
   TH1F *2b99684c85554378867ea31bf224681e_stack_6 = new TH1F("2b99684c85554378867ea31bf224681e_stack_6","WZ#rightarrow3l",1,0,300);
   2b99684c85554378867ea31bf224681e_stack_6->SetMinimum(0);
   2b99684c85554378867ea31bf224681e_stack_6->SetMaximum(1.298839);
   2b99684c85554378867ea31bf224681e_stack_6->SetDirectory(0);
   2b99684c85554378867ea31bf224681e_stack_6->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   2b99684c85554378867ea31bf224681e_stack_6->SetLineColor(ci);
   2b99684c85554378867ea31bf224681e_stack_6->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   2b99684c85554378867ea31bf224681e_stack_6->GetXaxis()->SetLabelFont(42);
   2b99684c85554378867ea31bf224681e_stack_6->GetXaxis()->SetLabelSize(0.035);
   2b99684c85554378867ea31bf224681e_stack_6->GetXaxis()->SetTitleSize(0.035);
   2b99684c85554378867ea31bf224681e_stack_6->GetXaxis()->SetTitleFont(42);
   2b99684c85554378867ea31bf224681e_stack_6->GetYaxis()->SetTitle("Events");
   2b99684c85554378867ea31bf224681e_stack_6->GetYaxis()->SetLabelFont(42);
   2b99684c85554378867ea31bf224681e_stack_6->GetYaxis()->SetLabelSize(0.035);
   2b99684c85554378867ea31bf224681e_stack_6->GetYaxis()->SetTitleSize(0.035);
   2b99684c85554378867ea31bf224681e_stack_6->GetYaxis()->SetTitleFont(42);
   2b99684c85554378867ea31bf224681e_stack_6->GetZaxis()->SetLabelFont(42);
   2b99684c85554378867ea31bf224681e_stack_6->GetZaxis()->SetLabelSize(0.035);
   2b99684c85554378867ea31bf224681e_stack_6->GetZaxis()->SetTitleSize(0.035);
   2b99684c85554378867ea31bf224681e_stack_6->GetZaxis()->SetTitleFont(42);
   2b99684c85554378867ea31bf224681e->SetHistogram(2b99684c85554378867ea31bf224681e_stack_6);
   
   
   TH1D *2b99684c85554378867ea31bf224681e = new TH1D("2b99684c85554378867ea31bf224681e","WZ#rightarrow3l",1,0,300);
   2b99684c85554378867ea31bf224681e->SetBinContent(1,0.01499009);
   2b99684c85554378867ea31bf224681e->SetBinError(1,0.009395852);
   2b99684c85554378867ea31bf224681e->SetEntries(2.545282);

   ci = TColor::GetColor("#dc322f");
   2b99684c85554378867ea31bf224681e->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   2b99684c85554378867ea31bf224681e->SetLineColor(ci);
   2b99684c85554378867ea31bf224681e->GetXaxis()->SetLabelFont(42);
   2b99684c85554378867ea31bf224681e->GetXaxis()->SetLabelSize(0.035);
   2b99684c85554378867ea31bf224681e->GetXaxis()->SetTitleSize(0.035);
   2b99684c85554378867ea31bf224681e->GetXaxis()->SetTitleFont(42);
   2b99684c85554378867ea31bf224681e->GetYaxis()->SetLabelFont(42);
   2b99684c85554378867ea31bf224681e->GetYaxis()->SetLabelSize(0.035);
   2b99684c85554378867ea31bf224681e->GetYaxis()->SetTitleSize(0.035);
   2b99684c85554378867ea31bf224681e->GetYaxis()->SetTitleFont(42);
   2b99684c85554378867ea31bf224681e->GetZaxis()->SetLabelFont(42);
   2b99684c85554378867ea31bf224681e->GetZaxis()->SetLabelSize(0.035);
   2b99684c85554378867ea31bf224681e->GetZaxis()->SetTitleSize(0.035);
   2b99684c85554378867ea31bf224681e->GetZaxis()->SetTitleFont(42);
   2b99684c85554378867ea31bf224681e->Add(2b99684c85554378867ea31bf224681e,"hist");
   
   TH1D *a4abfa64227d4920a2ed45a105d3e3b5 = new TH1D("a4abfa64227d4920a2ed45a105d3e3b5","ZZ",1,0,300);
   a4abfa64227d4920a2ed45a105d3e3b5->SetBinContent(1,0.009487833);
   a4abfa64227d4920a2ed45a105d3e3b5->SetBinError(1,0.002780064);
   a4abfa64227d4920a2ed45a105d3e3b5->SetEntries(11.64728);

   ci = TColor::GetColor("#50a634");
   a4abfa64227d4920a2ed45a105d3e3b5->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   a4abfa64227d4920a2ed45a105d3e3b5->SetLineColor(ci);
   a4abfa64227d4920a2ed45a105d3e3b5->GetXaxis()->SetLabelFont(42);
   a4abfa64227d4920a2ed45a105d3e3b5->GetXaxis()->SetLabelSize(0.035);
   a4abfa64227d4920a2ed45a105d3e3b5->GetXaxis()->SetTitleSize(0.035);
   a4abfa64227d4920a2ed45a105d3e3b5->GetXaxis()->SetTitleFont(42);
   a4abfa64227d4920a2ed45a105d3e3b5->GetYaxis()->SetLabelFont(42);
   a4abfa64227d4920a2ed45a105d3e3b5->GetYaxis()->SetLabelSize(0.035);
   a4abfa64227d4920a2ed45a105d3e3b5->GetYaxis()->SetTitleSize(0.035);
   a4abfa64227d4920a2ed45a105d3e3b5->GetYaxis()->SetTitleFont(42);
   a4abfa64227d4920a2ed45a105d3e3b5->GetZaxis()->SetLabelFont(42);
   a4abfa64227d4920a2ed45a105d3e3b5->GetZaxis()->SetLabelSize(0.035);
   a4abfa64227d4920a2ed45a105d3e3b5->GetZaxis()->SetTitleSize(0.035);
   a4abfa64227d4920a2ed45a105d3e3b5->GetZaxis()->SetTitleFont(42);
   2b99684c85554378867ea31bf224681e->Add(a4abfa64227d4920a2ed45a105d3e3b5,"hist");
   
   TH1D *405d612928de47afa2bce30c1cdfdcde = new TH1D("405d612928de47afa2bce30c1cdfdcde","Charge mis-id",1,0,300);
   405d612928de47afa2bce30c1cdfdcde->SetBinContent(1,0.3922132);
   405d612928de47afa2bce30c1cdfdcde->SetBinError(1,0.03166449);
   405d612928de47afa2bce30c1cdfdcde->SetEntries(153.5078);

   ci = TColor::GetColor("#9999cc");
   405d612928de47afa2bce30c1cdfdcde->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   405d612928de47afa2bce30c1cdfdcde->SetLineColor(ci);
   405d612928de47afa2bce30c1cdfdcde->SetMarkerStyle(20);
   405d612928de47afa2bce30c1cdfdcde->GetXaxis()->SetLabelFont(42);
   405d612928de47afa2bce30c1cdfdcde->GetXaxis()->SetLabelSize(0.035);
   405d612928de47afa2bce30c1cdfdcde->GetXaxis()->SetTitleSize(0.035);
   405d612928de47afa2bce30c1cdfdcde->GetXaxis()->SetTitleFont(42);
   405d612928de47afa2bce30c1cdfdcde->GetYaxis()->SetLabelFont(42);
   405d612928de47afa2bce30c1cdfdcde->GetYaxis()->SetLabelSize(0.035);
   405d612928de47afa2bce30c1cdfdcde->GetYaxis()->SetTitleSize(0.035);
   405d612928de47afa2bce30c1cdfdcde->GetYaxis()->SetTitleFont(42);
   405d612928de47afa2bce30c1cdfdcde->GetZaxis()->SetLabelFont(42);
   405d612928de47afa2bce30c1cdfdcde->GetZaxis()->SetLabelSize(0.035);
   405d612928de47afa2bce30c1cdfdcde->GetZaxis()->SetTitleSize(0.035);
   405d612928de47afa2bce30c1cdfdcde->GetZaxis()->SetTitleFont(42);
   2b99684c85554378867ea31bf224681e->Add(405d612928de47afa2bce30c1cdfdcde,"hist");
   
   TH1D *85a162f7adab4ec1993169c9ff08f8c7 = new TH1D("85a162f7adab4ec1993169c9ff08f8c7","WZ#rightarrowl#tau#tau",1,0,300);
   85a162f7adab4ec1993169c9ff08f8c7->SetBinContent(1,0.006322527);
   85a162f7adab4ec1993169c9ff08f8c7->SetBinError(1,0.006322133);
   85a162f7adab4ec1993169c9ff08f8c7->SetEntries(1.000125);

   ci = TColor::GetColor("#268bd2");
   85a162f7adab4ec1993169c9ff08f8c7->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   85a162f7adab4ec1993169c9ff08f8c7->SetLineColor(ci);
   85a162f7adab4ec1993169c9ff08f8c7->GetXaxis()->SetLabelFont(42);
   85a162f7adab4ec1993169c9ff08f8c7->GetXaxis()->SetLabelSize(0.035);
   85a162f7adab4ec1993169c9ff08f8c7->GetXaxis()->SetTitleSize(0.035);
   85a162f7adab4ec1993169c9ff08f8c7->GetXaxis()->SetTitleFont(42);
   85a162f7adab4ec1993169c9ff08f8c7->GetYaxis()->SetLabelFont(42);
   85a162f7adab4ec1993169c9ff08f8c7->GetYaxis()->SetLabelSize(0.035);
   85a162f7adab4ec1993169c9ff08f8c7->GetYaxis()->SetTitleSize(0.035);
   85a162f7adab4ec1993169c9ff08f8c7->GetYaxis()->SetTitleFont(42);
   85a162f7adab4ec1993169c9ff08f8c7->GetZaxis()->SetLabelFont(42);
   85a162f7adab4ec1993169c9ff08f8c7->GetZaxis()->SetLabelSize(0.035);
   85a162f7adab4ec1993169c9ff08f8c7->GetZaxis()->SetTitleSize(0.035);
   85a162f7adab4ec1993169c9ff08f8c7->GetZaxis()->SetTitleFont(42);
   2b99684c85554378867ea31bf224681e->Add(85a162f7adab4ec1993169c9ff08f8c7,"hist");
   
   TH1D *44f99a2c3c3541e2bdeee74684a677d7 = new TH1D("44f99a2c3c3541e2bdeee74684a677d7","Reducible bkg.",1,0,300);
   44f99a2c3c3541e2bdeee74684a677d7->SetBinContent(0,1e-05);
   44f99a2c3c3541e2bdeee74684a677d7->SetBinContent(1,0.6040131);
   44f99a2c3c3541e2bdeee74684a677d7->SetBinContent(2,0.00336864);
   44f99a2c3c3541e2bdeee74684a677d7->SetBinError(0,0.01905723);
   44f99a2c3c3541e2bdeee74684a677d7->SetBinError(1,0.1986964);
   44f99a2c3c3541e2bdeee74684a677d7->SetBinError(2,0.002026928);
   44f99a2c3c3541e2bdeee74684a677d7->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   44f99a2c3c3541e2bdeee74684a677d7->SetFillColor(ci);
   44f99a2c3c3541e2bdeee74684a677d7->SetMarkerStyle(20);
   44f99a2c3c3541e2bdeee74684a677d7->GetXaxis()->SetLabelFont(42);
   44f99a2c3c3541e2bdeee74684a677d7->GetXaxis()->SetLabelSize(0.035);
   44f99a2c3c3541e2bdeee74684a677d7->GetXaxis()->SetTitleSize(0.035);
   44f99a2c3c3541e2bdeee74684a677d7->GetXaxis()->SetTitleFont(42);
   44f99a2c3c3541e2bdeee74684a677d7->GetYaxis()->SetLabelFont(42);
   44f99a2c3c3541e2bdeee74684a677d7->GetYaxis()->SetLabelSize(0.035);
   44f99a2c3c3541e2bdeee74684a677d7->GetYaxis()->SetTitleSize(0.035);
   44f99a2c3c3541e2bdeee74684a677d7->GetYaxis()->SetTitleFont(42);
   44f99a2c3c3541e2bdeee74684a677d7->GetZaxis()->SetLabelFont(42);
   44f99a2c3c3541e2bdeee74684a677d7->GetZaxis()->SetLabelSize(0.035);
   44f99a2c3c3541e2bdeee74684a677d7->GetZaxis()->SetTitleSize(0.035);
   44f99a2c3c3541e2bdeee74684a677d7->GetZaxis()->SetTitleFont(42);
   2b99684c85554378867ea31bf224681e->Add(44f99a2c3c3541e2bdeee74684a677d7,"hist");
   
   TH1D *7e9dc9ce937744ee9209fb5a78712c53 = new TH1D("7e9dc9ce937744ee9209fb5a78712c53","VH H#rightarrowWW",1,0,300);
   7e9dc9ce937744ee9209fb5a78712c53->SetBinContent(1,0.0002500116);
   7e9dc9ce937744ee9209fb5a78712c53->SetBinError(1,0.0001647382);
   7e9dc9ce937744ee9209fb5a78712c53->SetEntries(2.3032);

   ci = TColor::GetColor("#cb4b16");
   7e9dc9ce937744ee9209fb5a78712c53->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   7e9dc9ce937744ee9209fb5a78712c53->SetLineColor(ci);
   7e9dc9ce937744ee9209fb5a78712c53->GetXaxis()->SetLabelFont(42);
   7e9dc9ce937744ee9209fb5a78712c53->GetXaxis()->SetLabelSize(0.035);
   7e9dc9ce937744ee9209fb5a78712c53->GetXaxis()->SetTitleSize(0.035);
   7e9dc9ce937744ee9209fb5a78712c53->GetXaxis()->SetTitleFont(42);
   7e9dc9ce937744ee9209fb5a78712c53->GetYaxis()->SetLabelFont(42);
   7e9dc9ce937744ee9209fb5a78712c53->GetYaxis()->SetLabelSize(0.035);
   7e9dc9ce937744ee9209fb5a78712c53->GetYaxis()->SetTitleSize(0.035);
   7e9dc9ce937744ee9209fb5a78712c53->GetYaxis()->SetTitleFont(42);
   7e9dc9ce937744ee9209fb5a78712c53->GetZaxis()->SetLabelFont(42);
   7e9dc9ce937744ee9209fb5a78712c53->GetZaxis()->SetLabelSize(0.035);
   7e9dc9ce937744ee9209fb5a78712c53->GetZaxis()->SetTitleSize(0.035);
   7e9dc9ce937744ee9209fb5a78712c53->GetZaxis()->SetTitleFont(42);
   2b99684c85554378867ea31bf224681e->Add(7e9dc9ce937744ee9209fb5a78712c53,"hist");
   
   TH1D *b9e90118a5744d2cbeefb6d936c2c113 = new TH1D("b9e90118a5744d2cbeefb6d936c2c113","(1#times) m_{H} = 125",1,0,300);
   b9e90118a5744d2cbeefb6d936c2c113->SetBinContent(1,0.003547766);
   b9e90118a5744d2cbeefb6d936c2c113->SetBinError(1,0.002055336);
   b9e90118a5744d2cbeefb6d936c2c113->SetEntries(2.979508);
   b9e90118a5744d2cbeefb6d936c2c113->SetFillColor(1);
   b9e90118a5744d2cbeefb6d936c2c113->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   b9e90118a5744d2cbeefb6d936c2c113->SetLineColor(ci);
   b9e90118a5744d2cbeefb6d936c2c113->SetLineStyle(2);
   b9e90118a5744d2cbeefb6d936c2c113->SetLineWidth(4);
   b9e90118a5744d2cbeefb6d936c2c113->GetXaxis()->SetLabelFont(42);
   b9e90118a5744d2cbeefb6d936c2c113->GetXaxis()->SetLabelSize(0.035);
   b9e90118a5744d2cbeefb6d936c2c113->GetXaxis()->SetTitleSize(0.035);
   b9e90118a5744d2cbeefb6d936c2c113->GetXaxis()->SetTitleFont(42);
   b9e90118a5744d2cbeefb6d936c2c113->GetYaxis()->SetLabelFont(42);
   b9e90118a5744d2cbeefb6d936c2c113->GetYaxis()->SetLabelSize(0.035);
   b9e90118a5744d2cbeefb6d936c2c113->GetYaxis()->SetTitleSize(0.035);
   b9e90118a5744d2cbeefb6d936c2c113->GetYaxis()->SetTitleFont(42);
   b9e90118a5744d2cbeefb6d936c2c113->GetZaxis()->SetLabelFont(42);
   b9e90118a5744d2cbeefb6d936c2c113->GetZaxis()->SetLabelSize(0.035);
   b9e90118a5744d2cbeefb6d936c2c113->GetZaxis()->SetTitleSize(0.035);
   b9e90118a5744d2cbeefb6d936c2c113->GetZaxis()->SetTitleFont(42);
   2b99684c85554378867ea31bf224681e->Add(b9e90118a5744d2cbeefb6d936c2c113,"hist");
   2b99684c85554378867ea31bf224681e->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("2b99684c85554378867ea31bf224681e","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("a4abfa64227d4920a2ed45a105d3e3b5","ZZ","f");

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
   entry=leg->AddEntry("405d612928de47afa2bce30c1cdfdcde","Charge mis-id","f");

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
   entry=leg->AddEntry("85a162f7adab4ec1993169c9ff08f8c7","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("44f99a2c3c3541e2bdeee74684a677d7","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("7e9dc9ce937744ee9209fb5a78712c53","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("b9e90118a5744d2cbeefb6d936c2c113","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("d3c63e2ae8504bb797c81ab4ad410012","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_9327743d985747ec8e4ee1f9cd9ebad0","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *d3c63e2ae8504bb797c81ab4ad410012 = new TH1D("d3c63e2ae8504bb797c81ab4ad410012","Bkg. Unc.",1,0,300);
   d3c63e2ae8504bb797c81ab4ad410012->SetBinContent(1,1.027027);
   d3c63e2ae8504bb797c81ab4ad410012->SetBinError(1,0.6048464);
   d3c63e2ae8504bb797c81ab4ad410012->SetEntries(1);
   d3c63e2ae8504bb797c81ab4ad410012->SetFillColor(1);
   d3c63e2ae8504bb797c81ab4ad410012->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   d3c63e2ae8504bb797c81ab4ad410012->SetLineColor(ci);
   d3c63e2ae8504bb797c81ab4ad410012->SetMarkerSize(0);
   d3c63e2ae8504bb797c81ab4ad410012->GetXaxis()->SetLabelFont(42);
   d3c63e2ae8504bb797c81ab4ad410012->GetXaxis()->SetLabelSize(0.035);
   d3c63e2ae8504bb797c81ab4ad410012->GetXaxis()->SetTitleSize(0.035);
   d3c63e2ae8504bb797c81ab4ad410012->GetXaxis()->SetTitleFont(42);
   d3c63e2ae8504bb797c81ab4ad410012->GetYaxis()->SetLabelFont(42);
   d3c63e2ae8504bb797c81ab4ad410012->GetYaxis()->SetLabelSize(0.035);
   d3c63e2ae8504bb797c81ab4ad410012->GetYaxis()->SetTitleSize(0.035);
   d3c63e2ae8504bb797c81ab4ad410012->GetYaxis()->SetTitleFont(42);
   d3c63e2ae8504bb797c81ab4ad410012->GetZaxis()->SetLabelFont(42);
   d3c63e2ae8504bb797c81ab4ad410012->GetZaxis()->SetLabelSize(0.035);
   d3c63e2ae8504bb797c81ab4ad410012->GetZaxis()->SetTitleSize(0.035);
   d3c63e2ae8504bb797c81ab4ad410012->GetZaxis()->SetTitleFont(42);
   d3c63e2ae8504bb797c81ab4ad410012->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_9327743d985747ec8e4ee1f9cd9ebad0");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,1);
   grae->SetPointError(0,0,0,0.8272525,2.29957);
   
   TH1F *Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06 = new TH1F("Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06","Observed",100,149.9,151.1);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->SetMinimum(0);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->SetMaximum(3.612252);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->SetDirectory(0);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->SetLineColor(ci);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_9327743d985747ec8e4ee1f9cd9ebad06);
   
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
   entry=leg->AddEntry("2b99684c85554378867ea31bf224681e","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("a4abfa64227d4920a2ed45a105d3e3b5","ZZ","f");

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
   entry=leg->AddEntry("405d612928de47afa2bce30c1cdfdcde","Charge mis-id","f");

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
   entry=leg->AddEntry("85a162f7adab4ec1993169c9ff08f8c7","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("44f99a2c3c3541e2bdeee74684a677d7","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("7e9dc9ce937744ee9209fb5a78712c53","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("b9e90118a5744d2cbeefb6d936c2c113","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("d3c63e2ae8504bb797c81ab4ad410012","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_9327743d985747ec8e4ee1f9cd9ebad0","Observed","P");
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
