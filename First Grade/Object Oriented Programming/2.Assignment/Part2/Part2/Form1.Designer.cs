namespace odev2_part22
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.btnmatrisolustur = new System.Windows.Forms.Button();
            this.btnmatristopla = new System.Windows.Forms.Button();
            this.btnmatriscarp = new System.Windows.Forms.Button();
            this.listView1 = new System.Windows.Forms.ListView();
            this.listView2 = new System.Windows.Forms.ListView();
            this.listView3 = new System.Windows.Forms.ListView();
            this.btnmatrisizi = new System.Windows.Forms.Button();
            this.btnmatristersi = new System.Windows.Forms.Button();
            this.btnmatristranspoze = new System.Windows.Forms.Button();
            this.btnmatristranspoze2 = new System.Windows.Forms.Button();
            this.btnmatristersi2 = new System.Windows.Forms.Button();
            this.btnmatrisizi2 = new System.Windows.Forms.Button();
            this.label8 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.richTextBox1 = new System.Windows.Forms.RichTextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.listviewters1 = new System.Windows.Forms.ListView();
            this.listviewters2 = new System.Windows.Forms.ListView();
            this.checkBox1 = new System.Windows.Forms.CheckBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label1.ForeColor = System.Drawing.Color.GreenYellow;
            this.label1.Location = new System.Drawing.Point(369, 19);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(146, 18);
            this.label1.TabIndex = 0;
            this.label1.Text = "Matris Hesaplayici";
            this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label6.ForeColor = System.Drawing.Color.OrangeRed;
            this.label6.Location = new System.Drawing.Point(47, 115);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(64, 16);
            this.label6.TabIndex = 9;
            this.label6.Text = "Matris A";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label7.ForeColor = System.Drawing.Color.BlueViolet;
            this.label7.Location = new System.Drawing.Point(406, 115);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(64, 16);
            this.label7.TabIndex = 10;
            this.label7.Text = "Matris B";
            // 
            // btnmatrisolustur
            // 
            this.btnmatrisolustur.BackColor = System.Drawing.Color.GreenYellow;
            this.btnmatrisolustur.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnmatrisolustur.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.btnmatrisolustur.Location = new System.Drawing.Point(372, 62);
            this.btnmatrisolustur.Name = "btnmatrisolustur";
            this.btnmatrisolustur.Size = new System.Drawing.Size(136, 30);
            this.btnmatrisolustur.TabIndex = 15;
            this.btnmatrisolustur.Text = "Matris Uret";
            this.btnmatrisolustur.UseVisualStyleBackColor = false;
            this.btnmatrisolustur.Click += new System.EventHandler(this.button1_Click);
            // 
            // btnmatristopla
            // 
            this.btnmatristopla.BackColor = System.Drawing.Color.Crimson;
            this.btnmatristopla.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnmatristopla.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.btnmatristopla.Location = new System.Drawing.Point(766, 289);
            this.btnmatristopla.Name = "btnmatristopla";
            this.btnmatristopla.Size = new System.Drawing.Size(136, 30);
            this.btnmatristopla.TabIndex = 16;
            this.btnmatristopla.Text = "A+B";
            this.btnmatristopla.UseVisualStyleBackColor = false;
            this.btnmatristopla.Click += new System.EventHandler(this.button2_Click);
            // 
            // btnmatriscarp
            // 
            this.btnmatriscarp.BackColor = System.Drawing.Color.Crimson;
            this.btnmatriscarp.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnmatriscarp.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.btnmatriscarp.Location = new System.Drawing.Point(766, 325);
            this.btnmatriscarp.Name = "btnmatriscarp";
            this.btnmatriscarp.Size = new System.Drawing.Size(136, 30);
            this.btnmatriscarp.TabIndex = 17;
            this.btnmatriscarp.Text = "A*B";
            this.btnmatriscarp.UseVisualStyleBackColor = false;
            this.btnmatriscarp.Click += new System.EventHandler(this.btnmatriscarp_Click);
            // 
            // listView1
            // 
            this.listView1.Location = new System.Drawing.Point(12, 134);
            this.listView1.Name = "listView1";
            this.listView1.Size = new System.Drawing.Size(136, 134);
            this.listView1.TabIndex = 19;
            this.listView1.UseCompatibleStateImageBehavior = false;
            this.listView1.SelectedIndexChanged += new System.EventHandler(this.listView1_SelectedIndexChanged);
            // 
            // listView2
            // 
            this.listView2.Location = new System.Drawing.Point(372, 134);
            this.listView2.Name = "listView2";
            this.listView2.Size = new System.Drawing.Size(136, 134);
            this.listView2.TabIndex = 20;
            this.listView2.UseCompatibleStateImageBehavior = false;
            // 
            // listView3
            // 
            this.listView3.Location = new System.Drawing.Point(766, 134);
            this.listView3.Name = "listView3";
            this.listView3.Size = new System.Drawing.Size(136, 135);
            this.listView3.TabIndex = 21;
            this.listView3.UseCompatibleStateImageBehavior = false;
            // 
            // btnmatrisizi
            // 
            this.btnmatrisizi.BackColor = System.Drawing.Color.OrangeRed;
            this.btnmatrisizi.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnmatrisizi.ForeColor = System.Drawing.Color.SeaShell;
            this.btnmatrisizi.Location = new System.Drawing.Point(12, 283);
            this.btnmatrisizi.Name = "btnmatrisizi";
            this.btnmatrisizi.Size = new System.Drawing.Size(136, 33);
            this.btnmatrisizi.TabIndex = 26;
            this.btnmatrisizi.Text = "Matris Izi";
            this.btnmatrisizi.UseVisualStyleBackColor = false;
            this.btnmatrisizi.Click += new System.EventHandler(this.btnmatrisizi_Click);
            // 
            // btnmatristersi
            // 
            this.btnmatristersi.BackColor = System.Drawing.Color.OrangeRed;
            this.btnmatristersi.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnmatristersi.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.btnmatristersi.Location = new System.Drawing.Point(12, 361);
            this.btnmatristersi.Name = "btnmatristersi";
            this.btnmatristersi.Size = new System.Drawing.Size(136, 33);
            this.btnmatristersi.TabIndex = 27;
            this.btnmatristersi.Text = "Matris Tersi";
            this.btnmatristersi.UseVisualStyleBackColor = false;
            this.btnmatristersi.Click += new System.EventHandler(this.btnmatristersi_Click_2);
            // 
            // btnmatristranspoze
            // 
            this.btnmatristranspoze.BackColor = System.Drawing.Color.OrangeRed;
            this.btnmatristranspoze.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnmatristranspoze.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.btnmatristranspoze.Location = new System.Drawing.Point(12, 322);
            this.btnmatristranspoze.Name = "btnmatristranspoze";
            this.btnmatristranspoze.Size = new System.Drawing.Size(136, 33);
            this.btnmatristranspoze.TabIndex = 28;
            this.btnmatristranspoze.Text = "Matris Transpoze";
            this.btnmatristranspoze.UseVisualStyleBackColor = false;
            this.btnmatristranspoze.Click += new System.EventHandler(this.btnmatristersi_Click_1);
            // 
            // btnmatristranspoze2
            // 
            this.btnmatristranspoze2.BackColor = System.Drawing.Color.BlueViolet;
            this.btnmatristranspoze2.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnmatristranspoze2.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.btnmatristranspoze2.Location = new System.Drawing.Point(372, 322);
            this.btnmatristranspoze2.Name = "btnmatristranspoze2";
            this.btnmatristranspoze2.Size = new System.Drawing.Size(136, 33);
            this.btnmatristranspoze2.TabIndex = 31;
            this.btnmatristranspoze2.Text = "Matris Traspoze";
            this.btnmatristranspoze2.UseVisualStyleBackColor = false;
            this.btnmatristranspoze2.Click += new System.EventHandler(this.btnmatristersi2_Click);
            // 
            // btnmatristersi2
            // 
            this.btnmatristersi2.BackColor = System.Drawing.Color.BlueViolet;
            this.btnmatristersi2.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnmatristersi2.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.btnmatristersi2.Location = new System.Drawing.Point(372, 361);
            this.btnmatristersi2.Name = "btnmatristersi2";
            this.btnmatristersi2.Size = new System.Drawing.Size(136, 33);
            this.btnmatristersi2.TabIndex = 30;
            this.btnmatristersi2.Text = "Matris Tersi";
            this.btnmatristersi2.UseVisualStyleBackColor = false;
            this.btnmatristersi2.Click += new System.EventHandler(this.btnmatristersi2_Click_1);
            // 
            // btnmatrisizi2
            // 
            this.btnmatrisizi2.BackColor = System.Drawing.Color.BlueViolet;
            this.btnmatrisizi2.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnmatrisizi2.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.btnmatrisizi2.Location = new System.Drawing.Point(372, 283);
            this.btnmatrisizi2.Name = "btnmatrisizi2";
            this.btnmatrisizi2.Size = new System.Drawing.Size(136, 33);
            this.btnmatrisizi2.TabIndex = 29;
            this.btnmatrisizi2.Text = "Matris Izi";
            this.btnmatrisizi2.UseVisualStyleBackColor = false;
            this.btnmatrisizi2.Click += new System.EventHandler(this.btnmatrisizi2_Click);
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label8.ForeColor = System.Drawing.Color.OrangeRed;
            this.label8.Location = new System.Drawing.Point(171, 289);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(52, 18);
            this.label8.TabIndex = 32;
            this.label8.Text = "label8";
            this.label8.Visible = false;
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label9.ForeColor = System.Drawing.Color.BlueViolet;
            this.label9.Location = new System.Drawing.Point(536, 289);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(52, 18);
            this.label9.TabIndex = 33;
            this.label9.Text = "label9";
            this.label9.Visible = false;
            // 
            // richTextBox1
            // 
            this.richTextBox1.Location = new System.Drawing.Point(693, 437);
            this.richTextBox1.Name = "richTextBox1";
            this.richTextBox1.Size = new System.Drawing.Size(225, 138);
            this.richTextBox1.TabIndex = 35;
            this.richTextBox1.Text = "";
            this.richTextBox1.Visible = false;
            this.richTextBox1.TextChanged += new System.EventHandler(this.richTextBox1_TextChanged_1);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label2.ForeColor = System.Drawing.Color.Crimson;
            this.label2.Location = new System.Drawing.Point(801, 115);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(64, 16);
            this.label2.TabIndex = 36;
            this.label2.Text = "Matris C";
            // 
            // listviewters1
            // 
            this.listviewters1.Location = new System.Drawing.Point(12, 437);
            this.listviewters1.Name = "listviewters1";
            this.listviewters1.Size = new System.Drawing.Size(136, 134);
            this.listviewters1.TabIndex = 38;
            this.listviewters1.UseCompatibleStateImageBehavior = false;
            this.listviewters1.Visible = false;
            // 
            // listviewters2
            // 
            this.listviewters2.Location = new System.Drawing.Point(372, 437);
            this.listviewters2.Name = "listviewters2";
            this.listviewters2.Size = new System.Drawing.Size(136, 134);
            this.listviewters2.TabIndex = 40;
            this.listviewters2.UseCompatibleStateImageBehavior = false;
            this.listviewters2.Visible = false;
            // 
            // checkBox1
            // 
            this.checkBox1.AutoSize = true;
            this.checkBox1.Location = new System.Drawing.Point(766, 417);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Size = new System.Drawing.Size(83, 17);
            this.checkBox1.TabIndex = 34;
            this.checkBox1.Text = "Islem Detayi";
            this.checkBox1.UseVisualStyleBackColor = true;
            this.checkBox1.CheckedChanged += new System.EventHandler(this.checkBox1_CheckedChanged);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label3.ForeColor = System.Drawing.Color.OrangeRed;
            this.label3.Location = new System.Drawing.Point(31, 418);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(100, 16);
            this.label3.TabIndex = 42;
            this.label3.Text = "Ters Matris A";
            this.label3.Visible = false;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label5.ForeColor = System.Drawing.Color.BlueViolet;
            this.label5.Location = new System.Drawing.Point(390, 418);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(100, 16);
            this.label5.TabIndex = 43;
            this.label5.Text = "Ters Matris B";
            this.label5.Visible = false;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.CornflowerBlue;
            this.ClientSize = new System.Drawing.Size(920, 749);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.listviewters2);
            this.Controls.Add(this.listviewters1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.richTextBox1);
            this.Controls.Add(this.checkBox1);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.btnmatristranspoze2);
            this.Controls.Add(this.btnmatristersi2);
            this.Controls.Add(this.btnmatrisizi2);
            this.Controls.Add(this.btnmatristranspoze);
            this.Controls.Add(this.btnmatristersi);
            this.Controls.Add(this.btnmatrisizi);
            this.Controls.Add(this.listView3);
            this.Controls.Add(this.listView2);
            this.Controls.Add(this.listView1);
            this.Controls.Add(this.btnmatriscarp);
            this.Controls.Add(this.btnmatristopla);
            this.Controls.Add(this.btnmatrisolustur);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Button btnmatrisolustur;
        private System.Windows.Forms.Button btnmatristopla;
        private System.Windows.Forms.Button btnmatriscarp;
        private System.Windows.Forms.ListView listView1;
        private System.Windows.Forms.ListView listView2;
        private System.Windows.Forms.ListView listView3;
        private System.Windows.Forms.Button btnmatrisizi;
        private System.Windows.Forms.Button btnmatristersi;
        private System.Windows.Forms.Button btnmatristranspoze;
        private System.Windows.Forms.Button btnmatristranspoze2;
        private System.Windows.Forms.Button btnmatristersi2;
        private System.Windows.Forms.Button btnmatrisizi2;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.RichTextBox richTextBox1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.ListView listviewters1;
        private System.Windows.Forms.ListView listviewters2;
        private System.Windows.Forms.CheckBox checkBox1;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label5;
    }
}

