object kal_form: Tkal_form
  Left = 0
  Top = 0
  Caption = 'kal_form'
  ClientHeight = 404
  ClientWidth = 515
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 24
    Top = 80
    Width = 185
    Height = 89
    Lines.Strings = (
      'Memo1')
    TabOrder = 0
  end
  object Button1: TButton
    Left = 368
    Top = 96
    Width = 75
    Height = 25
    Caption = #1080#1089#1093#1086#1076#1085#1072#1103
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 368
    Top = 184
    Width = 75
    Height = 25
    Caption = #1091#1074#1077#1083#1080#1095#1080#1090#1100
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 368
    Top = 280
    Width = 75
    Height = 25
    Caption = #1091#1084#1077#1085#1100#1096#1080#1090#1100
    TabOrder = 3
    OnClick = Button3Click
  end
end
