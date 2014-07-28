{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:01:09 2014) by ROOT version5.32/00
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
   
   THStack *0947b64a90a2431d994e1c1919fb8b06 = new THStack();
   0947b64a90a2431d994e1c1919fb8b06->SetName("0947b64a90a2431d994e1c1919fb8b06");
   0947b64a90a2431d994e1c1919fb8b06->SetTitle("WZ#rightarrow3l");
   0947b64a90a2431d994e1c1919fb8b06->SetMaximum(2.4);
   
   TH1F *0947b64a90a2431d994e1c1919fb8b06_stack_4 = new TH1F("0947b64a90a2431d994e1c1919fb8b06_stack_4","WZ#rightarrow3l",1,0,300);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->SetMinimum(0);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->SetMaximum(2.52);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->SetDirectory(0);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   0947b64a90a2431d994e1c1919fb8b06_stack_4->SetLineColor(ci);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetXaxis()->SetLabelFont(42);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetXaxis()->SetLabelSize(0.035);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetXaxis()->SetTitleSize(0.035);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetXaxis()->SetTitleFont(42);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetYaxis()->SetTitle("Events");
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetYaxis()->SetLabelFont(42);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetYaxis()->SetLabelSize(0.035);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetYaxis()->SetTitleSize(0.035);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetYaxis()->SetTitleFont(42);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetZaxis()->SetLabelFont(42);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetZaxis()->SetLabelSize(0.035);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetZaxis()->SetTitleSize(0.035);
   0947b64a90a2431d994e1c1919fb8b06_stack_4->GetZaxis()->SetTitleFont(42);
   0947b64a90a2431d994e1c1919fb8b06->SetHistogram(0947b64a90a2431d994e1c1919fb8b06_stack_4);
   
   
   TH1D *0947b64a90a2431d994e1c1919fb8b06 = new TH1D("0947b64a90a2431d994e1c1919fb8b06","WZ#rightarrow3l",1,0,300);
   0947b64a90a2431d994e1c1919fb8b06->SetBinContent(1,0.02161656);
   0947b64a90a2431d994e1c1919fb8b06->SetBinError(1,0.01149745);
   0947b64a90a2431d994e1c1919fb8b06->SetEntries(3.534841);

   ci = TColor::GetColor("#dc322f");
   0947b64a90a2431d994e1c1919fb8b06->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   0947b64a90a2431d994e1c1919fb8b06->SetLineColor(ci);
   0947b64a90a2431d994e1c1919fb8b06->GetXaxis()->SetLabelFont(42);
   0947b64a90a2431d994e1c1919fb8b06->GetXaxis()->SetLabelSize(0.035);
   0947b64a90a2431d994e1c1919fb8b06->GetXaxis()->SetTitleSize(0.035);
   0947b64a90a2431d994e1c1919fb8b06->GetXaxis()->SetTitleFont(42);
   0947b64a90a2431d994e1c1919fb8b06->GetYaxis()->SetLabelFont(42);
   0947b64a90a2431d994e1c1919fb8b06->GetYaxis()->SetLabelSize(0.035);
   0947b64a90a2431d994e1c1919fb8b06->GetYaxis()->SetTitleSize(0.035);
   0947b64a90a2431d994e1c1919fb8b06->GetYaxis()->SetTitleFont(42);
   0947b64a90a2431d994e1c1919fb8b06->GetZaxis()->SetLabelFont(42);
   0947b64a90a2431d994e1c1919fb8b06->GetZaxis()->SetLabelSize(0.035);
   0947b64a90a2431d994e1c1919fb8b06->GetZaxis()->SetTitleSize(0.035);
   0947b64a90a2431d994e1c1919fb8b06->GetZaxis()->SetTitleFont(42);
   0947b64a90a2431d994e1c1919fb8b06->Add(0947b64a90a2431d994e1c1919fb8b06,"hist");
   
   TH1D *feeabade0c9f406e8ee5590cd72e2f33 = new TH1D("feeabade0c9f406e8ee5590cd72e2f33","ZZ",1,0,300);
   feeabade0c9f406e8ee5590cd72e2f33->SetBinContent(1,0.01029225);
   feeabade0c9f406e8ee5590cd72e2f33->SetBinError(1,0.002888961);
   feeabade0c9f406e8ee5590cd72e2f33->SetEntries(12.69222);

   ci = TColor::GetColor("#50a634");
   feeabade0c9f406e8ee5590cd72e2f33->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   feeabade0c9f406e8ee5590cd72e2f33->SetLineColor(ci);
   feeabade0c9f406e8ee5590cd72e2f33->GetXaxis()->SetLabelFont(42);
   feeabade0c9f406e8ee5590cd72e2f33->GetXaxis()->SetLabelSize(0.035);
   feeabade0c9f406e8ee5590cd72e2f33->GetXaxis()->SetTitleSize(0.035);
   feeabade0c9f406e8ee5590cd72e2f33->GetXaxis()->SetTitleFont(42);
   feeabade0c9f406e8ee5590cd72e2f33->GetYaxis()->SetLabelFont(42);
   feeabade0c9f406e8ee5590cd72e2f33->GetYaxis()->SetLabelSize(0.035);
   feeabade0c9f406e8ee5590cd72e2f33->GetYaxis()->SetTitleSize(0.035);
   feeabade0c9f406e8ee5590cd72e2f33->GetYaxis()->SetTitleFont(42);
   feeabade0c9f406e8ee5590cd72e2f33->GetZaxis()->SetLabelFont(42);
   feeabade0c9f406e8ee5590cd72e2f33->GetZaxis()->SetLabelSize(0.035);
   feeabade0c9f406e8ee5590cd72e2f33->GetZaxis()->SetTitleSize(0.035);
   feeabade0c9f406e8ee5590cd72e2f33->GetZaxis()->SetTitleFont(42);
   0947b64a90a2431d994e1c1919fb8b06->Add(feeabade0c9f406e8ee5590cd72e2f33,"hist");
   
   TH1D *3220a100faa94cd7a1b4f89a37d40494 = new TH1D("3220a100faa94cd7a1b4f89a37d40494","Charge mis-id",1,0,300);
   3220a100faa94cd7a1b4f89a37d40494->SetBinContent(1,0.5587287);
   3220a100faa94cd7a1b4f89a37d40494->SetBinError(1,0.03512777);
   3220a100faa94cd7a1b4f89a37d40494->SetEntries(253.2261);

   ci = TColor::GetColor("#9999cc");
   3220a100faa94cd7a1b4f89a37d40494->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   3220a100faa94cd7a1b4f89a37d40494->SetLineColor(ci);
   3220a100faa94cd7a1b4f89a37d40494->SetMarkerStyle(20);
   3220a100faa94cd7a1b4f89a37d40494->GetXaxis()->SetLabelFont(42);
   3220a100faa94cd7a1b4f89a37d40494->GetXaxis()->SetLabelSize(0.035);
   3220a100faa94cd7a1b4f89a37d40494->GetXaxis()->SetTitleSize(0.035);
   3220a100faa94cd7a1b4f89a37d40494->GetXaxis()->SetTitleFont(42);
   3220a100faa94cd7a1b4f89a37d40494->GetYaxis()->SetLabelFont(42);
   3220a100faa94cd7a1b4f89a37d40494->GetYaxis()->SetLabelSize(0.035);
   3220a100faa94cd7a1b4f89a37d40494->GetYaxis()->SetTitleSize(0.035);
   3220a100faa94cd7a1b4f89a37d40494->GetYaxis()->SetTitleFont(42);
   3220a100faa94cd7a1b4f89a37d40494->GetZaxis()->SetLabelFont(42);
   3220a100faa94cd7a1b4f89a37d40494->GetZaxis()->SetLabelSize(0.035);
   3220a100faa94cd7a1b4f89a37d40494->GetZaxis()->SetTitleSize(0.035);
   3220a100faa94cd7a1b4f89a37d40494->GetZaxis()->SetTitleFont(42);
   0947b64a90a2431d994e1c1919fb8b06->Add(3220a100faa94cd7a1b4f89a37d40494,"hist");
   
   TH1D *e1f9d50689ec4616ac9b9d1cd6b212b1 = new TH1D("e1f9d50689ec4616ac9b9d1cd6b212b1","WZ#rightarrowl#tau#tau",1,0,300);
   e1f9d50689ec4616ac9b9d1cd6b212b1->SetBinContent(1,0.01630963);
   e1f9d50689ec4616ac9b9d1cd6b212b1->SetBinError(1,0.00955427);
   e1f9d50689ec4616ac9b9d1cd6b212b1->SetEntries(2.914025);

   ci = TColor::GetColor("#268bd2");
   e1f9d50689ec4616ac9b9d1cd6b212b1->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   e1f9d50689ec4616ac9b9d1cd6b212b1->SetLineColor(ci);
   e1f9d50689ec4616ac9b9d1cd6b212b1->GetXaxis()->SetLabelFont(42);
   e1f9d50689ec4616ac9b9d1cd6b212b1->GetXaxis()->SetLabelSize(0.035);
   e1f9d50689ec4616ac9b9d1cd6b212b1->GetXaxis()->SetTitleSize(0.035);
   e1f9d50689ec4616ac9b9d1cd6b212b1->GetXaxis()->SetTitleFont(42);
   e1f9d50689ec4616ac9b9d1cd6b212b1->GetYaxis()->SetLabelFont(42);
   e1f9d50689ec4616ac9b9d1cd6b212b1->GetYaxis()->SetLabelSize(0.035);
   e1f9d50689ec4616ac9b9d1cd6b212b1->GetYaxis()->SetTitleSize(0.035);
   e1f9d50689ec4616ac9b9d1cd6b212b1->GetYaxis()->SetTitleFont(42);
   e1f9d50689ec4616ac9b9d1cd6b212b1->GetZaxis()->SetLabelFont(42);
   e1f9d50689ec4616ac9b9d1cd6b212b1->GetZaxis()->SetLabelSize(0.035);
   e1f9d50689ec4616ac9b9d1cd6b212b1->GetZaxis()->SetTitleSize(0.035);
   e1f9d50689ec4616ac9b9d1cd6b212b1->GetZaxis()->SetTitleFont(42);
   0947b64a90a2431d994e1c1919fb8b06->Add(e1f9d50689ec4616ac9b9d1cd6b212b1,"hist");
   
   TH1D *2e1cc43c65ba42f2b457d3e18d8b3053 = new TH1D("2e1cc43c65ba42f2b457d3e18d8b3053","Reducible bkg.",1,0,300);
   2e1cc43c65ba42f2b457d3e18d8b3053->SetBinContent(0,1e-05);
   2e1cc43c65ba42f2b457d3e18d8b3053->SetBinContent(1,0.9408066);
   2e1cc43c65ba42f2b457d3e18d8b3053->SetBinContent(2,0.00336864);
   2e1cc43c65ba42f2b457d3e18d8b3053->SetBinError(0,0.01851673);
   2e1cc43c65ba42f2b457d3e18d8b3053->SetBinError(1,0.2703057);
   2e1cc43c65ba42f2b457d3e18d8b3053->SetBinError(2,0.002026928);
   2e1cc43c65ba42f2b457d3e18d8b3053->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   2e1cc43c65ba42f2b457d3e18d8b3053->SetFillColor(ci);
   2e1cc43c65ba42f2b457d3e18d8b3053->SetMarkerStyle(20);
   2e1cc43c65ba42f2b457d3e18d8b3053->GetXaxis()->SetLabelFont(42);
   2e1cc43c65ba42f2b457d3e18d8b3053->GetXaxis()->SetLabelSize(0.035);
   2e1cc43c65ba42f2b457d3e18d8b3053->GetXaxis()->SetTitleSize(0.035);
   2e1cc43c65ba42f2b457d3e18d8b3053->GetXaxis()->SetTitleFont(42);
   2e1cc43c65ba42f2b457d3e18d8b3053->GetYaxis()->SetLabelFont(42);
   2e1cc43c65ba42f2b457d3e18d8b3053->GetYaxis()->SetLabelSize(0.035);
   2e1cc43c65ba42f2b457d3e18d8b3053->GetYaxis()->SetTitleSize(0.035);
   2e1cc43c65ba42f2b457d3e18d8b3053->GetYaxis()->SetTitleFont(42);
   2e1cc43c65ba42f2b457d3e18d8b3053->GetZaxis()->SetLabelFont(42);
   2e1cc43c65ba42f2b457d3e18d8b3053->GetZaxis()->SetLabelSize(0.035);
   2e1cc43c65ba42f2b457d3e18d8b3053->GetZaxis()->SetTitleSize(0.035);
   2e1cc43c65ba42f2b457d3e18d8b3053->GetZaxis()->SetTitleFont(42);
   0947b64a90a2431d994e1c1919fb8b06->Add(2e1cc43c65ba42f2b457d3e18d8b3053,"hist");
   
   TH1D *c4bc5d3e8f924080a7969b04f64be85b = new TH1D("c4bc5d3e8f924080a7969b04f64be85b","VH H#rightarrowWW",1,0,300);
   c4bc5d3e8f924080a7969b04f64be85b->SetBinContent(1,0.0002500116);
   c4bc5d3e8f924080a7969b04f64be85b->SetBinError(1,0.0001647382);
   c4bc5d3e8f924080a7969b04f64be85b->SetEntries(2.3032);

   ci = TColor::GetColor("#cb4b16");
   c4bc5d3e8f924080a7969b04f64be85b->SetFillColor(ci);

   ci = TColor::GetColor("#cb4b16");
   c4bc5d3e8f924080a7969b04f64be85b->SetLineColor(ci);
   c4bc5d3e8f924080a7969b04f64be85b->GetXaxis()->SetLabelFont(42);
   c4bc5d3e8f924080a7969b04f64be85b->GetXaxis()->SetLabelSize(0.035);
   c4bc5d3e8f924080a7969b04f64be85b->GetXaxis()->SetTitleSize(0.035);
   c4bc5d3e8f924080a7969b04f64be85b->GetXaxis()->SetTitleFont(42);
   c4bc5d3e8f924080a7969b04f64be85b->GetYaxis()->SetLabelFont(42);
   c4bc5d3e8f924080a7969b04f64be85b->GetYaxis()->SetLabelSize(0.035);
   c4bc5d3e8f924080a7969b04f64be85b->GetYaxis()->SetTitleSize(0.035);
   c4bc5d3e8f924080a7969b04f64be85b->GetYaxis()->SetTitleFont(42);
   c4bc5d3e8f924080a7969b04f64be85b->GetZaxis()->SetLabelFont(42);
   c4bc5d3e8f924080a7969b04f64be85b->GetZaxis()->SetLabelSize(0.035);
   c4bc5d3e8f924080a7969b04f64be85b->GetZaxis()->SetTitleSize(0.035);
   c4bc5d3e8f924080a7969b04f64be85b->GetZaxis()->SetTitleFont(42);
   0947b64a90a2431d994e1c1919fb8b06->Add(c4bc5d3e8f924080a7969b04f64be85b,"hist");
   
   TH1D *48a305393a79498f9ee69b1229e69a7a = new TH1D("48a305393a79498f9ee69b1229e69a7a","(1#times) m_{H} = 125",1,0,300);
   48a305393a79498f9ee69b1229e69a7a->SetBinContent(1,0.003547766);
   48a305393a79498f9ee69b1229e69a7a->SetBinError(1,0.002055336);
   48a305393a79498f9ee69b1229e69a7a->SetEntries(2.979508);
   48a305393a79498f9ee69b1229e69a7a->SetFillColor(1);
   48a305393a79498f9ee69b1229e69a7a->SetFillStyle(0);

   ci = TColor::GetColor("#1c1c76");
   48a305393a79498f9ee69b1229e69a7a->SetLineColor(ci);
   48a305393a79498f9ee69b1229e69a7a->SetLineStyle(2);
   48a305393a79498f9ee69b1229e69a7a->SetLineWidth(4);
   48a305393a79498f9ee69b1229e69a7a->GetXaxis()->SetLabelFont(42);
   48a305393a79498f9ee69b1229e69a7a->GetXaxis()->SetLabelSize(0.035);
   48a305393a79498f9ee69b1229e69a7a->GetXaxis()->SetTitleSize(0.035);
   48a305393a79498f9ee69b1229e69a7a->GetXaxis()->SetTitleFont(42);
   48a305393a79498f9ee69b1229e69a7a->GetYaxis()->SetLabelFont(42);
   48a305393a79498f9ee69b1229e69a7a->GetYaxis()->SetLabelSize(0.035);
   48a305393a79498f9ee69b1229e69a7a->GetYaxis()->SetTitleSize(0.035);
   48a305393a79498f9ee69b1229e69a7a->GetYaxis()->SetTitleFont(42);
   48a305393a79498f9ee69b1229e69a7a->GetZaxis()->SetLabelFont(42);
   48a305393a79498f9ee69b1229e69a7a->GetZaxis()->SetLabelSize(0.035);
   48a305393a79498f9ee69b1229e69a7a->GetZaxis()->SetTitleSize(0.035);
   48a305393a79498f9ee69b1229e69a7a->GetZaxis()->SetTitleFont(42);
   0947b64a90a2431d994e1c1919fb8b06->Add(48a305393a79498f9ee69b1229e69a7a,"hist");
   0947b64a90a2431d994e1c1919fb8b06->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.31,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("0947b64a90a2431d994e1c1919fb8b06","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("feeabade0c9f406e8ee5590cd72e2f33","ZZ","f");

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
   entry=leg->AddEntry("3220a100faa94cd7a1b4f89a37d40494","Charge mis-id","f");

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
   entry=leg->AddEntry("e1f9d50689ec4616ac9b9d1cd6b212b1","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("2e1cc43c65ba42f2b457d3e18d8b3053","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("c4bc5d3e8f924080a7969b04f64be85b","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("48a305393a79498f9ee69b1229e69a7a","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("835c0b913d3c44e0a64cb7e75daac5d7","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_df61989a357747c3a42015998c2a4a5f","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *835c0b913d3c44e0a64cb7e75daac5d7 = new TH1D("835c0b913d3c44e0a64cb7e75daac5d7","Bkg. Unc.",1,0,300);
   835c0b913d3c44e0a64cb7e75daac5d7->SetBinContent(1,1.547754);
   835c0b913d3c44e0a64cb7e75daac5d7->SetBinError(1,0.9414699);
   835c0b913d3c44e0a64cb7e75daac5d7->SetEntries(1);
   835c0b913d3c44e0a64cb7e75daac5d7->SetFillColor(1);
   835c0b913d3c44e0a64cb7e75daac5d7->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   835c0b913d3c44e0a64cb7e75daac5d7->SetLineColor(ci);
   835c0b913d3c44e0a64cb7e75daac5d7->SetMarkerSize(0);
   835c0b913d3c44e0a64cb7e75daac5d7->GetXaxis()->SetLabelFont(42);
   835c0b913d3c44e0a64cb7e75daac5d7->GetXaxis()->SetLabelSize(0.035);
   835c0b913d3c44e0a64cb7e75daac5d7->GetXaxis()->SetTitleSize(0.035);
   835c0b913d3c44e0a64cb7e75daac5d7->GetXaxis()->SetTitleFont(42);
   835c0b913d3c44e0a64cb7e75daac5d7->GetYaxis()->SetLabelFont(42);
   835c0b913d3c44e0a64cb7e75daac5d7->GetYaxis()->SetLabelSize(0.035);
   835c0b913d3c44e0a64cb7e75daac5d7->GetYaxis()->SetTitleSize(0.035);
   835c0b913d3c44e0a64cb7e75daac5d7->GetYaxis()->SetTitleFont(42);
   835c0b913d3c44e0a64cb7e75daac5d7->GetZaxis()->SetLabelFont(42);
   835c0b913d3c44e0a64cb7e75daac5d7->GetZaxis()->SetLabelSize(0.035);
   835c0b913d3c44e0a64cb7e75daac5d7->GetZaxis()->SetTitleSize(0.035);
   835c0b913d3c44e0a64cb7e75daac5d7->GetZaxis()->SetTitleFont(42);
   835c0b913d3c44e0a64cb7e75daac5d7->Draw("hist pe2,same");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1);
   grae->SetName("Graph_from_df61989a357747c3a42015998c2a4a5f");
   grae->SetTitle("Observed");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   grae->SetLineColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,150,2);
   grae->SetPointError(0,0,0,1.29183,2.63791);
   
   TH1F *Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4 = new TH1F("Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4","Observed",100,149.9,151.1);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->SetMinimum(0.3151964);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->SetMaximum(5.030884);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->SetDirectory(0);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->SetLineColor(ci);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_df61989a357747c3a42015998c2a4a5f4);
   
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
   entry=leg->AddEntry("0947b64a90a2431d994e1c1919fb8b06","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("feeabade0c9f406e8ee5590cd72e2f33","ZZ","f");

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
   entry=leg->AddEntry("3220a100faa94cd7a1b4f89a37d40494","Charge mis-id","f");

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
   entry=leg->AddEntry("e1f9d50689ec4616ac9b9d1cd6b212b1","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("2e1cc43c65ba42f2b457d3e18d8b3053","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("c4bc5d3e8f924080a7969b04f64be85b","VH H#rightarrowWW","f");

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
   entry=leg->AddEntry("48a305393a79498f9ee69b1229e69a7a","(1#times) m_{H} = 125","l");

   ci = TColor::GetColor("#1c1c76");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("835c0b913d3c44e0a64cb7e75daac5d7","Bkg. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph_from_df61989a357747c3a42015998c2a4a5f","Observed","P");
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
