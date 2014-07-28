{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:01:59 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-15.45881,337.5,139.1292);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *2472ec1672734d7a84ad269e6c57c343 = new THStack();
   2472ec1672734d7a84ad269e6c57c343->SetName("2472ec1672734d7a84ad269e6c57c343");
   2472ec1672734d7a84ad269e6c57c343->SetTitle("ZZ");
   2472ec1672734d7a84ad269e6c57c343->SetMaximum(117.7814);
   
   TH1F *2472ec1672734d7a84ad269e6c57c343_stack_9 = new TH1F("2472ec1672734d7a84ad269e6c57c343_stack_9","ZZ",1,0,300);
   2472ec1672734d7a84ad269e6c57c343_stack_9->SetMinimum(0);
   2472ec1672734d7a84ad269e6c57c343_stack_9->SetMaximum(123.6704);
   2472ec1672734d7a84ad269e6c57c343_stack_9->SetDirectory(0);
   2472ec1672734d7a84ad269e6c57c343_stack_9->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   2472ec1672734d7a84ad269e6c57c343_stack_9->SetLineColor(ci);
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetXaxis()->SetLabelFont(42);
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetXaxis()->SetLabelSize(0.035);
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetXaxis()->SetTitleSize(0.035);
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetXaxis()->SetTitleFont(42);
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetYaxis()->SetTitle("Events");
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetYaxis()->SetLabelFont(42);
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetYaxis()->SetLabelSize(0.035);
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetYaxis()->SetTitleSize(0.035);
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetYaxis()->SetTitleFont(42);
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetZaxis()->SetLabelFont(42);
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetZaxis()->SetLabelSize(0.035);
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetZaxis()->SetTitleSize(0.035);
   2472ec1672734d7a84ad269e6c57c343_stack_9->GetZaxis()->SetTitleFont(42);
   2472ec1672734d7a84ad269e6c57c343->SetHistogram(2472ec1672734d7a84ad269e6c57c343_stack_9);
   
   
   TH1D *2472ec1672734d7a84ad269e6c57c343 = new TH1D("2472ec1672734d7a84ad269e6c57c343","ZZ",1,0,300);
   2472ec1672734d7a84ad269e6c57c343->SetBinContent(1,0.3155529);
   2472ec1672734d7a84ad269e6c57c343->SetBinContent(2,0.004682587);
   2472ec1672734d7a84ad269e6c57c343->SetBinError(1,0.01552829);
   2472ec1672734d7a84ad269e6c57c343->SetBinError(2,0.001914587);
   2472ec1672734d7a84ad269e6c57c343->SetEntries(412.9498);

   ci = TColor::GetColor("#50a634");
   2472ec1672734d7a84ad269e6c57c343->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   2472ec1672734d7a84ad269e6c57c343->SetLineColor(ci);
   2472ec1672734d7a84ad269e6c57c343->GetXaxis()->SetLabelFont(42);
   2472ec1672734d7a84ad269e6c57c343->GetXaxis()->SetLabelSize(0.035);
   2472ec1672734d7a84ad269e6c57c343->GetXaxis()->SetTitleSize(0.035);
   2472ec1672734d7a84ad269e6c57c343->GetXaxis()->SetTitleFont(42);
   2472ec1672734d7a84ad269e6c57c343->GetYaxis()->SetLabelFont(42);
   2472ec1672734d7a84ad269e6c57c343->GetYaxis()->SetLabelSize(0.035);
   2472ec1672734d7a84ad269e6c57c343->GetYaxis()->SetTitleSize(0.035);
   2472ec1672734d7a84ad269e6c57c343->GetYaxis()->SetTitleFont(42);
   2472ec1672734d7a84ad269e6c57c343->GetZaxis()->SetLabelFont(42);
   2472ec1672734d7a84ad269e6c57c343->GetZaxis()->SetLabelSize(0.035);
   2472ec1672734d7a84ad269e6c57c343->GetZaxis()->SetTitleSize(0.035);
   2472ec1672734d7a84ad269e6c57c343->GetZaxis()->SetTitleFont(42);
   2472ec1672734d7a84ad269e6c57c343->Add(2472ec1672734d7a84ad269e6c57c343,"hist");
   
   TH1D *f691fc0528fc4fddab974ee50c81cf5e = new TH1D("f691fc0528fc4fddab974ee50c81cf5e","Charge mis-id",1,0,300);
   f691fc0528fc4fddab974ee50c81cf5e->SetBinContent(1,15.13643);
   f691fc0528fc4fddab974ee50c81cf5e->SetBinContent(2,0.1075093);
   f691fc0528fc4fddab974ee50c81cf5e->SetBinError(1,0.1824651);
   f691fc0528fc4fddab974ee50c81cf5e->SetBinError(2,0.01770257);
   f691fc0528fc4fddab974ee50c81cf5e->SetEntries(6886.885);

   ci = TColor::GetColor("#9999cc");
   f691fc0528fc4fddab974ee50c81cf5e->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   f691fc0528fc4fddab974ee50c81cf5e->SetLineColor(ci);
   f691fc0528fc4fddab974ee50c81cf5e->SetMarkerStyle(20);
   f691fc0528fc4fddab974ee50c81cf5e->GetXaxis()->SetLabelFont(42);
   f691fc0528fc4fddab974ee50c81cf5e->GetXaxis()->SetLabelSize(0.035);
   f691fc0528fc4fddab974ee50c81cf5e->GetXaxis()->SetTitleSize(0.035);
   f691fc0528fc4fddab974ee50c81cf5e->GetXaxis()->SetTitleFont(42);
   f691fc0528fc4fddab974ee50c81cf5e->GetYaxis()->SetLabelFont(42);
   f691fc0528fc4fddab974ee50c81cf5e->GetYaxis()->SetLabelSize(0.035);
   f691fc0528fc4fddab974ee50c81cf5e->GetYaxis()->SetTitleSize(0.035);
   f691fc0528fc4fddab974ee50c81cf5e->GetYaxis()->SetTitleFont(42);
   f691fc0528fc4fddab974ee50c81cf5e->GetZaxis()->SetLabelFont(42);
   f691fc0528fc4fddab974ee50c81cf5e->GetZaxis()->SetLabelSize(0.035);
   f691fc0528fc4fddab974ee50c81cf5e->GetZaxis()->SetTitleSize(0.035);
   f691fc0528fc4fddab974ee50c81cf5e->GetZaxis()->SetTitleFont(42);
   2472ec1672734d7a84ad269e6c57c343->Add(f691fc0528fc4fddab974ee50c81cf5e,"hist");
   
   TH1D *416576a9be6c417fbfd9f04f5e410688 = new TH1D("416576a9be6c417fbfd9f04f5e410688","WZ#rightarrow3l",1,0,300);
   416576a9be6c417fbfd9f04f5e410688->SetBinContent(1,3.786343);
   416576a9be6c417fbfd9f04f5e410688->SetBinContent(2,0.0633532);
   416576a9be6c417fbfd9f04f5e410688->SetBinError(1,0.1570315);
   416576a9be6c417fbfd9f04f5e410688->SetBinError(2,0.02034898);
   416576a9be6c417fbfd9f04f5e410688->SetEntries(581.3881);

   ci = TColor::GetColor("#dc322f");
   416576a9be6c417fbfd9f04f5e410688->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   416576a9be6c417fbfd9f04f5e410688->SetLineColor(ci);
   416576a9be6c417fbfd9f04f5e410688->GetXaxis()->SetLabelFont(42);
   416576a9be6c417fbfd9f04f5e410688->GetXaxis()->SetLabelSize(0.035);
   416576a9be6c417fbfd9f04f5e410688->GetXaxis()->SetTitleSize(0.035);
   416576a9be6c417fbfd9f04f5e410688->GetXaxis()->SetTitleFont(42);
   416576a9be6c417fbfd9f04f5e410688->GetYaxis()->SetLabelFont(42);
   416576a9be6c417fbfd9f04f5e410688->GetYaxis()->SetLabelSize(0.035);
   416576a9be6c417fbfd9f04f5e410688->GetYaxis()->SetTitleSize(0.035);
   416576a9be6c417fbfd9f04f5e410688->GetYaxis()->SetTitleFont(42);
   416576a9be6c417fbfd9f04f5e410688->GetZaxis()->SetLabelFont(42);
   416576a9be6c417fbfd9f04f5e410688->GetZaxis()->SetLabelSize(0.035);
   416576a9be6c417fbfd9f04f5e410688->GetZaxis()->SetTitleSize(0.035);
   416576a9be6c417fbfd9f04f5e410688->GetZaxis()->SetTitleFont(42);
   2472ec1672734d7a84ad269e6c57c343->Add(416576a9be6c417fbfd9f04f5e410688,"hist");
   
   TH1D *346a85fd48674e67a6d23b642eb0a11f = new TH1D("346a85fd48674e67a6d23b642eb0a11f","WZ#rightarrowl#tau#tau",1,0,300);
   346a85fd48674e67a6d23b642eb0a11f->SetBinContent(1,1.396455);
   346a85fd48674e67a6d23b642eb0a11f->SetBinContent(2,0.01406071);
   346a85fd48674e67a6d23b642eb0a11f->SetBinError(1,0.09549336);
   346a85fd48674e67a6d23b642eb0a11f->SetBinError(2,0.009394938);
   346a85fd48674e67a6d23b642eb0a11f->SetEntries(213.8492);

   ci = TColor::GetColor("#268bd2");
   346a85fd48674e67a6d23b642eb0a11f->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   346a85fd48674e67a6d23b642eb0a11f->SetLineColor(ci);
   346a85fd48674e67a6d23b642eb0a11f->GetXaxis()->SetLabelFont(42);
   346a85fd48674e67a6d23b642eb0a11f->GetXaxis()->SetLabelSize(0.035);
   346a85fd48674e67a6d23b642eb0a11f->GetXaxis()->SetTitleSize(0.035);
   346a85fd48674e67a6d23b642eb0a11f->GetXaxis()->SetTitleFont(42);
   346a85fd48674e67a6d23b642eb0a11f->GetYaxis()->SetLabelFont(42);
   346a85fd48674e67a6d23b642eb0a11f->GetYaxis()->SetLabelSize(0.035);
   346a85fd48674e67a6d23b642eb0a11f->GetYaxis()->SetTitleSize(0.035);
   346a85fd48674e67a6d23b642eb0a11f->GetYaxis()->SetTitleFont(42);
   346a85fd48674e67a6d23b642eb0a11f->GetZaxis()->SetLabelFont(42);
   346a85fd48674e67a6d23b642eb0a11f->GetZaxis()->SetLabelSize(0.035);
   346a85fd48674e67a6d23b642eb0a11f->GetZaxis()->SetTitleSize(0.035);
   346a85fd48674e67a6d23b642eb0a11f->GetZaxis()->SetTitleFont(42);
   2472ec1672734d7a84ad269e6c57c343->Add(346a85fd48674e67a6d23b642eb0a11f,"hist");
   
   TH1D *2a2c316ef29542b7aa59614aa13376d6 = new TH1D("2a2c316ef29542b7aa59614aa13376d6","Reducible bkg.",1,0,300);
   2a2c316ef29542b7aa59614aa13376d6->SetBinContent(0,1e-05);
   2a2c316ef29542b7aa59614aa13376d6->SetBinContent(1,38.2559);
   2a2c316ef29542b7aa59614aa13376d6->SetBinContent(2,0.5153794);
   2a2c316ef29542b7aa59614aa13376d6->SetBinError(0,0.0146963);
   2a2c316ef29542b7aa59614aa13376d6->SetBinError(1,1.774751);
   2a2c316ef29542b7aa59614aa13376d6->SetBinError(2,0.1659032);
   2a2c316ef29542b7aa59614aa13376d6->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   2a2c316ef29542b7aa59614aa13376d6->SetFillColor(ci);
   2a2c316ef29542b7aa59614aa13376d6->SetMarkerStyle(20);
   2a2c316ef29542b7aa59614aa13376d6->GetXaxis()->SetLabelFont(42);
   2a2c316ef29542b7aa59614aa13376d6->GetXaxis()->SetLabelSize(0.035);
   2a2c316ef29542b7aa59614aa13376d6->GetXaxis()->SetTitleSize(0.035);
   2a2c316ef29542b7aa59614aa13376d6->GetXaxis()->SetTitleFont(42);
   2a2c316ef29542b7aa59614aa13376d6->GetYaxis()->SetLabelFont(42);
   2a2c316ef29542b7aa59614aa13376d6->GetYaxis()->SetLabelSize(0.035);
   2a2c316ef29542b7aa59614aa13376d6->GetYaxis()->SetTitleSize(0.035);
   2a2c316ef29542b7aa59614aa13376d6->GetYaxis()->SetTitleFont(42);
   2a2c316ef29542b7aa59614aa13376d6->GetZaxis()->SetLabelFont(42);
   2a2c316ef29542b7aa59614aa13376d6->GetZaxis()->SetLabelSize(0.035);
   2a2c316ef29542b7aa59614aa13376d6->GetZaxis()->SetTitleSize(0.035);
   2a2c316ef29542b7aa59614aa13376d6->GetZaxis()->SetTitleFont(42);
   2472ec1672734d7a84ad269e6c57c343->Add(2a2c316ef29542b7aa59614aa13376d6,"hist");
   2472ec1672734d7a84ad269e6c57c343->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("2472ec1672734d7a84ad269e6c57c343","ZZ","f");

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
   entry=leg->AddEntry("f691fc0528fc4fddab974ee50c81cf5e","Charge mis-id","f");

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
   entry=leg->AddEntry("416576a9be6c417fbfd9f04f5e410688","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("346a85fd48674e67a6d23b642eb0a11f","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("2a2c316ef29542b7aa59614aa13376d6","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("0c50208c429645a9835cd30f693c0c53","Bkg. Unc.","f");
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
   
   TH1D *0c50208c429645a9835cd30f693c0c53 = new TH1D("0c50208c429645a9835cd30f693c0c53","Bkg. Unc.",1,0,300);
   0c50208c429645a9835cd30f693c0c53->SetBinContent(1,58.89069);
   0c50208c429645a9835cd30f693c0c53->SetBinError(1,6.069102);
   0c50208c429645a9835cd30f693c0c53->SetEntries(1);
   0c50208c429645a9835cd30f693c0c53->SetFillColor(1);
   0c50208c429645a9835cd30f693c0c53->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   0c50208c429645a9835cd30f693c0c53->SetLineColor(ci);
   0c50208c429645a9835cd30f693c0c53->SetMarkerSize(0);
   0c50208c429645a9835cd30f693c0c53->GetXaxis()->SetLabelFont(42);
   0c50208c429645a9835cd30f693c0c53->GetXaxis()->SetLabelSize(0.035);
   0c50208c429645a9835cd30f693c0c53->GetXaxis()->SetTitleSize(0.035);
   0c50208c429645a9835cd30f693c0c53->GetXaxis()->SetTitleFont(42);
   0c50208c429645a9835cd30f693c0c53->GetYaxis()->SetLabelFont(42);
   0c50208c429645a9835cd30f693c0c53->GetYaxis()->SetLabelSize(0.035);
   0c50208c429645a9835cd30f693c0c53->GetYaxis()->SetTitleSize(0.035);
   0c50208c429645a9835cd30f693c0c53->GetYaxis()->SetTitleFont(42);
   0c50208c429645a9835cd30f693c0c53->GetZaxis()->SetLabelFont(42);
   0c50208c429645a9835cd30f693c0c53->GetZaxis()->SetLabelSize(0.035);
   0c50208c429645a9835cd30f693c0c53->GetZaxis()->SetTitleSize(0.035);
   0c50208c429645a9835cd30f693c0c53->GetZaxis()->SetTitleFont(42);
   0c50208c429645a9835cd30f693c0c53->Draw("hist pe2,same");
   
   TH1D *27f3d7d596ef44d081561de63d9173db = new TH1D("27f3d7d596ef44d081561de63d9173db","Observed",1,0,300);
   27f3d7d596ef44d081561de63d9173db->SetBinContent(1,58);
   27f3d7d596ef44d081561de63d9173db->SetBinError(1,7.615773);
   27f3d7d596ef44d081561de63d9173db->SetEntries(58);
   27f3d7d596ef44d081561de63d9173db->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   27f3d7d596ef44d081561de63d9173db->SetLineColor(ci);
   27f3d7d596ef44d081561de63d9173db->SetMarkerStyle(20);
   27f3d7d596ef44d081561de63d9173db->GetXaxis()->SetLabelFont(42);
   27f3d7d596ef44d081561de63d9173db->GetXaxis()->SetLabelSize(0.035);
   27f3d7d596ef44d081561de63d9173db->GetXaxis()->SetTitleSize(0.035);
   27f3d7d596ef44d081561de63d9173db->GetXaxis()->SetTitleFont(42);
   27f3d7d596ef44d081561de63d9173db->GetYaxis()->SetLabelFont(42);
   27f3d7d596ef44d081561de63d9173db->GetYaxis()->SetLabelSize(0.035);
   27f3d7d596ef44d081561de63d9173db->GetYaxis()->SetTitleSize(0.035);
   27f3d7d596ef44d081561de63d9173db->GetYaxis()->SetTitleFont(42);
   27f3d7d596ef44d081561de63d9173db->GetZaxis()->SetLabelFont(42);
   27f3d7d596ef44d081561de63d9173db->GetZaxis()->SetLabelSize(0.035);
   27f3d7d596ef44d081561de63d9173db->GetZaxis()->SetTitleSize(0.035);
   27f3d7d596ef44d081561de63d9173db->GetZaxis()->SetTitleFont(42);
   27f3d7d596ef44d081561de63d9173db->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("2472ec1672734d7a84ad269e6c57c343","ZZ","f");

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
   entry=leg->AddEntry("f691fc0528fc4fddab974ee50c81cf5e","Charge mis-id","f");

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
   entry=leg->AddEntry("416576a9be6c417fbfd9f04f5e410688","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("346a85fd48674e67a6d23b642eb0a11f","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("2a2c316ef29542b7aa59614aa13376d6","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("0c50208c429645a9835cd30f693c0c53","Bkg. Unc.","f");
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
