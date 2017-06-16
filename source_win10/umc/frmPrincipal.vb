Public Class frmPrincipal
    REM VARIAVEIS
    REM N3 = SOMA 5 APOLS / 5
    REM = PO = N1
    REM = N4 = PD + AP  (AP * 40% + PD*60%) = N4
    Dim apol1, apol2, apol3, apol4, apol5, N1, N3, N4, PO, AP, PD, media As Integer

    Private Sub btnSobre_Click(sender As Object, e As EventArgs) Handles btnSobre.Click
        frmSobre.Show()

    End Sub

    Private Sub btnSair_Click(sender As Object, e As EventArgs) Handles btnSair.Click
        End

    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load


    End Sub

    Private Sub btnCalcular_Click(sender As Object, e As EventArgs) Handles btnCalcular.Click
        REM LER APOLS E ATIV PRATICAS
        apol1 = txtApol1.Text
        apol2 = txtApol2.Text
        apol3 = txtApol3.Text
        apol4 = txtApol4.Text
        apol5 = txtApol5.Text
        AP = txtAtivPratica.Text
        PO = txtProvObj.Text
        PD = txtProvDisc.Text
        N1 = PO
        N3 = (apol1 + apol2 + apol3 + apol4 + apol5) / 5
        N4 = (AP * 0.4 + PD * 0.6)

        lblN1.Text = N1
        lblN3.Text = N3
        lblN4.Text = N4

        REM CALCULAR MEDIA
        media = (N1 * 30 + N3 * 20 + N4 * 50) / 100

        REM EXIBIR MEDIA
        lblMedia.Text = media

    End Sub
End Class
