object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 474
  ClientWidth = 1009
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 7
    Top = 59
    Width = 19
    Height = 13
    Caption = 'URL'
  end
  object Label2: TLabel
    Left = 7
    Top = 99
    Width = 16
    Height = 13
    Caption = 'loin'
  end
  object Label3: TLabel
    Left = 32
    Top = 128
    Width = 26
    Height = 13
    Caption = 'HTML'
  end
  object Label4: TLabel
    Left = 160
    Top = 99
    Width = 16
    Height = 13
    Caption = 'loin'
  end
  object Label5: TLabel
    Left = 32
    Top = 357
    Width = 117
    Height = 13
    Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1089#1090#1091#1076#1077#1085#1090#1086#1074
  end
  object htmltext: TMemo
    Left = 8
    Top = 147
    Width = 349
    Height = 201
    ScrollBars = ssBoth
    TabOrder = 0
  end
  object login: TEdit
    Left = 32
    Top = 96
    Width = 65
    Height = 21
    TabOrder = 1
  end
  object url: TEdit
    Left = 32
    Top = 56
    Width = 244
    Height = 21
    TabOrder = 2
    Text = 'http://127.0.0.1/denwer/eu/test_page..html'
  end
  object Button1: TButton
    Left = 282
    Top = 54
    Width = 75
    Height = 25
    Caption = 'Send'
    TabOrder = 3
    OnClick = Button1Click
  end
  object pass: TEdit
    Left = 192
    Top = 96
    Width = 65
    Height = 21
    TabOrder = 4
  end
  object Edit1: TEdit
    Left = 155
    Top = 354
    Width = 121
    Height = 21
    TabOrder = 5
    Text = 'Edit1'
  end
  object StringGrid1: TStringGrid
    Left = 363
    Top = 8
    Width = 622
    Height = 449
    ColCount = 4
    Ctl3D = False
    ParentCtl3D = False
    TabOrder = 6
  end
  object Edit2: TEdit
    Left = 32
    Top = 29
    Width = 121
    Height = 21
    TabOrder = 7
    Text = 'http://localhost/denwer/env.php'
  end
  object Get: TButton
    Left = 282
    Top = 25
    Width = 75
    Height = 25
    Caption = 'Get'
    TabOrder = 8
    OnClick = GetClick
  end
  object Button3: TButton
    Left = 282
    Top = 85
    Width = 75
    Height = 25
    Caption = 'Button3'
    TabOrder = 9
    OnClick = Button3Click
  end
  object IdHTTP: TIdHTTP
    AllowCookies = True
    ProxyParams.BasicAuthentication = False
    ProxyParams.ProxyPort = 0
    Request.ContentLength = -1
    Request.ContentRangeEnd = -1
    Request.ContentRangeStart = -1
    Request.ContentRangeInstanceLength = -1
    Request.Accept = 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8'
    Request.AcceptLanguage = 'ru-RU,ru;q=0.9,en-US;q=0.8,en;q=0.7'
    Request.BasicAuthentication = False
    Request.UserAgent = 
      'Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHT' +
      'ML, like Gecko) Chrome/65.0.3325.181 Safari/537.36'
    Request.Ranges.Units = 'bytes'
    Request.Ranges = <>
    HTTPOptions = [hoForceEncodeParams]
    Left = 32
    Top = 400
  end
  object IdCookieManager1: TIdCookieManager
    Left = 80
    Top = 400
  end
end
