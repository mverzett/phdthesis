{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:02:25 2014) by ROOT version5.32/00
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
   
   THStack *be0fe8de7dbb4fdbb40b52c736bd49fe = new THStack();
   be0fe8de7dbb4fdbb40b52c736bd49fe->SetName("be0fe8de7dbb4fdbb40b52c736bd49fe");
   be0fe8de7dbb4fdbb40b52c736bd49fe->SetTitle("ZZ");
   be0fe8de7dbb4fdbb40b52c736bd49fe->SetMaximum(100);
   
   TH1F *be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11 = new TH1F("be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11","ZZ",1,0,300);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->SetMinimum(0);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->SetMaximum(105);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->SetDirectory(0);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->SetLineColor(ci);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetXaxis()->SetLabelFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetXaxis()->SetLabelSize(0.035);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetXaxis()->SetTitleSize(0.035);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetXaxis()->SetTitleFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetYaxis()->SetTitle("Events");
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetYaxis()->SetLabelFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetYaxis()->SetLabelSize(0.035);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetYaxis()->SetTitleSize(0.035);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetYaxis()->SetTitleFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetZaxis()->SetLabelFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetZaxis()->SetLabelSize(0.035);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetZaxis()->SetTitleSize(0.035);
   be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11->GetZaxis()->SetTitleFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe->SetHistogram(be0fe8de7dbb4fdbb40b52c736bd49fe_stack_11);
   
   
   TH1D *be0fe8de7dbb4fdbb40b52c736bd49fe = new TH1D("be0fe8de7dbb4fdbb40b52c736bd49fe","ZZ",1,0,300);
   be0fe8de7dbb4fdbb40b52c736bd49fe->SetBinContent(1,0.2734659);
   be0fe8de7dbb4fdbb40b52c736bd49fe->SetBinContent(2,0.004682587);
   be0fe8de7dbb4fdbb40b52c736bd49fe->SetBinError(1,0.01445303);
   be0fe8de7dbb4fdbb40b52c736bd49fe->SetBinError(2,0.001914587);
   be0fe8de7dbb4fdbb40b52c736bd49fe->SetEntries(358.0045);

   ci = TColor::GetColor("#50a634");
   be0fe8de7dbb4fdbb40b52c736bd49fe->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   be0fe8de7dbb4fdbb40b52c736bd49fe->SetLineColor(ci);
   be0fe8de7dbb4fdbb40b52c736bd49fe->GetXaxis()->SetLabelFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe->GetXaxis()->SetLabelSize(0.035);
   be0fe8de7dbb4fdbb40b52c736bd49fe->GetXaxis()->SetTitleSize(0.035);
   be0fe8de7dbb4fdbb40b52c736bd49fe->GetXaxis()->SetTitleFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe->GetYaxis()->SetLabelFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe->GetYaxis()->SetLabelSize(0.035);
   be0fe8de7dbb4fdbb40b52c736bd49fe->GetYaxis()->SetTitleSize(0.035);
   be0fe8de7dbb4fdbb40b52c736bd49fe->GetYaxis()->SetTitleFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe->GetZaxis()->SetLabelFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe->GetZaxis()->SetLabelSize(0.035);
   be0fe8de7dbb4fdbb40b52c736bd49fe->GetZaxis()->SetTitleSize(0.035);
   be0fe8de7dbb4fdbb40b52c736bd49fe->GetZaxis()->SetTitleFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe->Add(be0fe8de7dbb4fdbb40b52c736bd49fe,"hist");
   
   TH1D *f88e8668ac4d4efd9776639e0274e7f5 = new TH1D("f88e8668ac4d4efd9776639e0274e7f5","Charge mis-id",1,0,300);
   f88e8668ac4d4efd9776639e0274e7f5->SetBinContent(1,13.05117);
   f88e8668ac4d4efd9776639e0274e7f5->SetBinContent(2,0.1075093);
   f88e8668ac4d4efd9776639e0274e7f5->SetBinError(1,0.1741367);
   f88e8668ac4d4efd9776639e0274e7f5->SetBinError(2,0.01770257);
   f88e8668ac4d4efd9776639e0274e7f5->SetEntries(5621.271);

   ci = TColor::GetColor("#9999cc");
   f88e8668ac4d4efd9776639e0274e7f5->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   f88e8668ac4d4efd9776639e0274e7f5->SetLineColor(ci);
   f88e8668ac4d4efd9776639e0274e7f5->SetMarkerStyle(20);
   f88e8668ac4d4efd9776639e0274e7f5->GetXaxis()->SetLabelFont(42);
   f88e8668ac4d4efd9776639e0274e7f5->GetXaxis()->SetLabelSize(0.035);
   f88e8668ac4d4efd9776639e0274e7f5->GetXaxis()->SetTitleSize(0.035);
   f88e8668ac4d4efd9776639e0274e7f5->GetXaxis()->SetTitleFont(42);
   f88e8668ac4d4efd9776639e0274e7f5->GetYaxis()->SetLabelFont(42);
   f88e8668ac4d4efd9776639e0274e7f5->GetYaxis()->SetLabelSize(0.035);
   f88e8668ac4d4efd9776639e0274e7f5->GetYaxis()->SetTitleSize(0.035);
   f88e8668ac4d4efd9776639e0274e7f5->GetYaxis()->SetTitleFont(42);
   f88e8668ac4d4efd9776639e0274e7f5->GetZaxis()->SetLabelFont(42);
   f88e8668ac4d4efd9776639e0274e7f5->GetZaxis()->SetLabelSize(0.035);
   f88e8668ac4d4efd9776639e0274e7f5->GetZaxis()->SetTitleSize(0.035);
   f88e8668ac4d4efd9776639e0274e7f5->GetZaxis()->SetTitleFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe->Add(f88e8668ac4d4efd9776639e0274e7f5,"hist");
   
   TH1D *cef48d7cec3e444888ab9db7da074026 = new TH1D("cef48d7cec3e444888ab9db7da074026","WZ#rightarrow3l",1,0,300);
   cef48d7cec3e444888ab9db7da074026->SetBinContent(1,3.446621);
   cef48d7cec3e444888ab9db7da074026->SetBinContent(2,0.0633532);
   cef48d7cec3e444888ab9db7da074026->SetBinError(1,0.1499852);
   cef48d7cec3e444888ab9db7da074026->SetBinError(2,0.02034898);
   cef48d7cec3e444888ab9db7da074026->SetEntries(528.0684);

   ci = TColor::GetColor("#dc322f");
   cef48d7cec3e444888ab9db7da074026->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   cef48d7cec3e444888ab9db7da074026->SetLineColor(ci);
   cef48d7cec3e444888ab9db7da074026->GetXaxis()->SetLabelFont(42);
   cef48d7cec3e444888ab9db7da074026->GetXaxis()->SetLabelSize(0.035);
   cef48d7cec3e444888ab9db7da074026->GetXaxis()->SetTitleSize(0.035);
   cef48d7cec3e444888ab9db7da074026->GetXaxis()->SetTitleFont(42);
   cef48d7cec3e444888ab9db7da074026->GetYaxis()->SetLabelFont(42);
   cef48d7cec3e444888ab9db7da074026->GetYaxis()->SetLabelSize(0.035);
   cef48d7cec3e444888ab9db7da074026->GetYaxis()->SetTitleSize(0.035);
   cef48d7cec3e444888ab9db7da074026->GetYaxis()->SetTitleFont(42);
   cef48d7cec3e444888ab9db7da074026->GetZaxis()->SetLabelFont(42);
   cef48d7cec3e444888ab9db7da074026->GetZaxis()->SetLabelSize(0.035);
   cef48d7cec3e444888ab9db7da074026->GetZaxis()->SetTitleSize(0.035);
   cef48d7cec3e444888ab9db7da074026->GetZaxis()->SetTitleFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe->Add(cef48d7cec3e444888ab9db7da074026,"hist");
   
   TH1D *e25c3749af604a74ad1ca7cc2dccf4d4 = new TH1D("e25c3749af604a74ad1ca7cc2dccf4d4","WZ#rightarrowl#tau#tau",1,0,300);
   e25c3749af604a74ad1ca7cc2dccf4d4->SetBinContent(1,1.14784);
   e25c3749af604a74ad1ca7cc2dccf4d4->SetBinContent(2,0.01406071);
   e25c3749af604a74ad1ca7cc2dccf4d4->SetBinError(1,0.08662427);
   e25c3749af604a74ad1ca7cc2dccf4d4->SetBinError(2,0.009394938);
   e25c3749af604a74ad1ca7cc2dccf4d4->SetEntries(175.5835);

   ci = TColor::GetColor("#268bd2");
   e25c3749af604a74ad1ca7cc2dccf4d4->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   e25c3749af604a74ad1ca7cc2dccf4d4->SetLineColor(ci);
   e25c3749af604a74ad1ca7cc2dccf4d4->GetXaxis()->SetLabelFont(42);
   e25c3749af604a74ad1ca7cc2dccf4d4->GetXaxis()->SetLabelSize(0.035);
   e25c3749af604a74ad1ca7cc2dccf4d4->GetXaxis()->SetTitleSize(0.035);
   e25c3749af604a74ad1ca7cc2dccf4d4->GetXaxis()->SetTitleFont(42);
   e25c3749af604a74ad1ca7cc2dccf4d4->GetYaxis()->SetLabelFont(42);
   e25c3749af604a74ad1ca7cc2dccf4d4->GetYaxis()->SetLabelSize(0.035);
   e25c3749af604a74ad1ca7cc2dccf4d4->GetYaxis()->SetTitleSize(0.035);
   e25c3749af604a74ad1ca7cc2dccf4d4->GetYaxis()->SetTitleFont(42);
   e25c3749af604a74ad1ca7cc2dccf4d4->GetZaxis()->SetLabelFont(42);
   e25c3749af604a74ad1ca7cc2dccf4d4->GetZaxis()->SetLabelSize(0.035);
   e25c3749af604a74ad1ca7cc2dccf4d4->GetZaxis()->SetTitleSize(0.035);
   e25c3749af604a74ad1ca7cc2dccf4d4->GetZaxis()->SetTitleFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe->Add(e25c3749af604a74ad1ca7cc2dccf4d4,"hist");
   
   TH1D *13d74b311b01464db2da4b9b36d80e3e = new TH1D("13d74b311b01464db2da4b9b36d80e3e","Reducible bkg.",1,0,300);
   13d74b311b01464db2da4b9b36d80e3e->SetBinContent(0,1e-05);
   13d74b311b01464db2da4b9b36d80e3e->SetBinContent(1,29.71597);
   13d74b311b01464db2da4b9b36d80e3e->SetBinContent(2,0.5153794);
   13d74b311b01464db2da4b9b36d80e3e->SetBinError(0,0.01464174);
   13d74b311b01464db2da4b9b36d80e3e->SetBinError(1,1.481677);
   13d74b311b01464db2da4b9b36d80e3e->SetBinError(2,0.1659032);
   13d74b311b01464db2da4b9b36d80e3e->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   13d74b311b01464db2da4b9b36d80e3e->SetFillColor(ci);
   13d74b311b01464db2da4b9b36d80e3e->SetMarkerStyle(20);
   13d74b311b01464db2da4b9b36d80e3e->GetXaxis()->SetLabelFont(42);
   13d74b311b01464db2da4b9b36d80e3e->GetXaxis()->SetLabelSize(0.035);
   13d74b311b01464db2da4b9b36d80e3e->GetXaxis()->SetTitleSize(0.035);
   13d74b311b01464db2da4b9b36d80e3e->GetXaxis()->SetTitleFont(42);
   13d74b311b01464db2da4b9b36d80e3e->GetYaxis()->SetLabelFont(42);
   13d74b311b01464db2da4b9b36d80e3e->GetYaxis()->SetLabelSize(0.035);
   13d74b311b01464db2da4b9b36d80e3e->GetYaxis()->SetTitleSize(0.035);
   13d74b311b01464db2da4b9b36d80e3e->GetYaxis()->SetTitleFont(42);
   13d74b311b01464db2da4b9b36d80e3e->GetZaxis()->SetLabelFont(42);
   13d74b311b01464db2da4b9b36d80e3e->GetZaxis()->SetLabelSize(0.035);
   13d74b311b01464db2da4b9b36d80e3e->GetZaxis()->SetTitleSize(0.035);
   13d74b311b01464db2da4b9b36d80e3e->GetZaxis()->SetTitleFont(42);
   be0fe8de7dbb4fdbb40b52c736bd49fe->Add(13d74b311b01464db2da4b9b36d80e3e,"hist");
   be0fe8de7dbb4fdbb40b52c736bd49fe->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("be0fe8de7dbb4fdbb40b52c736bd49fe","ZZ","f");

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
   entry=leg->AddEntry("f88e8668ac4d4efd9776639e0274e7f5","Charge mis-id","f");

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
   entry=leg->AddEntry("cef48d7cec3e444888ab9db7da074026","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("e25c3749af604a74ad1ca7cc2dccf4d4","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("13d74b311b01464db2da4b9b36d80e3e","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("d09e5e3306984beb95a46366eac2e1ae","Bkg. Unc.","f");
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
   
   TH1D *d09e5e3306984beb95a46366eac2e1ae = new TH1D("d09e5e3306984beb95a46366eac2e1ae","Bkg. Unc.",1,0,300);
   d09e5e3306984beb95a46366eac2e1ae->SetBinContent(1,47.63506);
   d09e5e3306984beb95a46366eac2e1ae->SetBinError(1,5.695517);
   d09e5e3306984beb95a46366eac2e1ae->SetEntries(1);
   d09e5e3306984beb95a46366eac2e1ae->SetFillColor(1);
   d09e5e3306984beb95a46366eac2e1ae->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   d09e5e3306984beb95a46366eac2e1ae->SetLineColor(ci);
   d09e5e3306984beb95a46366eac2e1ae->SetMarkerSize(0);
   d09e5e3306984beb95a46366eac2e1ae->GetXaxis()->SetLabelFont(42);
   d09e5e3306984beb95a46366eac2e1ae->GetXaxis()->SetLabelSize(0.035);
   d09e5e3306984beb95a46366eac2e1ae->GetXaxis()->SetTitleSize(0.035);
   d09e5e3306984beb95a46366eac2e1ae->GetXaxis()->SetTitleFont(42);
   d09e5e3306984beb95a46366eac2e1ae->GetYaxis()->SetLabelFont(42);
   d09e5e3306984beb95a46366eac2e1ae->GetYaxis()->SetLabelSize(0.035);
   d09e5e3306984beb95a46366eac2e1ae->GetYaxis()->SetTitleSize(0.035);
   d09e5e3306984beb95a46366eac2e1ae->GetYaxis()->SetTitleFont(42);
   d09e5e3306984beb95a46366eac2e1ae->GetZaxis()->SetLabelFont(42);
   d09e5e3306984beb95a46366eac2e1ae->GetZaxis()->SetLabelSize(0.035);
   d09e5e3306984beb95a46366eac2e1ae->GetZaxis()->SetTitleSize(0.035);
   d09e5e3306984beb95a46366eac2e1ae->GetZaxis()->SetTitleFont(42);
   d09e5e3306984beb95a46366eac2e1ae->Draw("hist pe2,same");
   
   TH1D *436ea34d00a342889b42ed42e9d33852 = new TH1D("436ea34d00a342889b42ed42e9d33852","Observed",1,0,300);
   436ea34d00a342889b42ed42e9d33852->SetBinContent(1,50);
   436ea34d00a342889b42ed42e9d33852->SetBinError(1,7.071068);
   436ea34d00a342889b42ed42e9d33852->SetEntries(50);
   436ea34d00a342889b42ed42e9d33852->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   436ea34d00a342889b42ed42e9d33852->SetLineColor(ci);
   436ea34d00a342889b42ed42e9d33852->SetMarkerStyle(20);
   436ea34d00a342889b42ed42e9d33852->GetXaxis()->SetLabelFont(42);
   436ea34d00a342889b42ed42e9d33852->GetXaxis()->SetLabelSize(0.035);
   436ea34d00a342889b42ed42e9d33852->GetXaxis()->SetTitleSize(0.035);
   436ea34d00a342889b42ed42e9d33852->GetXaxis()->SetTitleFont(42);
   436ea34d00a342889b42ed42e9d33852->GetYaxis()->SetLabelFont(42);
   436ea34d00a342889b42ed42e9d33852->GetYaxis()->SetLabelSize(0.035);
   436ea34d00a342889b42ed42e9d33852->GetYaxis()->SetTitleSize(0.035);
   436ea34d00a342889b42ed42e9d33852->GetYaxis()->SetTitleFont(42);
   436ea34d00a342889b42ed42e9d33852->GetZaxis()->SetLabelFont(42);
   436ea34d00a342889b42ed42e9d33852->GetZaxis()->SetLabelSize(0.035);
   436ea34d00a342889b42ed42e9d33852->GetZaxis()->SetTitleSize(0.035);
   436ea34d00a342889b42ed42e9d33852->GetZaxis()->SetTitleFont(42);
   436ea34d00a342889b42ed42e9d33852->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("be0fe8de7dbb4fdbb40b52c736bd49fe","ZZ","f");

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
   entry=leg->AddEntry("f88e8668ac4d4efd9776639e0274e7f5","Charge mis-id","f");

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
   entry=leg->AddEntry("cef48d7cec3e444888ab9db7da074026","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("e25c3749af604a74ad1ca7cc2dccf4d4","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("13d74b311b01464db2da4b9b36d80e3e","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("d09e5e3306984beb95a46366eac2e1ae","Bkg. Unc.","f");
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
