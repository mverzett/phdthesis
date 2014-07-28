{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:13:09 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-59.27877,337.5,533.5089);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *635bb693f4ec40498c1ab2bb5048eec7 = new THStack();
   635bb693f4ec40498c1ab2bb5048eec7->SetName("635bb693f4ec40498c1ab2bb5048eec7");
   635bb693f4ec40498c1ab2bb5048eec7->SetTitle("ZZ");
   635bb693f4ec40498c1ab2bb5048eec7->SetMaximum(451.6477);
   
   TH1F *635bb693f4ec40498c1ab2bb5048eec7_stack_9 = new TH1F("635bb693f4ec40498c1ab2bb5048eec7_stack_9","ZZ",1,0,300);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->SetMinimum(0);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->SetMaximum(474.2301);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->SetDirectory(0);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->SetLineColor(ci);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetXaxis()->SetLabelFont(42);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetXaxis()->SetLabelSize(0.035);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetXaxis()->SetTitleSize(0.035);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetXaxis()->SetTitleFont(42);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetYaxis()->SetTitle("Events");
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetYaxis()->SetLabelFont(42);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetYaxis()->SetLabelSize(0.035);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetYaxis()->SetTitleSize(0.035);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetYaxis()->SetTitleFont(42);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetZaxis()->SetLabelFont(42);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetZaxis()->SetLabelSize(0.035);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetZaxis()->SetTitleSize(0.035);
   635bb693f4ec40498c1ab2bb5048eec7_stack_9->GetZaxis()->SetTitleFont(42);
   635bb693f4ec40498c1ab2bb5048eec7->SetHistogram(635bb693f4ec40498c1ab2bb5048eec7_stack_9);
   
   
   TH1D *635bb693f4ec40498c1ab2bb5048eec7 = new TH1D("635bb693f4ec40498c1ab2bb5048eec7","ZZ",1,0,300);
   635bb693f4ec40498c1ab2bb5048eec7->SetBinContent(1,0.762213);
   635bb693f4ec40498c1ab2bb5048eec7->SetBinContent(2,0.007160089);
   635bb693f4ec40498c1ab2bb5048eec7->SetBinError(1,0.01934954);
   635bb693f4ec40498c1ab2bb5048eec7->SetBinError(2,0.001904374);
   635bb693f4ec40498c1ab2bb5048eec7->SetEntries(1551.713);

   ci = TColor::GetColor("#50a634");
   635bb693f4ec40498c1ab2bb5048eec7->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   635bb693f4ec40498c1ab2bb5048eec7->SetLineColor(ci);
   635bb693f4ec40498c1ab2bb5048eec7->GetXaxis()->SetLabelFont(42);
   635bb693f4ec40498c1ab2bb5048eec7->GetXaxis()->SetLabelSize(0.035);
   635bb693f4ec40498c1ab2bb5048eec7->GetXaxis()->SetTitleSize(0.035);
   635bb693f4ec40498c1ab2bb5048eec7->GetXaxis()->SetTitleFont(42);
   635bb693f4ec40498c1ab2bb5048eec7->GetYaxis()->SetLabelFont(42);
   635bb693f4ec40498c1ab2bb5048eec7->GetYaxis()->SetLabelSize(0.035);
   635bb693f4ec40498c1ab2bb5048eec7->GetYaxis()->SetTitleSize(0.035);
   635bb693f4ec40498c1ab2bb5048eec7->GetYaxis()->SetTitleFont(42);
   635bb693f4ec40498c1ab2bb5048eec7->GetZaxis()->SetLabelFont(42);
   635bb693f4ec40498c1ab2bb5048eec7->GetZaxis()->SetLabelSize(0.035);
   635bb693f4ec40498c1ab2bb5048eec7->GetZaxis()->SetTitleSize(0.035);
   635bb693f4ec40498c1ab2bb5048eec7->GetZaxis()->SetTitleFont(42);
   635bb693f4ec40498c1ab2bb5048eec7->Add(635bb693f4ec40498c1ab2bb5048eec7,"hist");
   
   TH1D *b0a85d5cae2547298540a5a682ada929 = new TH1D("b0a85d5cae2547298540a5a682ada929","Charge mis-id",1,0,300);
   b0a85d5cae2547298540a5a682ada929->SetBinContent(1,42.75828);
   b0a85d5cae2547298540a5a682ada929->SetBinContent(2,0.3591964);
   b0a85d5cae2547298540a5a682ada929->SetBinError(1,0.2716562);
   b0a85d5cae2547298540a5a682ada929->SetBinError(2,0.03097382);
   b0a85d5cae2547298540a5a682ada929->SetEntries(24785.43);

   ci = TColor::GetColor("#9999cc");
   b0a85d5cae2547298540a5a682ada929->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   b0a85d5cae2547298540a5a682ada929->SetLineColor(ci);
   b0a85d5cae2547298540a5a682ada929->SetMarkerStyle(20);
   b0a85d5cae2547298540a5a682ada929->GetXaxis()->SetLabelFont(42);
   b0a85d5cae2547298540a5a682ada929->GetXaxis()->SetLabelSize(0.035);
   b0a85d5cae2547298540a5a682ada929->GetXaxis()->SetTitleSize(0.035);
   b0a85d5cae2547298540a5a682ada929->GetXaxis()->SetTitleFont(42);
   b0a85d5cae2547298540a5a682ada929->GetYaxis()->SetLabelFont(42);
   b0a85d5cae2547298540a5a682ada929->GetYaxis()->SetLabelSize(0.035);
   b0a85d5cae2547298540a5a682ada929->GetYaxis()->SetTitleSize(0.035);
   b0a85d5cae2547298540a5a682ada929->GetYaxis()->SetTitleFont(42);
   b0a85d5cae2547298540a5a682ada929->GetZaxis()->SetLabelFont(42);
   b0a85d5cae2547298540a5a682ada929->GetZaxis()->SetLabelSize(0.035);
   b0a85d5cae2547298540a5a682ada929->GetZaxis()->SetTitleSize(0.035);
   b0a85d5cae2547298540a5a682ada929->GetZaxis()->SetTitleFont(42);
   635bb693f4ec40498c1ab2bb5048eec7->Add(b0a85d5cae2547298540a5a682ada929,"hist");
   
   TH1D *8970c0c5b84b4f1e986c11cbe1965f08 = new TH1D("8970c0c5b84b4f1e986c11cbe1965f08","WZ#rightarrow3l",1,0,300);
   8970c0c5b84b4f1e986c11cbe1965f08->SetBinContent(1,13.44045);
   8970c0c5b84b4f1e986c11cbe1965f08->SetBinContent(2,0.27702);
   8970c0c5b84b4f1e986c11cbe1965f08->SetBinError(1,0.3648659);
   8970c0c5b84b4f1e986c11cbe1965f08->SetBinError(2,0.0537923);
   8970c0c5b84b4f1e986c11cbe1965f08->SetEntries(1356.941);

   ci = TColor::GetColor("#dc322f");
   8970c0c5b84b4f1e986c11cbe1965f08->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   8970c0c5b84b4f1e986c11cbe1965f08->SetLineColor(ci);
   8970c0c5b84b4f1e986c11cbe1965f08->GetXaxis()->SetLabelFont(42);
   8970c0c5b84b4f1e986c11cbe1965f08->GetXaxis()->SetLabelSize(0.035);
   8970c0c5b84b4f1e986c11cbe1965f08->GetXaxis()->SetTitleSize(0.035);
   8970c0c5b84b4f1e986c11cbe1965f08->GetXaxis()->SetTitleFont(42);
   8970c0c5b84b4f1e986c11cbe1965f08->GetYaxis()->SetLabelFont(42);
   8970c0c5b84b4f1e986c11cbe1965f08->GetYaxis()->SetLabelSize(0.035);
   8970c0c5b84b4f1e986c11cbe1965f08->GetYaxis()->SetTitleSize(0.035);
   8970c0c5b84b4f1e986c11cbe1965f08->GetYaxis()->SetTitleFont(42);
   8970c0c5b84b4f1e986c11cbe1965f08->GetZaxis()->SetLabelFont(42);
   8970c0c5b84b4f1e986c11cbe1965f08->GetZaxis()->SetLabelSize(0.035);
   8970c0c5b84b4f1e986c11cbe1965f08->GetZaxis()->SetTitleSize(0.035);
   8970c0c5b84b4f1e986c11cbe1965f08->GetZaxis()->SetTitleFont(42);
   635bb693f4ec40498c1ab2bb5048eec7->Add(8970c0c5b84b4f1e986c11cbe1965f08,"hist");
   
   TH1D *0d0d81c1b8fb4f61a32b4b7f9fcc57c0 = new TH1D("0d0d81c1b8fb4f61a32b4b7f9fcc57c0","WZ#rightarrowl#tau#tau",1,0,300);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->SetBinContent(1,5.520234);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->SetBinContent(2,0.06906757);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->SetBinError(1,0.2284567);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->SetBinError(2,0.02602361);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->SetEntries(583.8579);

   ci = TColor::GetColor("#268bd2");
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->SetLineColor(ci);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->GetXaxis()->SetLabelFont(42);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->GetXaxis()->SetLabelSize(0.035);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->GetXaxis()->SetTitleSize(0.035);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->GetXaxis()->SetTitleFont(42);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->GetYaxis()->SetLabelFont(42);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->GetYaxis()->SetLabelSize(0.035);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->GetYaxis()->SetTitleSize(0.035);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->GetYaxis()->SetTitleFont(42);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->GetZaxis()->SetLabelFont(42);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->GetZaxis()->SetLabelSize(0.035);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->GetZaxis()->SetTitleSize(0.035);
   0d0d81c1b8fb4f61a32b4b7f9fcc57c0->GetZaxis()->SetTitleFont(42);
   635bb693f4ec40498c1ab2bb5048eec7->Add(0d0d81c1b8fb4f61a32b4b7f9fcc57c0,"hist");
   
   TH1D *92fc86c6b443497fa2f2dcd3eb13aa26 = new TH1D("92fc86c6b443497fa2f2dcd3eb13aa26","Reducible bkg.",1,0,300);
   92fc86c6b443497fa2f2dcd3eb13aa26->SetBinContent(0,1e-05);
   92fc86c6b443497fa2f2dcd3eb13aa26->SetBinContent(1,163.3427);
   92fc86c6b443497fa2f2dcd3eb13aa26->SetBinContent(2,2.348493);
   92fc86c6b443497fa2f2dcd3eb13aa26->SetBinError(0,0.03144419);
   92fc86c6b443497fa2f2dcd3eb13aa26->SetBinError(1,4.78768);
   92fc86c6b443497fa2f2dcd3eb13aa26->SetBinError(2,0.5891897);
   92fc86c6b443497fa2f2dcd3eb13aa26->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   92fc86c6b443497fa2f2dcd3eb13aa26->SetFillColor(ci);
   92fc86c6b443497fa2f2dcd3eb13aa26->SetMarkerStyle(20);
   92fc86c6b443497fa2f2dcd3eb13aa26->GetXaxis()->SetLabelFont(42);
   92fc86c6b443497fa2f2dcd3eb13aa26->GetXaxis()->SetLabelSize(0.035);
   92fc86c6b443497fa2f2dcd3eb13aa26->GetXaxis()->SetTitleSize(0.035);
   92fc86c6b443497fa2f2dcd3eb13aa26->GetXaxis()->SetTitleFont(42);
   92fc86c6b443497fa2f2dcd3eb13aa26->GetYaxis()->SetLabelFont(42);
   92fc86c6b443497fa2f2dcd3eb13aa26->GetYaxis()->SetLabelSize(0.035);
   92fc86c6b443497fa2f2dcd3eb13aa26->GetYaxis()->SetTitleSize(0.035);
   92fc86c6b443497fa2f2dcd3eb13aa26->GetYaxis()->SetTitleFont(42);
   92fc86c6b443497fa2f2dcd3eb13aa26->GetZaxis()->SetLabelFont(42);
   92fc86c6b443497fa2f2dcd3eb13aa26->GetZaxis()->SetLabelSize(0.035);
   92fc86c6b443497fa2f2dcd3eb13aa26->GetZaxis()->SetTitleSize(0.035);
   92fc86c6b443497fa2f2dcd3eb13aa26->GetZaxis()->SetTitleFont(42);
   635bb693f4ec40498c1ab2bb5048eec7->Add(92fc86c6b443497fa2f2dcd3eb13aa26,"hist");
   635bb693f4ec40498c1ab2bb5048eec7->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("635bb693f4ec40498c1ab2bb5048eec7","ZZ","f");

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
   entry=leg->AddEntry("b0a85d5cae2547298540a5a682ada929","Charge mis-id","f");

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
   entry=leg->AddEntry("8970c0c5b84b4f1e986c11cbe1965f08","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("0d0d81c1b8fb4f61a32b4b7f9fcc57c0","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("92fc86c6b443497fa2f2dcd3eb13aa26","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("9e4a15cb0f53467085fd623dccee7f03","Bkg. Unc.","f");
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
   
   TH1D *9e4a15cb0f53467085fd623dccee7f03 = new TH1D("9e4a15cb0f53467085fd623dccee7f03","Bkg. Unc.",1,0,300);
   9e4a15cb0f53467085fd623dccee7f03->SetBinContent(1,225.8239);
   9e4a15cb0f53467085fd623dccee7f03->SetBinError(1,5.157553);
   9e4a15cb0f53467085fd623dccee7f03->SetEntries(1);
   9e4a15cb0f53467085fd623dccee7f03->SetFillColor(1);
   9e4a15cb0f53467085fd623dccee7f03->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   9e4a15cb0f53467085fd623dccee7f03->SetLineColor(ci);
   9e4a15cb0f53467085fd623dccee7f03->SetMarkerSize(0);
   9e4a15cb0f53467085fd623dccee7f03->GetXaxis()->SetLabelFont(42);
   9e4a15cb0f53467085fd623dccee7f03->GetXaxis()->SetLabelSize(0.035);
   9e4a15cb0f53467085fd623dccee7f03->GetXaxis()->SetTitleSize(0.035);
   9e4a15cb0f53467085fd623dccee7f03->GetXaxis()->SetTitleFont(42);
   9e4a15cb0f53467085fd623dccee7f03->GetYaxis()->SetLabelFont(42);
   9e4a15cb0f53467085fd623dccee7f03->GetYaxis()->SetLabelSize(0.035);
   9e4a15cb0f53467085fd623dccee7f03->GetYaxis()->SetTitleSize(0.035);
   9e4a15cb0f53467085fd623dccee7f03->GetYaxis()->SetTitleFont(42);
   9e4a15cb0f53467085fd623dccee7f03->GetZaxis()->SetLabelFont(42);
   9e4a15cb0f53467085fd623dccee7f03->GetZaxis()->SetLabelSize(0.035);
   9e4a15cb0f53467085fd623dccee7f03->GetZaxis()->SetTitleSize(0.035);
   9e4a15cb0f53467085fd623dccee7f03->GetZaxis()->SetTitleFont(42);
   9e4a15cb0f53467085fd623dccee7f03->Draw("hist pe2,same");
   
   TH1D *a65bdd5151fc4f17bb7293f15ed30600 = new TH1D("a65bdd5151fc4f17bb7293f15ed30600","Observed",1,0,300);
   a65bdd5151fc4f17bb7293f15ed30600->SetBinContent(1,223);
   a65bdd5151fc4f17bb7293f15ed30600->SetBinContent(2,4);
   a65bdd5151fc4f17bb7293f15ed30600->SetBinError(1,14.93318);
   a65bdd5151fc4f17bb7293f15ed30600->SetBinError(2,2);
   a65bdd5151fc4f17bb7293f15ed30600->SetEntries(223);
   a65bdd5151fc4f17bb7293f15ed30600->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   a65bdd5151fc4f17bb7293f15ed30600->SetLineColor(ci);
   a65bdd5151fc4f17bb7293f15ed30600->SetMarkerStyle(20);
   a65bdd5151fc4f17bb7293f15ed30600->GetXaxis()->SetLabelFont(42);
   a65bdd5151fc4f17bb7293f15ed30600->GetXaxis()->SetLabelSize(0.035);
   a65bdd5151fc4f17bb7293f15ed30600->GetXaxis()->SetTitleSize(0.035);
   a65bdd5151fc4f17bb7293f15ed30600->GetXaxis()->SetTitleFont(42);
   a65bdd5151fc4f17bb7293f15ed30600->GetYaxis()->SetLabelFont(42);
   a65bdd5151fc4f17bb7293f15ed30600->GetYaxis()->SetLabelSize(0.035);
   a65bdd5151fc4f17bb7293f15ed30600->GetYaxis()->SetTitleSize(0.035);
   a65bdd5151fc4f17bb7293f15ed30600->GetYaxis()->SetTitleFont(42);
   a65bdd5151fc4f17bb7293f15ed30600->GetZaxis()->SetLabelFont(42);
   a65bdd5151fc4f17bb7293f15ed30600->GetZaxis()->SetLabelSize(0.035);
   a65bdd5151fc4f17bb7293f15ed30600->GetZaxis()->SetTitleSize(0.035);
   a65bdd5151fc4f17bb7293f15ed30600->GetZaxis()->SetTitleFont(42);
   a65bdd5151fc4f17bb7293f15ed30600->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("635bb693f4ec40498c1ab2bb5048eec7","ZZ","f");

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
   entry=leg->AddEntry("b0a85d5cae2547298540a5a682ada929","Charge mis-id","f");

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
   entry=leg->AddEntry("8970c0c5b84b4f1e986c11cbe1965f08","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("0d0d81c1b8fb4f61a32b4b7f9fcc57c0","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("92fc86c6b443497fa2f2dcd3eb13aa26","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("9e4a15cb0f53467085fd623dccee7f03","Bkg. Unc.","f");
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
