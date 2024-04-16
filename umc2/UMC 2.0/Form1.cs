using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace UMC_2._0
{
    public partial class Form1 : Form
        
    {
        public Form1()
        {
            InitializeComponent();

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void txtApol1_TextChanged(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void btnCalcular_Click(object sender, EventArgs e)
        {
            // COLHER APOLS CONVERTENDO STRING FLOAT
            float Apol1 = float.Parse(txtApol1.Text);
            float Apol2 = float.Parse(txtApol2.Text);
            float Apol3 = float.Parse(txtApol3.Text);
            float Apol4 = float.Parse(txtApol4.Text);
            float Apol5 = float.Parse(txtApol5.Text);

            // COLHER OUTRAS AVALIACOES CONVERTENDO STRING FLOAT
            float ativ_prat = float.Parse(txtAtivPrat.Text);
            float prov_obj = float.Parse(txtProvObj.Text);
            float prov_disc = float.Parse(txtProvaDisc.Text);

            // CALCULANDO MEDIAS
            float peso_apols = (Apol1 * 30 + Apol2 * 30 + Apol3 * 30 + Apol4 * 30 + Apol5 * 30) / 5;
            float peso_prov_obj = (prov_obj * 20);
            float peso_prov_disc = (prov_disc * 50);
            float media = (peso_apols + peso_prov_obj + peso_prov_disc) / 100;

            // VERIFICANDO APROVAÇAO
            string aprovado = "";
            if (media >= 70)
            {
                aprovado = "Aprovado";
                lblResultadoFinal.ForeColor = Color.Green;
            }
            else
            {
                aprovado = "Reprovado";
                lblResultadoFinal.ForeColor = Color.Red;
            }

            // EXIBINDO O RESULTADO CONVERTENDO PARA STRING
            lblMedia.Text = media.ToString();
            lblResultadoFinal.Text = aprovado.ToString();
        }

        private void btnAjuda_Click(object sender, EventArgs e)
        {
            // ABRIR JANELA SOBRE
            frmExemplo ajuda = new frmExemplo();
            ajuda.Show();
        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            // ABRIR JANELA SOBRE
            frmSobre sobre = new frmSobre();
            sobre.Show();
        }
    }
}
