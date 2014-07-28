{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 03:54:30 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-21.7875,337.5,196.0875);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *83ef28c211654a079cea633c12e1d4c5 = new THStack();
   83ef28c211654a079cea633c12e1d4c5->SetName("83ef28c211654a079cea633c12e1d4c5");
   83ef28c211654a079cea633c12e1d4c5->SetTitle("ZZ");
   83ef28c211654a079cea633c12e1d4c5->SetMaximum(166);
   
   TH1F *83ef28c211654a079cea633c12e1d4c5_stack_9 = new TH1F("83ef28c211654a079cea633c12e1d4c5_stack_9","ZZ",1,0,300);
   83ef28c211654a079cea633c12e1d4c5_stack_9->SetMinimum(0);
   83ef28c211654a079cea633c12e1d4c5_stack_9->SetMaximum(174.3);
   83ef28c211654a079cea633c12e1d4c5_stack_9->SetDirectory(0);
   83ef28c211654a079cea633c12e1d4c5_stack_9->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   83ef28c211654a079cea633c12e1d4c5_stack_9->SetLineColor(ci);
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetXaxis()->SetLabelFont(42);
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetXaxis()->SetLabelSize(0.035);
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetXaxis()->SetTitleSize(0.035);
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetXaxis()->SetTitleFont(42);
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetYaxis()->SetTitle("Events");
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetYaxis()->SetLabelFont(42);
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetYaxis()->SetLabelSize(0.035);
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetYaxis()->SetTitleSize(0.035);
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetYaxis()->SetTitleFont(42);
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetZaxis()->SetLabelFont(42);
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetZaxis()->SetLabelSize(0.035);
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetZaxis()->SetTitleSize(0.035);
   83ef28c211654a079cea633c12e1d4c5_stack_9->GetZaxis()->SetTitleFont(42);
   83ef28c211654a079cea633c12e1d4c5->SetHistogram(83ef28c211654a079cea633c12e1d4c5_stack_9);
   
   
   TH1D *83ef28c211654a079cea633c12e1d4c5 = new TH1D("83ef28c211654a079cea633c12e1d4c5","ZZ",1,0,300);
   83ef28c211654a079cea633c12e1d4c5->SetBinContent(1,0.9134959);
   83ef28c211654a079cea633c12e1d4c5->SetBinContent(2,0.006910645);
   83ef28c211654a079cea633c12e1d4c5->SetBinError(1,0.02685553);
   83ef28c211654a079cea633c12e1d4c5->SetBinError(2,0.002353327);
   83ef28c211654a079cea633c12e1d4c5->SetEntries(1157.033);

   ci = TColor::GetColor("#50a634");
   83ef28c211654a079cea633c12e1d4c5->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   83ef28c211654a079cea633c12e1d4c5->SetLineColor(ci);
   83ef28c211654a079cea633c12e1d4c5->GetXaxis()->SetLabelFont(42);
   83ef28c211654a079cea633c12e1d4c5->GetXaxis()->SetLabelSize(0.035);
   83ef28c211654a079cea633c12e1d4c5->GetXaxis()->SetTitleSize(0.035);
   83ef28c211654a079cea633c12e1d4c5->GetXaxis()->SetTitleFont(42);
   83ef28c211654a079cea633c12e1d4c5->GetYaxis()->SetLabelFont(42);
   83ef28c211654a079cea633c12e1d4c5->GetYaxis()->SetLabelSize(0.035);
   83ef28c211654a079cea633c12e1d4c5->GetYaxis()->SetTitleSize(0.035);
   83ef28c211654a079cea633c12e1d4c5->GetYaxis()->SetTitleFont(42);
   83ef28c211654a079cea633c12e1d4c5->GetZaxis()->SetLabelFont(42);
   83ef28c211654a079cea633c12e1d4c5->GetZaxis()->SetLabelSize(0.035);
   83ef28c211654a079cea633c12e1d4c5->GetZaxis()->SetTitleSize(0.035);
   83ef28c211654a079cea633c12e1d4c5->GetZaxis()->SetTitleFont(42);
   83ef28c211654a079cea633c12e1d4c5->Add(83ef28c211654a079cea633c12e1d4c5,"hist");
   
   TH1D *692cd5cf1fee4ada99e75d880c0108f1 = new TH1D("692cd5cf1fee4ada99e75d880c0108f1","Charge mis-id",1,0,300);
   692cd5cf1fee4ada99e75d880c0108f1->SetBinContent(1,2.494009);
   692cd5cf1fee4ada99e75d880c0108f1->SetBinContent(2,0.006844862);
   692cd5cf1fee4ada99e75d880c0108f1->SetBinError(1,0.07398953);
   692cd5cf1fee4ada99e75d880c0108f1->SetBinError(2,0.003546464);
   692cd5cf1fee4ada99e75d880c0108f1->SetEntries(1137.058);

   ci = TColor::GetColor("#9999cc");
   692cd5cf1fee4ada99e75d880c0108f1->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   692cd5cf1fee4ada99e75d880c0108f1->SetLineColor(ci);
   692cd5cf1fee4ada99e75d880c0108f1->SetMarkerStyle(20);
   692cd5cf1fee4ada99e75d880c0108f1->GetXaxis()->SetLabelFont(42);
   692cd5cf1fee4ada99e75d880c0108f1->GetXaxis()->SetLabelSize(0.035);
   692cd5cf1fee4ada99e75d880c0108f1->GetXaxis()->SetTitleSize(0.035);
   692cd5cf1fee4ada99e75d880c0108f1->GetXaxis()->SetTitleFont(42);
   692cd5cf1fee4ada99e75d880c0108f1->GetYaxis()->SetLabelFont(42);
   692cd5cf1fee4ada99e75d880c0108f1->GetYaxis()->SetLabelSize(0.035);
   692cd5cf1fee4ada99e75d880c0108f1->GetYaxis()->SetTitleSize(0.035);
   692cd5cf1fee4ada99e75d880c0108f1->GetYaxis()->SetTitleFont(42);
   692cd5cf1fee4ada99e75d880c0108f1->GetZaxis()->SetLabelFont(42);
   692cd5cf1fee4ada99e75d880c0108f1->GetZaxis()->SetLabelSize(0.035);
   692cd5cf1fee4ada99e75d880c0108f1->GetZaxis()->SetTitleSize(0.035);
   692cd5cf1fee4ada99e75d880c0108f1->GetZaxis()->SetTitleFont(42);
   83ef28c211654a079cea633c12e1d4c5->Add(692cd5cf1fee4ada99e75d880c0108f1,"hist");
   
   TH1D *c77ef3bbec1145b68ac27b53e8ed4c1d = new TH1D("c77ef3bbec1145b68ac27b53e8ed4c1d","WZ#rightarrow3l",1,0,300);
   c77ef3bbec1145b68ac27b53e8ed4c1d->SetBinContent(1,10.32033);
   c77ef3bbec1145b68ac27b53e8ed4c1d->SetBinContent(2,0.1503489);
   c77ef3bbec1145b68ac27b53e8ed4c1d->SetBinError(1,0.2624836);
   c77ef3bbec1145b68ac27b53e8ed4c1d->SetBinError(2,0.0325705);
   c77ef3bbec1145b68ac27b53e8ed4c1d->SetEntries(1545.905);

   ci = TColor::GetColor("#dc322f");
   c77ef3bbec1145b68ac27b53e8ed4c1d->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   c77ef3bbec1145b68ac27b53e8ed4c1d->SetLineColor(ci);
   c77ef3bbec1145b68ac27b53e8ed4c1d->GetXaxis()->SetLabelFont(42);
   c77ef3bbec1145b68ac27b53e8ed4c1d->GetXaxis()->SetLabelSize(0.035);
   c77ef3bbec1145b68ac27b53e8ed4c1d->GetXaxis()->SetTitleSize(0.035);
   c77ef3bbec1145b68ac27b53e8ed4c1d->GetXaxis()->SetTitleFont(42);
   c77ef3bbec1145b68ac27b53e8ed4c1d->GetYaxis()->SetLabelFont(42);
   c77ef3bbec1145b68ac27b53e8ed4c1d->GetYaxis()->SetLabelSize(0.035);
   c77ef3bbec1145b68ac27b53e8ed4c1d->GetYaxis()->SetTitleSize(0.035);
   c77ef3bbec1145b68ac27b53e8ed4c1d->GetYaxis()->SetTitleFont(42);
   c77ef3bbec1145b68ac27b53e8ed4c1d->GetZaxis()->SetLabelFont(42);
   c77ef3bbec1145b68ac27b53e8ed4c1d->GetZaxis()->SetLabelSize(0.035);
   c77ef3bbec1145b68ac27b53e8ed4c1d->GetZaxis()->SetTitleSize(0.035);
   c77ef3bbec1145b68ac27b53e8ed4c1d->GetZaxis()->SetTitleFont(42);
   83ef28c211654a079cea633c12e1d4c5->Add(c77ef3bbec1145b68ac27b53e8ed4c1d,"hist");
   
   TH1D *6e2176bab17746c0a3b31dcb6a0a4ddd = new TH1D("6e2176bab17746c0a3b31dcb6a0a4ddd","WZ#rightarrowl#tau#tau",1,0,300);
   6e2176bab17746c0a3b31dcb6a0a4ddd->SetBinContent(1,4.686391);
   6e2176bab17746c0a3b31dcb6a0a4ddd->SetBinContent(2,6.469742e-06);
   6e2176bab17746c0a3b31dcb6a0a4ddd->SetBinError(1,0.1762319);
   6e2176bab17746c0a3b31dcb6a0a4ddd->SetBinError(2,6.469742e-06);
   6e2176bab17746c0a3b31dcb6a0a4ddd->SetEntries(707.1441);

   ci = TColor::GetColor("#268bd2");
   6e2176bab17746c0a3b31dcb6a0a4ddd->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   6e2176bab17746c0a3b31dcb6a0a4ddd->SetLineColor(ci);
   6e2176bab17746c0a3b31dcb6a0a4ddd->GetXaxis()->SetLabelFont(42);
   6e2176bab17746c0a3b31dcb6a0a4ddd->GetXaxis()->SetLabelSize(0.035);
   6e2176bab17746c0a3b31dcb6a0a4ddd->GetXaxis()->SetTitleSize(0.035);
   6e2176bab17746c0a3b31dcb6a0a4ddd->GetXaxis()->SetTitleFont(42);
   6e2176bab17746c0a3b31dcb6a0a4ddd->GetYaxis()->SetLabelFont(42);
   6e2176bab17746c0a3b31dcb6a0a4ddd->GetYaxis()->SetLabelSize(0.035);
   6e2176bab17746c0a3b31dcb6a0a4ddd->GetYaxis()->SetTitleSize(0.035);
   6e2176bab17746c0a3b31dcb6a0a4ddd->GetYaxis()->SetTitleFont(42);
   6e2176bab17746c0a3b31dcb6a0a4ddd->GetZaxis()->SetLabelFont(42);
   6e2176bab17746c0a3b31dcb6a0a4ddd->GetZaxis()->SetLabelSize(0.035);
   6e2176bab17746c0a3b31dcb6a0a4ddd->GetZaxis()->SetTitleSize(0.035);
   6e2176bab17746c0a3b31dcb6a0a4ddd->GetZaxis()->SetTitleFont(42);
   83ef28c211654a079cea633c12e1d4c5->Add(6e2176bab17746c0a3b31dcb6a0a4ddd,"hist");
   
   TH1D *ac367ad5996e406a8e77be0b33d29106 = new TH1D("ac367ad5996e406a8e77be0b33d29106","Reducible bkg.",1,0,300);
   ac367ad5996e406a8e77be0b33d29106->SetBinContent(0,1e-05);
   ac367ad5996e406a8e77be0b33d29106->SetBinContent(1,41.08433);
   ac367ad5996e406a8e77be0b33d29106->SetBinContent(2,0.4573899);
   ac367ad5996e406a8e77be0b33d29106->SetBinError(0,0.0223957);
   ac367ad5996e406a8e77be0b33d29106->SetBinError(1,2.357722);
   ac367ad5996e406a8e77be0b33d29106->SetBinError(2,0.1837964);
   ac367ad5996e406a8e77be0b33d29106->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   ac367ad5996e406a8e77be0b33d29106->SetFillColor(ci);
   ac367ad5996e406a8e77be0b33d29106->SetMarkerStyle(20);
   ac367ad5996e406a8e77be0b33d29106->GetXaxis()->SetLabelFont(42);
   ac367ad5996e406a8e77be0b33d29106->GetXaxis()->SetLabelSize(0.035);
   ac367ad5996e406a8e77be0b33d29106->GetXaxis()->SetTitleSize(0.035);
   ac367ad5996e406a8e77be0b33d29106->GetXaxis()->SetTitleFont(42);
   ac367ad5996e406a8e77be0b33d29106->GetYaxis()->SetLabelFont(42);
   ac367ad5996e406a8e77be0b33d29106->GetYaxis()->SetLabelSize(0.035);
   ac367ad5996e406a8e77be0b33d29106->GetYaxis()->SetTitleSize(0.035);
   ac367ad5996e406a8e77be0b33d29106->GetYaxis()->SetTitleFont(42);
   ac367ad5996e406a8e77be0b33d29106->GetZaxis()->SetLabelFont(42);
   ac367ad5996e406a8e77be0b33d29106->GetZaxis()->SetLabelSize(0.035);
   ac367ad5996e406a8e77be0b33d29106->GetZaxis()->SetTitleSize(0.035);
   ac367ad5996e406a8e77be0b33d29106->GetZaxis()->SetTitleFont(42);
   83ef28c211654a079cea633c12e1d4c5->Add(ac367ad5996e406a8e77be0b33d29106,"hist");
   83ef28c211654a079cea633c12e1d4c5->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("83ef28c211654a079cea633c12e1d4c5","ZZ","f");

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
   entry=leg->AddEntry("692cd5cf1fee4ada99e75d880c0108f1","Charge mis-id","f");

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
   entry=leg->AddEntry("c77ef3bbec1145b68ac27b53e8ed4c1d","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("6e2176bab17746c0a3b31dcb6a0a4ddd","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("ac367ad5996e406a8e77be0b33d29106","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("3d1112e47b1845af9e48fcfa4196dc61","Bkg. Unc.","f");
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
   
   TH1D *3d1112e47b1845af9e48fcfa4196dc61 = new TH1D("3d1112e47b1845af9e48fcfa4196dc61","Bkg. Unc.",1,0,300);
   3d1112e47b1845af9e48fcfa4196dc61->SetBinContent(1,59.49855);
   3d1112e47b1845af9e48fcfa4196dc61->SetBinError(1,3.125014);
   3d1112e47b1845af9e48fcfa4196dc61->SetEntries(1);
   3d1112e47b1845af9e48fcfa4196dc61->SetFillColor(1);
   3d1112e47b1845af9e48fcfa4196dc61->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   3d1112e47b1845af9e48fcfa4196dc61->SetLineColor(ci);
   3d1112e47b1845af9e48fcfa4196dc61->SetMarkerSize(0);
   3d1112e47b1845af9e48fcfa4196dc61->GetXaxis()->SetLabelFont(42);
   3d1112e47b1845af9e48fcfa4196dc61->GetXaxis()->SetLabelSize(0.035);
   3d1112e47b1845af9e48fcfa4196dc61->GetXaxis()->SetTitleSize(0.035);
   3d1112e47b1845af9e48fcfa4196dc61->GetXaxis()->SetTitleFont(42);
   3d1112e47b1845af9e48fcfa4196dc61->GetYaxis()->SetLabelFont(42);
   3d1112e47b1845af9e48fcfa4196dc61->GetYaxis()->SetLabelSize(0.035);
   3d1112e47b1845af9e48fcfa4196dc61->GetYaxis()->SetTitleSize(0.035);
   3d1112e47b1845af9e48fcfa4196dc61->GetYaxis()->SetTitleFont(42);
   3d1112e47b1845af9e48fcfa4196dc61->GetZaxis()->SetLabelFont(42);
   3d1112e47b1845af9e48fcfa4196dc61->GetZaxis()->SetLabelSize(0.035);
   3d1112e47b1845af9e48fcfa4196dc61->GetZaxis()->SetTitleSize(0.035);
   3d1112e47b1845af9e48fcfa4196dc61->GetZaxis()->SetTitleFont(42);
   3d1112e47b1845af9e48fcfa4196dc61->Draw("hist pe2,same");
   
   TH1D *11657427fc21468daa3cc2e1fc3621cf = new TH1D("11657427fc21468daa3cc2e1fc3621cf","Observed",1,0,300);
   11657427fc21468daa3cc2e1fc3621cf->SetBinContent(1,83);
   11657427fc21468daa3cc2e1fc3621cf->SetBinError(1,9.110434);
   11657427fc21468daa3cc2e1fc3621cf->SetEntries(83);
   11657427fc21468daa3cc2e1fc3621cf->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   11657427fc21468daa3cc2e1fc3621cf->SetLineColor(ci);
   11657427fc21468daa3cc2e1fc3621cf->SetMarkerStyle(20);
   11657427fc21468daa3cc2e1fc3621cf->GetXaxis()->SetLabelFont(42);
   11657427fc21468daa3cc2e1fc3621cf->GetXaxis()->SetLabelSize(0.035);
   11657427fc21468daa3cc2e1fc3621cf->GetXaxis()->SetTitleSize(0.035);
   11657427fc21468daa3cc2e1fc3621cf->GetXaxis()->SetTitleFont(42);
   11657427fc21468daa3cc2e1fc3621cf->GetYaxis()->SetLabelFont(42);
   11657427fc21468daa3cc2e1fc3621cf->GetYaxis()->SetLabelSize(0.035);
   11657427fc21468daa3cc2e1fc3621cf->GetYaxis()->SetTitleSize(0.035);
   11657427fc21468daa3cc2e1fc3621cf->GetYaxis()->SetTitleFont(42);
   11657427fc21468daa3cc2e1fc3621cf->GetZaxis()->SetLabelFont(42);
   11657427fc21468daa3cc2e1fc3621cf->GetZaxis()->SetLabelSize(0.035);
   11657427fc21468daa3cc2e1fc3621cf->GetZaxis()->SetTitleSize(0.035);
   11657427fc21468daa3cc2e1fc3621cf->GetZaxis()->SetTitleFont(42);
   11657427fc21468daa3cc2e1fc3621cf->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("83ef28c211654a079cea633c12e1d4c5","ZZ","f");

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
   entry=leg->AddEntry("692cd5cf1fee4ada99e75d880c0108f1","Charge mis-id","f");

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
   entry=leg->AddEntry("c77ef3bbec1145b68ac27b53e8ed4c1d","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("6e2176bab17746c0a3b31dcb6a0a4ddd","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("ac367ad5996e406a8e77be0b33d29106","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("3d1112e47b1845af9e48fcfa4196dc61","Bkg. Unc.","f");
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
