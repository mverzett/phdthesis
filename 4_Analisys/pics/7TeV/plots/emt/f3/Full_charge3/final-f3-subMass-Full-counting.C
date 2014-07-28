{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 03:55:06 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-14.7,337.5,132.3);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *f881d8d602524d0db59e7796ce67eafe = new THStack();
   f881d8d602524d0db59e7796ce67eafe->SetName("f881d8d602524d0db59e7796ce67eafe");
   f881d8d602524d0db59e7796ce67eafe->SetTitle("ZZ");
   f881d8d602524d0db59e7796ce67eafe->SetMaximum(112);
   
   TH1F *f881d8d602524d0db59e7796ce67eafe_stack_10 = new TH1F("f881d8d602524d0db59e7796ce67eafe_stack_10","ZZ",1,0,300);
   f881d8d602524d0db59e7796ce67eafe_stack_10->SetMinimum(0);
   f881d8d602524d0db59e7796ce67eafe_stack_10->SetMaximum(117.6);
   f881d8d602524d0db59e7796ce67eafe_stack_10->SetDirectory(0);
   f881d8d602524d0db59e7796ce67eafe_stack_10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   f881d8d602524d0db59e7796ce67eafe_stack_10->SetLineColor(ci);
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetXaxis()->SetLabelFont(42);
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetXaxis()->SetLabelSize(0.035);
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetXaxis()->SetTitleSize(0.035);
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetXaxis()->SetTitleFont(42);
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetYaxis()->SetTitle("Events");
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetYaxis()->SetLabelFont(42);
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetYaxis()->SetLabelSize(0.035);
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetYaxis()->SetTitleSize(0.035);
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetYaxis()->SetTitleFont(42);
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetZaxis()->SetLabelFont(42);
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetZaxis()->SetLabelSize(0.035);
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetZaxis()->SetTitleSize(0.035);
   f881d8d602524d0db59e7796ce67eafe_stack_10->GetZaxis()->SetTitleFont(42);
   f881d8d602524d0db59e7796ce67eafe->SetHistogram(f881d8d602524d0db59e7796ce67eafe_stack_10);
   
   
   TH1D *f881d8d602524d0db59e7796ce67eafe = new TH1D("f881d8d602524d0db59e7796ce67eafe","ZZ",1,0,300);
   f881d8d602524d0db59e7796ce67eafe->SetBinContent(1,0.5971052);
   f881d8d602524d0db59e7796ce67eafe->SetBinContent(2,0.005047573);
   f881d8d602524d0db59e7796ce67eafe->SetBinError(1,0.02184006);
   f881d8d602524d0db59e7796ce67eafe->SetBinError(2,0.002030335);
   f881d8d602524d0db59e7796ce67eafe->SetEntries(747.4705);

   ci = TColor::GetColor("#50a634");
   f881d8d602524d0db59e7796ce67eafe->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   f881d8d602524d0db59e7796ce67eafe->SetLineColor(ci);
   f881d8d602524d0db59e7796ce67eafe->GetXaxis()->SetLabelFont(42);
   f881d8d602524d0db59e7796ce67eafe->GetXaxis()->SetLabelSize(0.035);
   f881d8d602524d0db59e7796ce67eafe->GetXaxis()->SetTitleSize(0.035);
   f881d8d602524d0db59e7796ce67eafe->GetXaxis()->SetTitleFont(42);
   f881d8d602524d0db59e7796ce67eafe->GetYaxis()->SetLabelFont(42);
   f881d8d602524d0db59e7796ce67eafe->GetYaxis()->SetLabelSize(0.035);
   f881d8d602524d0db59e7796ce67eafe->GetYaxis()->SetTitleSize(0.035);
   f881d8d602524d0db59e7796ce67eafe->GetYaxis()->SetTitleFont(42);
   f881d8d602524d0db59e7796ce67eafe->GetZaxis()->SetLabelFont(42);
   f881d8d602524d0db59e7796ce67eafe->GetZaxis()->SetLabelSize(0.035);
   f881d8d602524d0db59e7796ce67eafe->GetZaxis()->SetTitleSize(0.035);
   f881d8d602524d0db59e7796ce67eafe->GetZaxis()->SetTitleFont(42);
   f881d8d602524d0db59e7796ce67eafe->Add(f881d8d602524d0db59e7796ce67eafe,"hist");
   
   TH1D *33defb5e28ad4b3fbd3201c9da09d38d = new TH1D("33defb5e28ad4b3fbd3201c9da09d38d","Charge mis-id",1,0,300);
   33defb5e28ad4b3fbd3201c9da09d38d->SetBinContent(1,2.42626);
   33defb5e28ad4b3fbd3201c9da09d38d->SetBinContent(2,0.01754485);
   33defb5e28ad4b3fbd3201c9da09d38d->SetBinError(1,0.07268564);
   33defb5e28ad4b3fbd3201c9da09d38d->SetBinError(2,0.007277478);
   33defb5e28ad4b3fbd3201c9da09d38d->SetEntries(1114.236);

   ci = TColor::GetColor("#9999cc");
   33defb5e28ad4b3fbd3201c9da09d38d->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   33defb5e28ad4b3fbd3201c9da09d38d->SetLineColor(ci);
   33defb5e28ad4b3fbd3201c9da09d38d->SetMarkerStyle(20);
   33defb5e28ad4b3fbd3201c9da09d38d->GetXaxis()->SetLabelFont(42);
   33defb5e28ad4b3fbd3201c9da09d38d->GetXaxis()->SetLabelSize(0.035);
   33defb5e28ad4b3fbd3201c9da09d38d->GetXaxis()->SetTitleSize(0.035);
   33defb5e28ad4b3fbd3201c9da09d38d->GetXaxis()->SetTitleFont(42);
   33defb5e28ad4b3fbd3201c9da09d38d->GetYaxis()->SetLabelFont(42);
   33defb5e28ad4b3fbd3201c9da09d38d->GetYaxis()->SetLabelSize(0.035);
   33defb5e28ad4b3fbd3201c9da09d38d->GetYaxis()->SetTitleSize(0.035);
   33defb5e28ad4b3fbd3201c9da09d38d->GetYaxis()->SetTitleFont(42);
   33defb5e28ad4b3fbd3201c9da09d38d->GetZaxis()->SetLabelFont(42);
   33defb5e28ad4b3fbd3201c9da09d38d->GetZaxis()->SetLabelSize(0.035);
   33defb5e28ad4b3fbd3201c9da09d38d->GetZaxis()->SetTitleSize(0.035);
   33defb5e28ad4b3fbd3201c9da09d38d->GetZaxis()->SetTitleFont(42);
   f881d8d602524d0db59e7796ce67eafe->Add(33defb5e28ad4b3fbd3201c9da09d38d,"hist");
   
   TH1D *cb4f4eb3061d4d7c95ac14474c2b74f9 = new TH1D("cb4f4eb3061d4d7c95ac14474c2b74f9","WZ#rightarrow3l",1,0,300);
   cb4f4eb3061d4d7c95ac14474c2b74f9->SetBinContent(1,7.440161);
   cb4f4eb3061d4d7c95ac14474c2b74f9->SetBinContent(2,0.137074);
   cb4f4eb3061d4d7c95ac14474c2b74f9->SetBinError(1,0.2220122);
   cb4f4eb3061d4d7c95ac14474c2b74f9->SetBinError(2,0.03005543);
   cb4f4eb3061d4d7c95ac14474c2b74f9->SetEntries(1123.08);

   ci = TColor::GetColor("#dc322f");
   cb4f4eb3061d4d7c95ac14474c2b74f9->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   cb4f4eb3061d4d7c95ac14474c2b74f9->SetLineColor(ci);
   cb4f4eb3061d4d7c95ac14474c2b74f9->GetXaxis()->SetLabelFont(42);
   cb4f4eb3061d4d7c95ac14474c2b74f9->GetXaxis()->SetLabelSize(0.035);
   cb4f4eb3061d4d7c95ac14474c2b74f9->GetXaxis()->SetTitleSize(0.035);
   cb4f4eb3061d4d7c95ac14474c2b74f9->GetXaxis()->SetTitleFont(42);
   cb4f4eb3061d4d7c95ac14474c2b74f9->GetYaxis()->SetLabelFont(42);
   cb4f4eb3061d4d7c95ac14474c2b74f9->GetYaxis()->SetLabelSize(0.035);
   cb4f4eb3061d4d7c95ac14474c2b74f9->GetYaxis()->SetTitleSize(0.035);
   cb4f4eb3061d4d7c95ac14474c2b74f9->GetYaxis()->SetTitleFont(42);
   cb4f4eb3061d4d7c95ac14474c2b74f9->GetZaxis()->SetLabelFont(42);
   cb4f4eb3061d4d7c95ac14474c2b74f9->GetZaxis()->SetLabelSize(0.035);
   cb4f4eb3061d4d7c95ac14474c2b74f9->GetZaxis()->SetTitleSize(0.035);
   cb4f4eb3061d4d7c95ac14474c2b74f9->GetZaxis()->SetTitleFont(42);
   f881d8d602524d0db59e7796ce67eafe->Add(cb4f4eb3061d4d7c95ac14474c2b74f9,"hist");
   
   TH1D *002c82850956413da4800aecf750609f = new TH1D("002c82850956413da4800aecf750609f","WZ#rightarrowl#tau#tau",1,0,300);
   002c82850956413da4800aecf750609f->SetBinContent(1,2.277737);
   002c82850956413da4800aecf750609f->SetBinContent(2,0.03033479);
   002c82850956413da4800aecf750609f->SetBinError(1,0.1223751);
   002c82850956413da4800aecf750609f->SetBinError(2,0.01444757);
   002c82850956413da4800aecf750609f->SetEntries(346.4345);

   ci = TColor::GetColor("#268bd2");
   002c82850956413da4800aecf750609f->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   002c82850956413da4800aecf750609f->SetLineColor(ci);
   002c82850956413da4800aecf750609f->GetXaxis()->SetLabelFont(42);
   002c82850956413da4800aecf750609f->GetXaxis()->SetLabelSize(0.035);
   002c82850956413da4800aecf750609f->GetXaxis()->SetTitleSize(0.035);
   002c82850956413da4800aecf750609f->GetXaxis()->SetTitleFont(42);
   002c82850956413da4800aecf750609f->GetYaxis()->SetLabelFont(42);
   002c82850956413da4800aecf750609f->GetYaxis()->SetLabelSize(0.035);
   002c82850956413da4800aecf750609f->GetYaxis()->SetTitleSize(0.035);
   002c82850956413da4800aecf750609f->GetYaxis()->SetTitleFont(42);
   002c82850956413da4800aecf750609f->GetZaxis()->SetLabelFont(42);
   002c82850956413da4800aecf750609f->GetZaxis()->SetLabelSize(0.035);
   002c82850956413da4800aecf750609f->GetZaxis()->SetTitleSize(0.035);
   002c82850956413da4800aecf750609f->GetZaxis()->SetTitleFont(42);
   f881d8d602524d0db59e7796ce67eafe->Add(002c82850956413da4800aecf750609f,"hist");
   
   TH1D *8679aba1581a48309eb3a89b8dd513f4 = new TH1D("8679aba1581a48309eb3a89b8dd513f4","Reducible bkg.",1,0,300);
   8679aba1581a48309eb3a89b8dd513f4->SetBinContent(0,1e-05);
   8679aba1581a48309eb3a89b8dd513f4->SetBinContent(1,31.57747);
   8679aba1581a48309eb3a89b8dd513f4->SetBinContent(2,0.1822399);
   8679aba1581a48309eb3a89b8dd513f4->SetBinError(0,0.02144407);
   8679aba1581a48309eb3a89b8dd513f4->SetBinError(1,1.92817);
   8679aba1581a48309eb3a89b8dd513f4->SetBinError(2,0.1156494);
   8679aba1581a48309eb3a89b8dd513f4->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   8679aba1581a48309eb3a89b8dd513f4->SetFillColor(ci);
   8679aba1581a48309eb3a89b8dd513f4->SetMarkerStyle(20);
   8679aba1581a48309eb3a89b8dd513f4->GetXaxis()->SetLabelFont(42);
   8679aba1581a48309eb3a89b8dd513f4->GetXaxis()->SetLabelSize(0.035);
   8679aba1581a48309eb3a89b8dd513f4->GetXaxis()->SetTitleSize(0.035);
   8679aba1581a48309eb3a89b8dd513f4->GetXaxis()->SetTitleFont(42);
   8679aba1581a48309eb3a89b8dd513f4->GetYaxis()->SetLabelFont(42);
   8679aba1581a48309eb3a89b8dd513f4->GetYaxis()->SetLabelSize(0.035);
   8679aba1581a48309eb3a89b8dd513f4->GetYaxis()->SetTitleSize(0.035);
   8679aba1581a48309eb3a89b8dd513f4->GetYaxis()->SetTitleFont(42);
   8679aba1581a48309eb3a89b8dd513f4->GetZaxis()->SetLabelFont(42);
   8679aba1581a48309eb3a89b8dd513f4->GetZaxis()->SetLabelSize(0.035);
   8679aba1581a48309eb3a89b8dd513f4->GetZaxis()->SetTitleSize(0.035);
   8679aba1581a48309eb3a89b8dd513f4->GetZaxis()->SetTitleFont(42);
   f881d8d602524d0db59e7796ce67eafe->Add(8679aba1581a48309eb3a89b8dd513f4,"hist");
   f881d8d602524d0db59e7796ce67eafe->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("f881d8d602524d0db59e7796ce67eafe","ZZ","f");

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
   entry=leg->AddEntry("33defb5e28ad4b3fbd3201c9da09d38d","Charge mis-id","f");

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
   entry=leg->AddEntry("cb4f4eb3061d4d7c95ac14474c2b74f9","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("002c82850956413da4800aecf750609f","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("8679aba1581a48309eb3a89b8dd513f4","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("466a78f1f00f476f88bd91168b52a86b","Bkg. Unc.","f");
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
   
   TH1D *466a78f1f00f476f88bd91168b52a86b = new TH1D("466a78f1f00f476f88bd91168b52a86b","Bkg. Unc.",1,0,300);
   466a78f1f00f476f88bd91168b52a86b->SetBinContent(1,44.31873);
   466a78f1f00f476f88bd91168b52a86b->SetBinError(1,3.249853);
   466a78f1f00f476f88bd91168b52a86b->SetEntries(1);
   466a78f1f00f476f88bd91168b52a86b->SetFillColor(1);
   466a78f1f00f476f88bd91168b52a86b->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   466a78f1f00f476f88bd91168b52a86b->SetLineColor(ci);
   466a78f1f00f476f88bd91168b52a86b->SetMarkerSize(0);
   466a78f1f00f476f88bd91168b52a86b->GetXaxis()->SetLabelFont(42);
   466a78f1f00f476f88bd91168b52a86b->GetXaxis()->SetLabelSize(0.035);
   466a78f1f00f476f88bd91168b52a86b->GetXaxis()->SetTitleSize(0.035);
   466a78f1f00f476f88bd91168b52a86b->GetXaxis()->SetTitleFont(42);
   466a78f1f00f476f88bd91168b52a86b->GetYaxis()->SetLabelFont(42);
   466a78f1f00f476f88bd91168b52a86b->GetYaxis()->SetLabelSize(0.035);
   466a78f1f00f476f88bd91168b52a86b->GetYaxis()->SetTitleSize(0.035);
   466a78f1f00f476f88bd91168b52a86b->GetYaxis()->SetTitleFont(42);
   466a78f1f00f476f88bd91168b52a86b->GetZaxis()->SetLabelFont(42);
   466a78f1f00f476f88bd91168b52a86b->GetZaxis()->SetLabelSize(0.035);
   466a78f1f00f476f88bd91168b52a86b->GetZaxis()->SetTitleSize(0.035);
   466a78f1f00f476f88bd91168b52a86b->GetZaxis()->SetTitleFont(42);
   466a78f1f00f476f88bd91168b52a86b->Draw("hist pe2,same");
   
   TH1D *efb109c3efb243549038478d219d0369 = new TH1D("efb109c3efb243549038478d219d0369","Observed",1,0,300);
   efb109c3efb243549038478d219d0369->SetBinContent(1,56);
   efb109c3efb243549038478d219d0369->SetBinError(1,7.483315);
   efb109c3efb243549038478d219d0369->SetEntries(56);
   efb109c3efb243549038478d219d0369->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   efb109c3efb243549038478d219d0369->SetLineColor(ci);
   efb109c3efb243549038478d219d0369->SetMarkerStyle(20);
   efb109c3efb243549038478d219d0369->GetXaxis()->SetLabelFont(42);
   efb109c3efb243549038478d219d0369->GetXaxis()->SetLabelSize(0.035);
   efb109c3efb243549038478d219d0369->GetXaxis()->SetTitleSize(0.035);
   efb109c3efb243549038478d219d0369->GetXaxis()->SetTitleFont(42);
   efb109c3efb243549038478d219d0369->GetYaxis()->SetLabelFont(42);
   efb109c3efb243549038478d219d0369->GetYaxis()->SetLabelSize(0.035);
   efb109c3efb243549038478d219d0369->GetYaxis()->SetTitleSize(0.035);
   efb109c3efb243549038478d219d0369->GetYaxis()->SetTitleFont(42);
   efb109c3efb243549038478d219d0369->GetZaxis()->SetLabelFont(42);
   efb109c3efb243549038478d219d0369->GetZaxis()->SetLabelSize(0.035);
   efb109c3efb243549038478d219d0369->GetZaxis()->SetTitleSize(0.035);
   efb109c3efb243549038478d219d0369->GetZaxis()->SetTitleFont(42);
   efb109c3efb243549038478d219d0369->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("f881d8d602524d0db59e7796ce67eafe","ZZ","f");

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
   entry=leg->AddEntry("33defb5e28ad4b3fbd3201c9da09d38d","Charge mis-id","f");

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
   entry=leg->AddEntry("cb4f4eb3061d4d7c95ac14474c2b74f9","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("002c82850956413da4800aecf750609f","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("8679aba1581a48309eb3a89b8dd513f4","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("466a78f1f00f476f88bd91168b52a86b","Bkg. Unc.","f");
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
