namespace RazorEnhanced.UI
{
    partial class EnhancedFriendAddGuildManual
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(EnhancedFriendAddGuildManual));
            this.label1 = new System.Windows.Forms.Label();
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.tName = new System.Windows.Forms.TextBox();
            this.bClose = new System.Windows.Forms.Button();
            this.bAddPlayer = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(4, 27);
            this.label1.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(37, 14);
            this.label1.TabIndex = 0;
            this.label1.Text = "Name:";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.tName);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Location = new System.Drawing.Point(9, 11);
            this.groupBox1.Margin = new System.Windows.Forms.Padding(2);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Padding = new System.Windows.Forms.Padding(2);
            this.groupBox1.Size = new System.Drawing.Size(221, 68);
            this.groupBox1.TabIndex = 1;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Guild";
            // 
            // tName
            // 
            this.tName.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.tName.BackColor = System.Drawing.Color.White;
            this.tName.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.tName.Location = new System.Drawing.Point(58, 23);
            this.tName.Margin = new System.Windows.Forms.Padding(2);
            this.tName.Name = "tName";
            this.tName.Size = new System.Drawing.Size(149, 20);
            this.tName.TabIndex = 1;
            // 
            // bClose
            // 
            this.bClose.Location = new System.Drawing.Point(241, 48);
            this.bClose.Margin = new System.Windows.Forms.Padding(2);
            this.bClose.Name = "bClose";
            this.bClose.Size = new System.Drawing.Size(57, 20);
            this.bClose.TabIndex = 3;
            this.bClose.Text = "Close";
            this.bClose.UseVisualStyleBackColor = true;
            this.bClose.Click += new System.EventHandler(this.bClose_Click);
            // 
            // bAddPlayer
            // 
            this.bAddPlayer.Location = new System.Drawing.Point(241, 22);
            this.bAddPlayer.Margin = new System.Windows.Forms.Padding(2);
            this.bAddPlayer.Name = "bAddPlayer";
            this.bAddPlayer.Size = new System.Drawing.Size(57, 20);
            this.bAddPlayer.TabIndex = 2;
            this.bAddPlayer.Text = "Add";
            this.bAddPlayer.UseVisualStyleBackColor = true;
            this.bAddPlayer.Click += new System.EventHandler(this.bAddPlayer_Click);
            // 
            // EnhancedFriendAddGuildManual
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 14F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(314, 84);
            this.Controls.Add(this.bClose);
            this.Controls.Add(this.bAddPlayer);
            this.Controls.Add(this.groupBox1);
            this.Font = new System.Drawing.Font("Arial", 8F);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "EnhancedFriendAddGuildManual";
            this.Text = "Enhanced Friend Manual Add Guild";
            this.Load += new System.EventHandler(this.EnhancedFriendManualAdd_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.TextBox tName;
        private System.Windows.Forms.Button bAddPlayer;
        private System.Windows.Forms.Button bClose;

    }
}