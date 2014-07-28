{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:06:36 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-107.625,337.5,968.625);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *95389c6704084ecb91b42b992b47f3ff = new THStack();
   95389c6704084ecb91b42b992b47f3ff->SetName("95389c6704084ecb91b42b992b47f3ff");
   95389c6704084ecb91b42b992b47f3ff->SetTitle("ZZ");
   95389c6704084ecb91b42b992b47f3ff->SetMaximum(820);
   
   TH1F *95389c6704084ecb91b42b992b47f3ff_stack_9 = new TH1F("95389c6704084ecb91b42b992b47f3ff_stack_9","ZZ",1,0,300);
   95389c6704084ecb91b42b992b47f3ff_stack_9->SetMinimum(0);
   95389c6704084ecb91b42b992b47f3ff_stack_9->SetMaximum(861);
   95389c6704084ecb91b42b992b47f3ff_stack_9->SetDirectory(0);
   95389c6704084ecb91b42b992b47f3ff_stack_9->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   95389c6704084ecb91b42b992b47f3ff_stack_9->SetLineColor(ci);
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetXaxis()->SetLabelFont(42);
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetXaxis()->SetLabelSize(0.035);
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetXaxis()->SetTitleSize(0.035);
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetXaxis()->SetTitleFont(42);
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetYaxis()->SetTitle("Events");
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetYaxis()->SetLabelFont(42);
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetYaxis()->SetLabelSize(0.035);
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetYaxis()->SetTitleSize(0.035);
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetYaxis()->SetTitleFont(42);
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetZaxis()->SetLabelFont(42);
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetZaxis()->SetLabelSize(0.035);
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetZaxis()->SetTitleSize(0.035);
   95389c6704084ecb91b42b992b47f3ff_stack_9->GetZaxis()->SetTitleFont(42);
   95389c6704084ecb91b42b992b47f3ff->SetHistogram(95389c6704084ecb91b42b992b47f3ff_stack_9);
   
   
   TH1D *95389c6704084ecb91b42b992b47f3ff = new TH1D("95389c6704084ecb91b42b992b47f3ff","ZZ",1,0,300);
   95389c6704084ecb91b42b992b47f3ff->SetBinContent(1,2.098818);
   95389c6704084ecb91b42b992b47f3ff->SetBinContent(2,0.0210663);
   95389c6704084ecb91b42b992b47f3ff->SetBinError(1,0.03361882);
   95389c6704084ecb91b42b992b47f3ff->SetBinError(2,0.003327542);
   95389c6704084ecb91b42b992b47f3ff->SetEntries(3897.487);

   ci = TColor::GetColor("#50a634");
   95389c6704084ecb91b42b992b47f3ff->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   95389c6704084ecb91b42b992b47f3ff->SetLineColor(ci);
   95389c6704084ecb91b42b992b47f3ff->GetXaxis()->SetLabelFont(42);
   95389c6704084ecb91b42b992b47f3ff->GetXaxis()->SetLabelSize(0.035);
   95389c6704084ecb91b42b992b47f3ff->GetXaxis()->SetTitleSize(0.035);
   95389c6704084ecb91b42b992b47f3ff->GetXaxis()->SetTitleFont(42);
   95389c6704084ecb91b42b992b47f3ff->GetYaxis()->SetLabelFont(42);
   95389c6704084ecb91b42b992b47f3ff->GetYaxis()->SetLabelSize(0.035);
   95389c6704084ecb91b42b992b47f3ff->GetYaxis()->SetTitleSize(0.035);
   95389c6704084ecb91b42b992b47f3ff->GetYaxis()->SetTitleFont(42);
   95389c6704084ecb91b42b992b47f3ff->GetZaxis()->SetLabelFont(42);
   95389c6704084ecb91b42b992b47f3ff->GetZaxis()->SetLabelSize(0.035);
   95389c6704084ecb91b42b992b47f3ff->GetZaxis()->SetTitleSize(0.035);
   95389c6704084ecb91b42b992b47f3ff->GetZaxis()->SetTitleFont(42);
   95389c6704084ecb91b42b992b47f3ff->Add(95389c6704084ecb91b42b992b47f3ff,"hist");
   
   TH1D *cae3991930fe428c83256ebd9ada8d1e = new TH1D("cae3991930fe428c83256ebd9ada8d1e","Charge mis-id",1,0,300);
   cae3991930fe428c83256ebd9ada8d1e->SetBinContent(1,10.19315);
   cae3991930fe428c83256ebd9ada8d1e->SetBinContent(2,0.05399639);
   cae3991930fe428c83256ebd9ada8d1e->SetBinError(1,0.1376551);
   cae3991930fe428c83256ebd9ada8d1e->SetBinError(2,0.01230171);
   cae3991930fe428c83256ebd9ada8d1e->SetEntries(5485.985);

   ci = TColor::GetColor("#9999cc");
   cae3991930fe428c83256ebd9ada8d1e->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   cae3991930fe428c83256ebd9ada8d1e->SetLineColor(ci);
   cae3991930fe428c83256ebd9ada8d1e->SetMarkerStyle(20);
   cae3991930fe428c83256ebd9ada8d1e->GetXaxis()->SetLabelFont(42);
   cae3991930fe428c83256ebd9ada8d1e->GetXaxis()->SetLabelSize(0.035);
   cae3991930fe428c83256ebd9ada8d1e->GetXaxis()->SetTitleSize(0.035);
   cae3991930fe428c83256ebd9ada8d1e->GetXaxis()->SetTitleFont(42);
   cae3991930fe428c83256ebd9ada8d1e->GetYaxis()->SetLabelFont(42);
   cae3991930fe428c83256ebd9ada8d1e->GetYaxis()->SetLabelSize(0.035);
   cae3991930fe428c83256ebd9ada8d1e->GetYaxis()->SetTitleSize(0.035);
   cae3991930fe428c83256ebd9ada8d1e->GetYaxis()->SetTitleFont(42);
   cae3991930fe428c83256ebd9ada8d1e->GetZaxis()->SetLabelFont(42);
   cae3991930fe428c83256ebd9ada8d1e->GetZaxis()->SetLabelSize(0.035);
   cae3991930fe428c83256ebd9ada8d1e->GetZaxis()->SetTitleSize(0.035);
   cae3991930fe428c83256ebd9ada8d1e->GetZaxis()->SetTitleFont(42);
   95389c6704084ecb91b42b992b47f3ff->Add(cae3991930fe428c83256ebd9ada8d1e,"hist");
   
   TH1D *7ab8fc304d42497abb44daf76e7ae676 = new TH1D("7ab8fc304d42497abb44daf76e7ae676","WZ#rightarrow3l",1,0,300);
   7ab8fc304d42497abb44daf76e7ae676->SetBinContent(1,37.8001);
   7ab8fc304d42497abb44daf76e7ae676->SetBinContent(2,0.6264581);
   7ab8fc304d42497abb44daf76e7ae676->SetBinError(1,0.6335472);
   7ab8fc304d42497abb44daf76e7ae676->SetBinError(2,0.08063577);
   7ab8fc304d42497abb44daf76e7ae676->SetEntries(3559.818);

   ci = TColor::GetColor("#dc322f");
   7ab8fc304d42497abb44daf76e7ae676->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   7ab8fc304d42497abb44daf76e7ae676->SetLineColor(ci);
   7ab8fc304d42497abb44daf76e7ae676->GetXaxis()->SetLabelFont(42);
   7ab8fc304d42497abb44daf76e7ae676->GetXaxis()->SetLabelSize(0.035);
   7ab8fc304d42497abb44daf76e7ae676->GetXaxis()->SetTitleSize(0.035);
   7ab8fc304d42497abb44daf76e7ae676->GetXaxis()->SetTitleFont(42);
   7ab8fc304d42497abb44daf76e7ae676->GetYaxis()->SetLabelFont(42);
   7ab8fc304d42497abb44daf76e7ae676->GetYaxis()->SetLabelSize(0.035);
   7ab8fc304d42497abb44daf76e7ae676->GetYaxis()->SetTitleSize(0.035);
   7ab8fc304d42497abb44daf76e7ae676->GetYaxis()->SetTitleFont(42);
   7ab8fc304d42497abb44daf76e7ae676->GetZaxis()->SetLabelFont(42);
   7ab8fc304d42497abb44daf76e7ae676->GetZaxis()->SetLabelSize(0.035);
   7ab8fc304d42497abb44daf76e7ae676->GetZaxis()->SetTitleSize(0.035);
   7ab8fc304d42497abb44daf76e7ae676->GetZaxis()->SetTitleFont(42);
   95389c6704084ecb91b42b992b47f3ff->Add(7ab8fc304d42497abb44daf76e7ae676,"hist");
   
   TH1D *94800828c42f4a4c96d8be622cb8ab80 = new TH1D("94800828c42f4a4c96d8be622cb8ab80","WZ#rightarrowl#tau#tau",1,0,300);
   94800828c42f4a4c96d8be622cb8ab80->SetBinContent(1,17.57142);
   94800828c42f4a4c96d8be622cb8ab80->SetBinContent(2,0.1048655);
   94800828c42f4a4c96d8be622cb8ab80->SetBinError(1,0.4304974);
   94800828c42f4a4c96d8be622cb8ab80->SetBinError(2,0.03319536);
   94800828c42f4a4c96d8be622cb8ab80->SetEntries(1665.991);

   ci = TColor::GetColor("#268bd2");
   94800828c42f4a4c96d8be622cb8ab80->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   94800828c42f4a4c96d8be622cb8ab80->SetLineColor(ci);
   94800828c42f4a4c96d8be622cb8ab80->GetXaxis()->SetLabelFont(42);
   94800828c42f4a4c96d8be622cb8ab80->GetXaxis()->SetLabelSize(0.035);
   94800828c42f4a4c96d8be622cb8ab80->GetXaxis()->SetTitleSize(0.035);
   94800828c42f4a4c96d8be622cb8ab80->GetXaxis()->SetTitleFont(42);
   94800828c42f4a4c96d8be622cb8ab80->GetYaxis()->SetLabelFont(42);
   94800828c42f4a4c96d8be622cb8ab80->GetYaxis()->SetLabelSize(0.035);
   94800828c42f4a4c96d8be622cb8ab80->GetYaxis()->SetTitleSize(0.035);
   94800828c42f4a4c96d8be622cb8ab80->GetYaxis()->SetTitleFont(42);
   94800828c42f4a4c96d8be622cb8ab80->GetZaxis()->SetLabelFont(42);
   94800828c42f4a4c96d8be622cb8ab80->GetZaxis()->SetLabelSize(0.035);
   94800828c42f4a4c96d8be622cb8ab80->GetZaxis()->SetTitleSize(0.035);
   94800828c42f4a4c96d8be622cb8ab80->GetZaxis()->SetTitleFont(42);
   95389c6704084ecb91b42b992b47f3ff->Add(94800828c42f4a4c96d8be622cb8ab80,"hist");
   
   TH1D *d9a7ac2e68b541bcb9a92737eadf1c81 = new TH1D("d9a7ac2e68b541bcb9a92737eadf1c81","Reducible bkg.",1,0,300);
   d9a7ac2e68b541bcb9a92737eadf1c81->SetBinContent(0,1e-05);
   d9a7ac2e68b541bcb9a92737eadf1c81->SetBinContent(1,309.8445);
   d9a7ac2e68b541bcb9a92737eadf1c81->SetBinContent(2,1.801489);
   d9a7ac2e68b541bcb9a92737eadf1c81->SetBinError(0,0.06682894);
   d9a7ac2e68b541bcb9a92737eadf1c81->SetBinError(1,9.143372);
   d9a7ac2e68b541bcb9a92737eadf1c81->SetBinError(2,0.6214042);
   d9a7ac2e68b541bcb9a92737eadf1c81->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   d9a7ac2e68b541bcb9a92737eadf1c81->SetFillColor(ci);
   d9a7ac2e68b541bcb9a92737eadf1c81->SetMarkerStyle(20);
   d9a7ac2e68b541bcb9a92737eadf1c81->GetXaxis()->SetLabelFont(42);
   d9a7ac2e68b541bcb9a92737eadf1c81->GetXaxis()->SetLabelSize(0.035);
   d9a7ac2e68b541bcb9a92737eadf1c81->GetXaxis()->SetTitleSize(0.035);
   d9a7ac2e68b541bcb9a92737eadf1c81->GetXaxis()->SetTitleFont(42);
   d9a7ac2e68b541bcb9a92737eadf1c81->GetYaxis()->SetLabelFont(42);
   d9a7ac2e68b541bcb9a92737eadf1c81->GetYaxis()->SetLabelSize(0.035);
   d9a7ac2e68b541bcb9a92737eadf1c81->GetYaxis()->SetTitleSize(0.035);
   d9a7ac2e68b541bcb9a92737eadf1c81->GetYaxis()->SetTitleFont(42);
   d9a7ac2e68b541bcb9a92737eadf1c81->GetZaxis()->SetLabelFont(42);
   d9a7ac2e68b541bcb9a92737eadf1c81->GetZaxis()->SetLabelSize(0.035);
   d9a7ac2e68b541bcb9a92737eadf1c81->GetZaxis()->SetTitleSize(0.035);
   d9a7ac2e68b541bcb9a92737eadf1c81->GetZaxis()->SetTitleFont(42);
   95389c6704084ecb91b42b992b47f3ff->Add(d9a7ac2e68b541bcb9a92737eadf1c81,"hist");
   95389c6704084ecb91b42b992b47f3ff->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("95389c6704084ecb91b42b992b47f3ff","ZZ","f");

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
   entry=leg->AddEntry("cae3991930fe428c83256ebd9ada8d1e","Charge mis-id","f");

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
   entry=leg->AddEntry("7ab8fc304d42497abb44daf76e7ae676","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("94800828c42f4a4c96d8be622cb8ab80","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("d9a7ac2e68b541bcb9a92737eadf1c81","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("262beb5f1c39463abe9f4748d0bac3a1","Bkg. Unc.","f");
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
   
   TH1D *262beb5f1c39463abe9f4748d0bac3a1 = new TH1D("262beb5f1c39463abe9f4748d0bac3a1","Bkg. Unc.",1,0,300);
   262beb5f1c39463abe9f4748d0bac3a1->SetBinContent(1,377.508);
   262beb5f1c39463abe9f4748d0bac3a1->SetBinError(1,17.58268);
   262beb5f1c39463abe9f4748d0bac3a1->SetEntries(1);
   262beb5f1c39463abe9f4748d0bac3a1->SetFillColor(1);
   262beb5f1c39463abe9f4748d0bac3a1->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   262beb5f1c39463abe9f4748d0bac3a1->SetLineColor(ci);
   262beb5f1c39463abe9f4748d0bac3a1->SetMarkerSize(0);
   262beb5f1c39463abe9f4748d0bac3a1->GetXaxis()->SetLabelFont(42);
   262beb5f1c39463abe9f4748d0bac3a1->GetXaxis()->SetLabelSize(0.035);
   262beb5f1c39463abe9f4748d0bac3a1->GetXaxis()->SetTitleSize(0.035);
   262beb5f1c39463abe9f4748d0bac3a1->GetXaxis()->SetTitleFont(42);
   262beb5f1c39463abe9f4748d0bac3a1->GetYaxis()->SetLabelFont(42);
   262beb5f1c39463abe9f4748d0bac3a1->GetYaxis()->SetLabelSize(0.035);
   262beb5f1c39463abe9f4748d0bac3a1->GetYaxis()->SetTitleSize(0.035);
   262beb5f1c39463abe9f4748d0bac3a1->GetYaxis()->SetTitleFont(42);
   262beb5f1c39463abe9f4748d0bac3a1->GetZaxis()->SetLabelFont(42);
   262beb5f1c39463abe9f4748d0bac3a1->GetZaxis()->SetLabelSize(0.035);
   262beb5f1c39463abe9f4748d0bac3a1->GetZaxis()->SetTitleSize(0.035);
   262beb5f1c39463abe9f4748d0bac3a1->GetZaxis()->SetTitleFont(42);
   262beb5f1c39463abe9f4748d0bac3a1->Draw("hist pe2,same");
   
   TH1D *86344e1820d64202a86ceb3c57d418df = new TH1D("86344e1820d64202a86ceb3c57d418df","Observed",1,0,300);
   86344e1820d64202a86ceb3c57d418df->SetBinContent(1,410);
   86344e1820d64202a86ceb3c57d418df->SetBinContent(2,9);
   86344e1820d64202a86ceb3c57d418df->SetBinError(1,20.24846);
   86344e1820d64202a86ceb3c57d418df->SetBinError(2,3);
   86344e1820d64202a86ceb3c57d418df->SetEntries(410);
   86344e1820d64202a86ceb3c57d418df->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   86344e1820d64202a86ceb3c57d418df->SetLineColor(ci);
   86344e1820d64202a86ceb3c57d418df->SetMarkerStyle(20);
   86344e1820d64202a86ceb3c57d418df->GetXaxis()->SetLabelFont(42);
   86344e1820d64202a86ceb3c57d418df->GetXaxis()->SetLabelSize(0.035);
   86344e1820d64202a86ceb3c57d418df->GetXaxis()->SetTitleSize(0.035);
   86344e1820d64202a86ceb3c57d418df->GetXaxis()->SetTitleFont(42);
   86344e1820d64202a86ceb3c57d418df->GetYaxis()->SetLabelFont(42);
   86344e1820d64202a86ceb3c57d418df->GetYaxis()->SetLabelSize(0.035);
   86344e1820d64202a86ceb3c57d418df->GetYaxis()->SetTitleSize(0.035);
   86344e1820d64202a86ceb3c57d418df->GetYaxis()->SetTitleFont(42);
   86344e1820d64202a86ceb3c57d418df->GetZaxis()->SetLabelFont(42);
   86344e1820d64202a86ceb3c57d418df->GetZaxis()->SetLabelSize(0.035);
   86344e1820d64202a86ceb3c57d418df->GetZaxis()->SetTitleSize(0.035);
   86344e1820d64202a86ceb3c57d418df->GetZaxis()->SetTitleFont(42);
   86344e1820d64202a86ceb3c57d418df->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("95389c6704084ecb91b42b992b47f3ff","ZZ","f");

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
   entry=leg->AddEntry("cae3991930fe428c83256ebd9ada8d1e","Charge mis-id","f");

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
   entry=leg->AddEntry("7ab8fc304d42497abb44daf76e7ae676","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("94800828c42f4a4c96d8be622cb8ab80","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("d9a7ac2e68b541bcb9a92737eadf1c81","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("262beb5f1c39463abe9f4748d0bac3a1","Bkg. Unc.","f");
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
