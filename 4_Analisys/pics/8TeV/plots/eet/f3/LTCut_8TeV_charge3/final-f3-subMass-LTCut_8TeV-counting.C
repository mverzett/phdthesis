{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 04:12:58 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-51.45,337.5,463.05);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *0edd709930e54ad0987799b534d3d977 = new THStack();
   0edd709930e54ad0987799b534d3d977->SetName("0edd709930e54ad0987799b534d3d977");
   0edd709930e54ad0987799b534d3d977->SetTitle("ZZ");
   0edd709930e54ad0987799b534d3d977->SetMaximum(392);
   
   TH1F *0edd709930e54ad0987799b534d3d977_stack_8 = new TH1F("0edd709930e54ad0987799b534d3d977_stack_8","ZZ",1,0,300);
   0edd709930e54ad0987799b534d3d977_stack_8->SetMinimum(0);
   0edd709930e54ad0987799b534d3d977_stack_8->SetMaximum(411.6);
   0edd709930e54ad0987799b534d3d977_stack_8->SetDirectory(0);
   0edd709930e54ad0987799b534d3d977_stack_8->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   0edd709930e54ad0987799b534d3d977_stack_8->SetLineColor(ci);
   0edd709930e54ad0987799b534d3d977_stack_8->GetXaxis()->SetTitle("m_{e_{2}#tau} (GeV)");
   0edd709930e54ad0987799b534d3d977_stack_8->GetXaxis()->SetLabelFont(42);
   0edd709930e54ad0987799b534d3d977_stack_8->GetXaxis()->SetLabelSize(0.035);
   0edd709930e54ad0987799b534d3d977_stack_8->GetXaxis()->SetTitleSize(0.035);
   0edd709930e54ad0987799b534d3d977_stack_8->GetXaxis()->SetTitleFont(42);
   0edd709930e54ad0987799b534d3d977_stack_8->GetYaxis()->SetTitle("Events");
   0edd709930e54ad0987799b534d3d977_stack_8->GetYaxis()->SetLabelFont(42);
   0edd709930e54ad0987799b534d3d977_stack_8->GetYaxis()->SetLabelSize(0.035);
   0edd709930e54ad0987799b534d3d977_stack_8->GetYaxis()->SetTitleSize(0.035);
   0edd709930e54ad0987799b534d3d977_stack_8->GetYaxis()->SetTitleFont(42);
   0edd709930e54ad0987799b534d3d977_stack_8->GetZaxis()->SetLabelFont(42);
   0edd709930e54ad0987799b534d3d977_stack_8->GetZaxis()->SetLabelSize(0.035);
   0edd709930e54ad0987799b534d3d977_stack_8->GetZaxis()->SetTitleSize(0.035);
   0edd709930e54ad0987799b534d3d977_stack_8->GetZaxis()->SetTitleFont(42);
   0edd709930e54ad0987799b534d3d977->SetHistogram(0edd709930e54ad0987799b534d3d977_stack_8);
   
   
   TH1D *0edd709930e54ad0987799b534d3d977 = new TH1D("0edd709930e54ad0987799b534d3d977","ZZ",1,0,300);
   0edd709930e54ad0987799b534d3d977->SetBinContent(1,0.6333594);
   0edd709930e54ad0987799b534d3d977->SetBinContent(2,0.006593205);
   0edd709930e54ad0987799b534d3d977->SetBinError(1,0.01774134);
   0edd709930e54ad0987799b534d3d977->SetBinError(2,0.00178033);
   0edd709930e54ad0987799b534d3d977->SetEntries(1274.464);

   ci = TColor::GetColor("#50a634");
   0edd709930e54ad0987799b534d3d977->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   0edd709930e54ad0987799b534d3d977->SetLineColor(ci);
   0edd709930e54ad0987799b534d3d977->GetXaxis()->SetLabelFont(42);
   0edd709930e54ad0987799b534d3d977->GetXaxis()->SetLabelSize(0.035);
   0edd709930e54ad0987799b534d3d977->GetXaxis()->SetTitleSize(0.035);
   0edd709930e54ad0987799b534d3d977->GetXaxis()->SetTitleFont(42);
   0edd709930e54ad0987799b534d3d977->GetYaxis()->SetLabelFont(42);
   0edd709930e54ad0987799b534d3d977->GetYaxis()->SetLabelSize(0.035);
   0edd709930e54ad0987799b534d3d977->GetYaxis()->SetTitleSize(0.035);
   0edd709930e54ad0987799b534d3d977->GetYaxis()->SetTitleFont(42);
   0edd709930e54ad0987799b534d3d977->GetZaxis()->SetLabelFont(42);
   0edd709930e54ad0987799b534d3d977->GetZaxis()->SetLabelSize(0.035);
   0edd709930e54ad0987799b534d3d977->GetZaxis()->SetTitleSize(0.035);
   0edd709930e54ad0987799b534d3d977->GetZaxis()->SetTitleFont(42);
   0edd709930e54ad0987799b534d3d977->Add(0edd709930e54ad0987799b534d3d977,"hist");
   
   TH1D *251d4d04cef84f3c8075135a7ed034ff = new TH1D("251d4d04cef84f3c8075135a7ed034ff","Charge mis-id",1,0,300);
   251d4d04cef84f3c8075135a7ed034ff->SetBinContent(1,41.84141);
   251d4d04cef84f3c8075135a7ed034ff->SetBinContent(2,0.3759712);
   251d4d04cef84f3c8075135a7ed034ff->SetBinError(1,0.2703798);
   251d4d04cef84f3c8075135a7ed034ff->SetBinError(2,0.03212198);
   251d4d04cef84f3c8075135a7ed034ff->SetEntries(23993.4);

   ci = TColor::GetColor("#9999cc");
   251d4d04cef84f3c8075135a7ed034ff->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   251d4d04cef84f3c8075135a7ed034ff->SetLineColor(ci);
   251d4d04cef84f3c8075135a7ed034ff->SetMarkerStyle(20);
   251d4d04cef84f3c8075135a7ed034ff->GetXaxis()->SetLabelFont(42);
   251d4d04cef84f3c8075135a7ed034ff->GetXaxis()->SetLabelSize(0.035);
   251d4d04cef84f3c8075135a7ed034ff->GetXaxis()->SetTitleSize(0.035);
   251d4d04cef84f3c8075135a7ed034ff->GetXaxis()->SetTitleFont(42);
   251d4d04cef84f3c8075135a7ed034ff->GetYaxis()->SetLabelFont(42);
   251d4d04cef84f3c8075135a7ed034ff->GetYaxis()->SetLabelSize(0.035);
   251d4d04cef84f3c8075135a7ed034ff->GetYaxis()->SetTitleSize(0.035);
   251d4d04cef84f3c8075135a7ed034ff->GetYaxis()->SetTitleFont(42);
   251d4d04cef84f3c8075135a7ed034ff->GetZaxis()->SetLabelFont(42);
   251d4d04cef84f3c8075135a7ed034ff->GetZaxis()->SetLabelSize(0.035);
   251d4d04cef84f3c8075135a7ed034ff->GetZaxis()->SetTitleSize(0.035);
   251d4d04cef84f3c8075135a7ed034ff->GetZaxis()->SetTitleFont(42);
   0edd709930e54ad0987799b534d3d977->Add(251d4d04cef84f3c8075135a7ed034ff,"hist");
   
   TH1D *0c46f8d52dbb404fa0c8e6002fd09d45 = new TH1D("0c46f8d52dbb404fa0c8e6002fd09d45","WZ#rightarrow3l",1,0,300);
   0c46f8d52dbb404fa0c8e6002fd09d45->SetBinContent(1,9.402999);
   0c46f8d52dbb404fa0c8e6002fd09d45->SetBinContent(2,0.2328459);
   0c46f8d52dbb404fa0c8e6002fd09d45->SetBinError(1,0.3046828);
   0c46f8d52dbb404fa0c8e6002fd09d45->SetBinError(2,0.04924627);
   0c46f8d52dbb404fa0c8e6002fd09d45->SetEntries(952.4384);

   ci = TColor::GetColor("#dc322f");
   0c46f8d52dbb404fa0c8e6002fd09d45->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   0c46f8d52dbb404fa0c8e6002fd09d45->SetLineColor(ci);
   0c46f8d52dbb404fa0c8e6002fd09d45->GetXaxis()->SetLabelFont(42);
   0c46f8d52dbb404fa0c8e6002fd09d45->GetXaxis()->SetLabelSize(0.035);
   0c46f8d52dbb404fa0c8e6002fd09d45->GetXaxis()->SetTitleSize(0.035);
   0c46f8d52dbb404fa0c8e6002fd09d45->GetXaxis()->SetTitleFont(42);
   0c46f8d52dbb404fa0c8e6002fd09d45->GetYaxis()->SetLabelFont(42);
   0c46f8d52dbb404fa0c8e6002fd09d45->GetYaxis()->SetLabelSize(0.035);
   0c46f8d52dbb404fa0c8e6002fd09d45->GetYaxis()->SetTitleSize(0.035);
   0c46f8d52dbb404fa0c8e6002fd09d45->GetYaxis()->SetTitleFont(42);
   0c46f8d52dbb404fa0c8e6002fd09d45->GetZaxis()->SetLabelFont(42);
   0c46f8d52dbb404fa0c8e6002fd09d45->GetZaxis()->SetLabelSize(0.035);
   0c46f8d52dbb404fa0c8e6002fd09d45->GetZaxis()->SetTitleSize(0.035);
   0c46f8d52dbb404fa0c8e6002fd09d45->GetZaxis()->SetTitleFont(42);
   0edd709930e54ad0987799b534d3d977->Add(0c46f8d52dbb404fa0c8e6002fd09d45,"hist");
   
   TH1D *e195feeb555f4c279def5dce12de3fa6 = new TH1D("e195feeb555f4c279def5dce12de3fa6","WZ#rightarrowl#tau#tau",1,0,300);
   e195feeb555f4c279def5dce12de3fa6->SetBinContent(1,3.143939);
   e195feeb555f4c279def5dce12de3fa6->SetBinContent(2,0.02268753);
   e195feeb555f4c279def5dce12de3fa6->SetBinError(1,0.1739949);
   e195feeb555f4c279def5dce12de3fa6->SetBinError(2,0.0160781);
   e195feeb555f4c279def5dce12de3fa6->SetEntries(326.4941);

   ci = TColor::GetColor("#268bd2");
   e195feeb555f4c279def5dce12de3fa6->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   e195feeb555f4c279def5dce12de3fa6->SetLineColor(ci);
   e195feeb555f4c279def5dce12de3fa6->GetXaxis()->SetLabelFont(42);
   e195feeb555f4c279def5dce12de3fa6->GetXaxis()->SetLabelSize(0.035);
   e195feeb555f4c279def5dce12de3fa6->GetXaxis()->SetTitleSize(0.035);
   e195feeb555f4c279def5dce12de3fa6->GetXaxis()->SetTitleFont(42);
   e195feeb555f4c279def5dce12de3fa6->GetYaxis()->SetLabelFont(42);
   e195feeb555f4c279def5dce12de3fa6->GetYaxis()->SetLabelSize(0.035);
   e195feeb555f4c279def5dce12de3fa6->GetYaxis()->SetTitleSize(0.035);
   e195feeb555f4c279def5dce12de3fa6->GetYaxis()->SetTitleFont(42);
   e195feeb555f4c279def5dce12de3fa6->GetZaxis()->SetLabelFont(42);
   e195feeb555f4c279def5dce12de3fa6->GetZaxis()->SetLabelSize(0.035);
   e195feeb555f4c279def5dce12de3fa6->GetZaxis()->SetTitleSize(0.035);
   e195feeb555f4c279def5dce12de3fa6->GetZaxis()->SetTitleFont(42);
   0edd709930e54ad0987799b534d3d977->Add(e195feeb555f4c279def5dce12de3fa6,"hist");
   
   TH1D *311f2fe2150149bfa2fb158aa1eebed5 = new TH1D("311f2fe2150149bfa2fb158aa1eebed5","Reducible bkg.",1,0,300);
   311f2fe2150149bfa2fb158aa1eebed5->SetBinContent(0,1e-05);
   311f2fe2150149bfa2fb158aa1eebed5->SetBinContent(1,114.9912);
   311f2fe2150149bfa2fb158aa1eebed5->SetBinContent(2,2.641975);
   311f2fe2150149bfa2fb158aa1eebed5->SetBinError(0,0.02956335);
   311f2fe2150149bfa2fb158aa1eebed5->SetBinError(1,4.223104);
   311f2fe2150149bfa2fb158aa1eebed5->SetBinError(2,0.6092373);
   311f2fe2150149bfa2fb158aa1eebed5->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   311f2fe2150149bfa2fb158aa1eebed5->SetFillColor(ci);
   311f2fe2150149bfa2fb158aa1eebed5->SetMarkerStyle(20);
   311f2fe2150149bfa2fb158aa1eebed5->GetXaxis()->SetLabelFont(42);
   311f2fe2150149bfa2fb158aa1eebed5->GetXaxis()->SetLabelSize(0.035);
   311f2fe2150149bfa2fb158aa1eebed5->GetXaxis()->SetTitleSize(0.035);
   311f2fe2150149bfa2fb158aa1eebed5->GetXaxis()->SetTitleFont(42);
   311f2fe2150149bfa2fb158aa1eebed5->GetYaxis()->SetLabelFont(42);
   311f2fe2150149bfa2fb158aa1eebed5->GetYaxis()->SetLabelSize(0.035);
   311f2fe2150149bfa2fb158aa1eebed5->GetYaxis()->SetTitleSize(0.035);
   311f2fe2150149bfa2fb158aa1eebed5->GetYaxis()->SetTitleFont(42);
   311f2fe2150149bfa2fb158aa1eebed5->GetZaxis()->SetLabelFont(42);
   311f2fe2150149bfa2fb158aa1eebed5->GetZaxis()->SetLabelSize(0.035);
   311f2fe2150149bfa2fb158aa1eebed5->GetZaxis()->SetTitleSize(0.035);
   311f2fe2150149bfa2fb158aa1eebed5->GetZaxis()->SetTitleFont(42);
   0edd709930e54ad0987799b534d3d977->Add(311f2fe2150149bfa2fb158aa1eebed5,"hist");
   0edd709930e54ad0987799b534d3d977->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("0edd709930e54ad0987799b534d3d977","ZZ","f");

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
   entry=leg->AddEntry("251d4d04cef84f3c8075135a7ed034ff","Charge mis-id","f");

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
   entry=leg->AddEntry("0c46f8d52dbb404fa0c8e6002fd09d45","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("e195feeb555f4c279def5dce12de3fa6","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("311f2fe2150149bfa2fb158aa1eebed5","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("b7c7d3a7840647eebf7fd2279555a91d","Bkg. Unc.","f");
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
   
   TH1D *b7c7d3a7840647eebf7fd2279555a91d = new TH1D("b7c7d3a7840647eebf7fd2279555a91d","Bkg. Unc.",1,0,300);
   b7c7d3a7840647eebf7fd2279555a91d->SetBinContent(1,170.0129);
   b7c7d3a7840647eebf7fd2279555a91d->SetBinError(1,4.443037);
   b7c7d3a7840647eebf7fd2279555a91d->SetEntries(1);
   b7c7d3a7840647eebf7fd2279555a91d->SetFillColor(1);
   b7c7d3a7840647eebf7fd2279555a91d->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   b7c7d3a7840647eebf7fd2279555a91d->SetLineColor(ci);
   b7c7d3a7840647eebf7fd2279555a91d->SetMarkerSize(0);
   b7c7d3a7840647eebf7fd2279555a91d->GetXaxis()->SetLabelFont(42);
   b7c7d3a7840647eebf7fd2279555a91d->GetXaxis()->SetLabelSize(0.035);
   b7c7d3a7840647eebf7fd2279555a91d->GetXaxis()->SetTitleSize(0.035);
   b7c7d3a7840647eebf7fd2279555a91d->GetXaxis()->SetTitleFont(42);
   b7c7d3a7840647eebf7fd2279555a91d->GetYaxis()->SetLabelFont(42);
   b7c7d3a7840647eebf7fd2279555a91d->GetYaxis()->SetLabelSize(0.035);
   b7c7d3a7840647eebf7fd2279555a91d->GetYaxis()->SetTitleSize(0.035);
   b7c7d3a7840647eebf7fd2279555a91d->GetYaxis()->SetTitleFont(42);
   b7c7d3a7840647eebf7fd2279555a91d->GetZaxis()->SetLabelFont(42);
   b7c7d3a7840647eebf7fd2279555a91d->GetZaxis()->SetLabelSize(0.035);
   b7c7d3a7840647eebf7fd2279555a91d->GetZaxis()->SetTitleSize(0.035);
   b7c7d3a7840647eebf7fd2279555a91d->GetZaxis()->SetTitleFont(42);
   b7c7d3a7840647eebf7fd2279555a91d->Draw("hist pe2,same");
   
   TH1D *db964de3b5474ac9aa133cda5a3117de = new TH1D("db964de3b5474ac9aa133cda5a3117de","Observed",1,0,300);
   db964de3b5474ac9aa133cda5a3117de->SetBinContent(1,196);
   db964de3b5474ac9aa133cda5a3117de->SetBinContent(2,5);
   db964de3b5474ac9aa133cda5a3117de->SetBinError(1,14);
   db964de3b5474ac9aa133cda5a3117de->SetBinError(2,2.236068);
   db964de3b5474ac9aa133cda5a3117de->SetEntries(196);
   db964de3b5474ac9aa133cda5a3117de->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   db964de3b5474ac9aa133cda5a3117de->SetLineColor(ci);
   db964de3b5474ac9aa133cda5a3117de->SetMarkerStyle(20);
   db964de3b5474ac9aa133cda5a3117de->GetXaxis()->SetLabelFont(42);
   db964de3b5474ac9aa133cda5a3117de->GetXaxis()->SetLabelSize(0.035);
   db964de3b5474ac9aa133cda5a3117de->GetXaxis()->SetTitleSize(0.035);
   db964de3b5474ac9aa133cda5a3117de->GetXaxis()->SetTitleFont(42);
   db964de3b5474ac9aa133cda5a3117de->GetYaxis()->SetLabelFont(42);
   db964de3b5474ac9aa133cda5a3117de->GetYaxis()->SetLabelSize(0.035);
   db964de3b5474ac9aa133cda5a3117de->GetYaxis()->SetTitleSize(0.035);
   db964de3b5474ac9aa133cda5a3117de->GetYaxis()->SetTitleFont(42);
   db964de3b5474ac9aa133cda5a3117de->GetZaxis()->SetLabelFont(42);
   db964de3b5474ac9aa133cda5a3117de->GetZaxis()->SetLabelSize(0.035);
   db964de3b5474ac9aa133cda5a3117de->GetZaxis()->SetTitleSize(0.035);
   db964de3b5474ac9aa133cda5a3117de->GetZaxis()->SetTitleFont(42);
   db964de3b5474ac9aa133cda5a3117de->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("0edd709930e54ad0987799b534d3d977","ZZ","f");

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
   entry=leg->AddEntry("251d4d04cef84f3c8075135a7ed034ff","Charge mis-id","f");

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
   entry=leg->AddEntry("0c46f8d52dbb404fa0c8e6002fd09d45","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("e195feeb555f4c279def5dce12de3fa6","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("311f2fe2150149bfa2fb158aa1eebed5","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("b7c7d3a7840647eebf7fd2279555a91d","Bkg. Unc.","f");
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
