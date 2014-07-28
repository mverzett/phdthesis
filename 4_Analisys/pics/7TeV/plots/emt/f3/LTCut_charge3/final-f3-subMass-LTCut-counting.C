{
//=========Macro generated from canvas: adsf/asdf
//=========  (Tue Jun 10 03:59:43 2014) by ROOT version5.32/00
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
   up->Range(-37.5,-11.025,337.5,99.225);
   up->SetFillColor(0);
   up->SetBorderMode(0);
   up->SetBorderSize(2);
   up->SetFrameBorderMode(0);
   up->SetFrameBorderMode(0);
   
   THStack *829924e6e11e46d39c397d65791bd800 = new THStack();
   829924e6e11e46d39c397d65791bd800->SetName("829924e6e11e46d39c397d65791bd800");
   829924e6e11e46d39c397d65791bd800->SetTitle("ZZ");
   829924e6e11e46d39c397d65791bd800->SetMaximum(84);
   
   TH1F *829924e6e11e46d39c397d65791bd800_stack_16 = new TH1F("829924e6e11e46d39c397d65791bd800_stack_16","ZZ",1,0,300);
   829924e6e11e46d39c397d65791bd800_stack_16->SetMinimum(0);
   829924e6e11e46d39c397d65791bd800_stack_16->SetMaximum(88.2);
   829924e6e11e46d39c397d65791bd800_stack_16->SetDirectory(0);
   829924e6e11e46d39c397d65791bd800_stack_16->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   829924e6e11e46d39c397d65791bd800_stack_16->SetLineColor(ci);
   829924e6e11e46d39c397d65791bd800_stack_16->GetXaxis()->SetTitle("m_{l_{2}#tau} (GeV)");
   829924e6e11e46d39c397d65791bd800_stack_16->GetXaxis()->SetLabelFont(42);
   829924e6e11e46d39c397d65791bd800_stack_16->GetXaxis()->SetLabelSize(0.035);
   829924e6e11e46d39c397d65791bd800_stack_16->GetXaxis()->SetTitleSize(0.035);
   829924e6e11e46d39c397d65791bd800_stack_16->GetXaxis()->SetTitleFont(42);
   829924e6e11e46d39c397d65791bd800_stack_16->GetYaxis()->SetTitle("Events");
   829924e6e11e46d39c397d65791bd800_stack_16->GetYaxis()->SetLabelFont(42);
   829924e6e11e46d39c397d65791bd800_stack_16->GetYaxis()->SetLabelSize(0.035);
   829924e6e11e46d39c397d65791bd800_stack_16->GetYaxis()->SetTitleSize(0.035);
   829924e6e11e46d39c397d65791bd800_stack_16->GetYaxis()->SetTitleFont(42);
   829924e6e11e46d39c397d65791bd800_stack_16->GetZaxis()->SetLabelFont(42);
   829924e6e11e46d39c397d65791bd800_stack_16->GetZaxis()->SetLabelSize(0.035);
   829924e6e11e46d39c397d65791bd800_stack_16->GetZaxis()->SetTitleSize(0.035);
   829924e6e11e46d39c397d65791bd800_stack_16->GetZaxis()->SetTitleFont(42);
   829924e6e11e46d39c397d65791bd800->SetHistogram(829924e6e11e46d39c397d65791bd800_stack_16);
   
   
   TH1D *829924e6e11e46d39c397d65791bd800 = new TH1D("829924e6e11e46d39c397d65791bd800","ZZ",1,0,300);
   829924e6e11e46d39c397d65791bd800->SetBinContent(1,0.5443222);
   829924e6e11e46d39c397d65791bd800->SetBinContent(2,0.005047573);
   829924e6e11e46d39c397d65791bd800->SetBinError(1,0.02085994);
   829924e6e11e46d39c397d65791bd800->SetBinError(2,0.002030335);
   829924e6e11e46d39c397d65791bd800->SetEntries(680.9042);

   ci = TColor::GetColor("#50a634");
   829924e6e11e46d39c397d65791bd800->SetFillColor(ci);

   ci = TColor::GetColor("#50a634");
   829924e6e11e46d39c397d65791bd800->SetLineColor(ci);
   829924e6e11e46d39c397d65791bd800->GetXaxis()->SetLabelFont(42);
   829924e6e11e46d39c397d65791bd800->GetXaxis()->SetLabelSize(0.035);
   829924e6e11e46d39c397d65791bd800->GetXaxis()->SetTitleSize(0.035);
   829924e6e11e46d39c397d65791bd800->GetXaxis()->SetTitleFont(42);
   829924e6e11e46d39c397d65791bd800->GetYaxis()->SetLabelFont(42);
   829924e6e11e46d39c397d65791bd800->GetYaxis()->SetLabelSize(0.035);
   829924e6e11e46d39c397d65791bd800->GetYaxis()->SetTitleSize(0.035);
   829924e6e11e46d39c397d65791bd800->GetYaxis()->SetTitleFont(42);
   829924e6e11e46d39c397d65791bd800->GetZaxis()->SetLabelFont(42);
   829924e6e11e46d39c397d65791bd800->GetZaxis()->SetLabelSize(0.035);
   829924e6e11e46d39c397d65791bd800->GetZaxis()->SetTitleSize(0.035);
   829924e6e11e46d39c397d65791bd800->GetZaxis()->SetTitleFont(42);
   829924e6e11e46d39c397d65791bd800->Add(829924e6e11e46d39c397d65791bd800,"hist");
   
   TH1D *cdc98bebe8fe45ed945eb0ebf7c2685d = new TH1D("cdc98bebe8fe45ed945eb0ebf7c2685d","Charge mis-id",1,0,300);
   cdc98bebe8fe45ed945eb0ebf7c2685d->SetBinContent(1,2.019923);
   cdc98bebe8fe45ed945eb0ebf7c2685d->SetBinContent(2,0.01754485);
   cdc98bebe8fe45ed945eb0ebf7c2685d->SetBinError(1,0.06736032);
   cdc98bebe8fe45ed945eb0ebf7c2685d->SetBinError(2,0.007277478);
   cdc98bebe8fe45ed945eb0ebf7c2685d->SetEntries(899.2101);

   ci = TColor::GetColor("#9999cc");
   cdc98bebe8fe45ed945eb0ebf7c2685d->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   cdc98bebe8fe45ed945eb0ebf7c2685d->SetLineColor(ci);
   cdc98bebe8fe45ed945eb0ebf7c2685d->SetMarkerStyle(20);
   cdc98bebe8fe45ed945eb0ebf7c2685d->GetXaxis()->SetLabelFont(42);
   cdc98bebe8fe45ed945eb0ebf7c2685d->GetXaxis()->SetLabelSize(0.035);
   cdc98bebe8fe45ed945eb0ebf7c2685d->GetXaxis()->SetTitleSize(0.035);
   cdc98bebe8fe45ed945eb0ebf7c2685d->GetXaxis()->SetTitleFont(42);
   cdc98bebe8fe45ed945eb0ebf7c2685d->GetYaxis()->SetLabelFont(42);
   cdc98bebe8fe45ed945eb0ebf7c2685d->GetYaxis()->SetLabelSize(0.035);
   cdc98bebe8fe45ed945eb0ebf7c2685d->GetYaxis()->SetTitleSize(0.035);
   cdc98bebe8fe45ed945eb0ebf7c2685d->GetYaxis()->SetTitleFont(42);
   cdc98bebe8fe45ed945eb0ebf7c2685d->GetZaxis()->SetLabelFont(42);
   cdc98bebe8fe45ed945eb0ebf7c2685d->GetZaxis()->SetLabelSize(0.035);
   cdc98bebe8fe45ed945eb0ebf7c2685d->GetZaxis()->SetTitleSize(0.035);
   cdc98bebe8fe45ed945eb0ebf7c2685d->GetZaxis()->SetTitleFont(42);
   829924e6e11e46d39c397d65791bd800->Add(cdc98bebe8fe45ed945eb0ebf7c2685d,"hist");
   
   TH1D *c7a570015a194a0abfd4534473e8f6f1 = new TH1D("c7a570015a194a0abfd4534473e8f6f1","WZ#rightarrow3l",1,0,300);
   c7a570015a194a0abfd4534473e8f6f1->SetBinContent(1,6.829575);
   c7a570015a194a0abfd4534473e8f6f1->SetBinContent(2,0.137074);
   c7a570015a194a0abfd4534473e8f6f1->SetBinError(1,0.2128134);
   c7a570015a194a0abfd4534473e8f6f1->SetBinError(2,0.03005543);
   c7a570015a194a0abfd4534473e8f6f1->SetEntries(1029.887);

   ci = TColor::GetColor("#dc322f");
   c7a570015a194a0abfd4534473e8f6f1->SetFillColor(ci);

   ci = TColor::GetColor("#dc322f");
   c7a570015a194a0abfd4534473e8f6f1->SetLineColor(ci);
   c7a570015a194a0abfd4534473e8f6f1->GetXaxis()->SetLabelFont(42);
   c7a570015a194a0abfd4534473e8f6f1->GetXaxis()->SetLabelSize(0.035);
   c7a570015a194a0abfd4534473e8f6f1->GetXaxis()->SetTitleSize(0.035);
   c7a570015a194a0abfd4534473e8f6f1->GetXaxis()->SetTitleFont(42);
   c7a570015a194a0abfd4534473e8f6f1->GetYaxis()->SetLabelFont(42);
   c7a570015a194a0abfd4534473e8f6f1->GetYaxis()->SetLabelSize(0.035);
   c7a570015a194a0abfd4534473e8f6f1->GetYaxis()->SetTitleSize(0.035);
   c7a570015a194a0abfd4534473e8f6f1->GetYaxis()->SetTitleFont(42);
   c7a570015a194a0abfd4534473e8f6f1->GetZaxis()->SetLabelFont(42);
   c7a570015a194a0abfd4534473e8f6f1->GetZaxis()->SetLabelSize(0.035);
   c7a570015a194a0abfd4534473e8f6f1->GetZaxis()->SetTitleSize(0.035);
   c7a570015a194a0abfd4534473e8f6f1->GetZaxis()->SetTitleFont(42);
   829924e6e11e46d39c397d65791bd800->Add(c7a570015a194a0abfd4534473e8f6f1,"hist");
   
   TH1D *359ae0a8962046f6af0b657ddb2e615a = new TH1D("359ae0a8962046f6af0b657ddb2e615a","WZ#rightarrowl#tau#tau",1,0,300);
   359ae0a8962046f6af0b657ddb2e615a->SetBinContent(1,1.945863);
   359ae0a8962046f6af0b657ddb2e615a->SetBinContent(2,0.03033479);
   359ae0a8962046f6af0b657ddb2e615a->SetBinError(1,0.1130388);
   359ae0a8962046f6af0b657ddb2e615a->SetBinError(2,0.01444757);
   359ae0a8962046f6af0b657ddb2e615a->SetEntries(296.3256);

   ci = TColor::GetColor("#268bd2");
   359ae0a8962046f6af0b657ddb2e615a->SetFillColor(ci);

   ci = TColor::GetColor("#268bd2");
   359ae0a8962046f6af0b657ddb2e615a->SetLineColor(ci);
   359ae0a8962046f6af0b657ddb2e615a->GetXaxis()->SetLabelFont(42);
   359ae0a8962046f6af0b657ddb2e615a->GetXaxis()->SetLabelSize(0.035);
   359ae0a8962046f6af0b657ddb2e615a->GetXaxis()->SetTitleSize(0.035);
   359ae0a8962046f6af0b657ddb2e615a->GetXaxis()->SetTitleFont(42);
   359ae0a8962046f6af0b657ddb2e615a->GetYaxis()->SetLabelFont(42);
   359ae0a8962046f6af0b657ddb2e615a->GetYaxis()->SetLabelSize(0.035);
   359ae0a8962046f6af0b657ddb2e615a->GetYaxis()->SetTitleSize(0.035);
   359ae0a8962046f6af0b657ddb2e615a->GetYaxis()->SetTitleFont(42);
   359ae0a8962046f6af0b657ddb2e615a->GetZaxis()->SetLabelFont(42);
   359ae0a8962046f6af0b657ddb2e615a->GetZaxis()->SetLabelSize(0.035);
   359ae0a8962046f6af0b657ddb2e615a->GetZaxis()->SetTitleSize(0.035);
   359ae0a8962046f6af0b657ddb2e615a->GetZaxis()->SetTitleFont(42);
   829924e6e11e46d39c397d65791bd800->Add(359ae0a8962046f6af0b657ddb2e615a,"hist");
   
   TH1D *c2d7914a829f4e889fd2f5123f73c813 = new TH1D("c2d7914a829f4e889fd2f5123f73c813","Reducible bkg.",1,0,300);
   c2d7914a829f4e889fd2f5123f73c813->SetBinContent(0,1e-05);
   c2d7914a829f4e889fd2f5123f73c813->SetBinContent(1,23.83852);
   c2d7914a829f4e889fd2f5123f73c813->SetBinContent(2,0.1822399);
   c2d7914a829f4e889fd2f5123f73c813->SetBinError(0,0.02085123);
   c2d7914a829f4e889fd2f5123f73c813->SetBinError(1,1.274189);
   c2d7914a829f4e889fd2f5123f73c813->SetBinError(2,0.1156494);
   c2d7914a829f4e889fd2f5123f73c813->SetEntries(3);

   ci = TColor::GetColor("#ffcc66");
   c2d7914a829f4e889fd2f5123f73c813->SetFillColor(ci);
   c2d7914a829f4e889fd2f5123f73c813->SetMarkerStyle(20);
   c2d7914a829f4e889fd2f5123f73c813->GetXaxis()->SetLabelFont(42);
   c2d7914a829f4e889fd2f5123f73c813->GetXaxis()->SetLabelSize(0.035);
   c2d7914a829f4e889fd2f5123f73c813->GetXaxis()->SetTitleSize(0.035);
   c2d7914a829f4e889fd2f5123f73c813->GetXaxis()->SetTitleFont(42);
   c2d7914a829f4e889fd2f5123f73c813->GetYaxis()->SetLabelFont(42);
   c2d7914a829f4e889fd2f5123f73c813->GetYaxis()->SetLabelSize(0.035);
   c2d7914a829f4e889fd2f5123f73c813->GetYaxis()->SetTitleSize(0.035);
   c2d7914a829f4e889fd2f5123f73c813->GetYaxis()->SetTitleFont(42);
   c2d7914a829f4e889fd2f5123f73c813->GetZaxis()->SetLabelFont(42);
   c2d7914a829f4e889fd2f5123f73c813->GetZaxis()->SetLabelSize(0.035);
   c2d7914a829f4e889fd2f5123f73c813->GetZaxis()->SetTitleSize(0.035);
   c2d7914a829f4e889fd2f5123f73c813->GetZaxis()->SetTitleFont(42);
   829924e6e11e46d39c397d65791bd800->Add(c2d7914a829f4e889fd2f5123f73c813,"hist");
   829924e6e11e46d39c397d65791bd800->Draw("");
   
   TLegend *leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("829924e6e11e46d39c397d65791bd800","ZZ","f");

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
   entry=leg->AddEntry("cdc98bebe8fe45ed945eb0ebf7c2685d","Charge mis-id","f");

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
   entry=leg->AddEntry("c7a570015a194a0abfd4534473e8f6f1","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("359ae0a8962046f6af0b657ddb2e615a","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("c2d7914a829f4e889fd2f5123f73c813","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("435e75aebe0f403a8664a3fcf964767c","Bkg. Unc.","f");
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
   
   TH1D *435e75aebe0f403a8664a3fcf964767c = new TH1D("435e75aebe0f403a8664a3fcf964767c","Bkg. Unc.",1,0,300);
   435e75aebe0f403a8664a3fcf964767c->SetBinContent(1,35.1782);
   435e75aebe0f403a8664a3fcf964767c->SetBinError(1,2.275756);
   435e75aebe0f403a8664a3fcf964767c->SetEntries(1);
   435e75aebe0f403a8664a3fcf964767c->SetFillColor(1);
   435e75aebe0f403a8664a3fcf964767c->SetFillStyle(3013);

   ci = TColor::GetColor("#268bd2");
   435e75aebe0f403a8664a3fcf964767c->SetLineColor(ci);
   435e75aebe0f403a8664a3fcf964767c->SetMarkerSize(0);
   435e75aebe0f403a8664a3fcf964767c->GetXaxis()->SetLabelFont(42);
   435e75aebe0f403a8664a3fcf964767c->GetXaxis()->SetLabelSize(0.035);
   435e75aebe0f403a8664a3fcf964767c->GetXaxis()->SetTitleSize(0.035);
   435e75aebe0f403a8664a3fcf964767c->GetXaxis()->SetTitleFont(42);
   435e75aebe0f403a8664a3fcf964767c->GetYaxis()->SetLabelFont(42);
   435e75aebe0f403a8664a3fcf964767c->GetYaxis()->SetLabelSize(0.035);
   435e75aebe0f403a8664a3fcf964767c->GetYaxis()->SetTitleSize(0.035);
   435e75aebe0f403a8664a3fcf964767c->GetYaxis()->SetTitleFont(42);
   435e75aebe0f403a8664a3fcf964767c->GetZaxis()->SetLabelFont(42);
   435e75aebe0f403a8664a3fcf964767c->GetZaxis()->SetLabelSize(0.035);
   435e75aebe0f403a8664a3fcf964767c->GetZaxis()->SetTitleSize(0.035);
   435e75aebe0f403a8664a3fcf964767c->GetZaxis()->SetTitleFont(42);
   435e75aebe0f403a8664a3fcf964767c->Draw("hist pe2,same");
   
   TH1D *6befde9d93554a85bf28919fdb2a9b66 = new TH1D("6befde9d93554a85bf28919fdb2a9b66","Observed",1,0,300);
   6befde9d93554a85bf28919fdb2a9b66->SetBinContent(1,42);
   6befde9d93554a85bf28919fdb2a9b66->SetBinError(1,6.480741);
   6befde9d93554a85bf28919fdb2a9b66->SetEntries(42);
   6befde9d93554a85bf28919fdb2a9b66->SetFillColor(1);

   ci = TColor::GetColor("#000099");
   6befde9d93554a85bf28919fdb2a9b66->SetLineColor(ci);
   6befde9d93554a85bf28919fdb2a9b66->SetMarkerStyle(20);
   6befde9d93554a85bf28919fdb2a9b66->GetXaxis()->SetLabelFont(42);
   6befde9d93554a85bf28919fdb2a9b66->GetXaxis()->SetLabelSize(0.035);
   6befde9d93554a85bf28919fdb2a9b66->GetXaxis()->SetTitleSize(0.035);
   6befde9d93554a85bf28919fdb2a9b66->GetXaxis()->SetTitleFont(42);
   6befde9d93554a85bf28919fdb2a9b66->GetYaxis()->SetLabelFont(42);
   6befde9d93554a85bf28919fdb2a9b66->GetYaxis()->SetLabelSize(0.035);
   6befde9d93554a85bf28919fdb2a9b66->GetYaxis()->SetTitleSize(0.035);
   6befde9d93554a85bf28919fdb2a9b66->GetYaxis()->SetTitleFont(42);
   6befde9d93554a85bf28919fdb2a9b66->GetZaxis()->SetLabelFont(42);
   6befde9d93554a85bf28919fdb2a9b66->GetZaxis()->SetLabelSize(0.035);
   6befde9d93554a85bf28919fdb2a9b66->GetZaxis()->SetTitleSize(0.035);
   6befde9d93554a85bf28919fdb2a9b66->GetZaxis()->SetTitleFont(42);
   6befde9d93554a85bf28919fdb2a9b66->Draw("pe same");
   
   leg = new TLegend(0.55,0.61,0.83,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("829924e6e11e46d39c397d65791bd800","ZZ","f");

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
   entry=leg->AddEntry("cdc98bebe8fe45ed945eb0ebf7c2685d","Charge mis-id","f");

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
   entry=leg->AddEntry("c7a570015a194a0abfd4534473e8f6f1","WZ#rightarrow3l","f");

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
   entry=leg->AddEntry("359ae0a8962046f6af0b657ddb2e615a","WZ#rightarrowl#tau#tau","f");

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
   entry=leg->AddEntry("c2d7914a829f4e889fd2f5123f73c813","Reducible bkg.","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("435e75aebe0f403a8664a3fcf964767c","Bkg. Unc.","f");
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
