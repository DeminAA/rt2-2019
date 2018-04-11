object ZabelovForm: TZabelovForm
  Left = 0
  Top = 0
  Caption = 'Zabelov'
  ClientHeight = 669
  ClientWidth = 658
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 8
    Top = 8
    Width = 640
    Height = 480
    Stretch = True
  end
  object Label1: TLabel
    Left = 272
    Top = 512
    Width = 178
    Height = 13
    Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1074#1088#1077#1084#1103' '#1075#1086#1076#1072' '#1087#1086#1078#1072#1083#1091#1081#1089#1090#1072':'
  end
  object ButtonLeto: TButton
    Left = 112
    Top = 560
    Width = 75
    Height = 25
    Caption = #1051#1077#1090#1086
    TabOrder = 0
    OnClick = ButtonLetoClick
  end
  object ButtonOsen: TButton
    Left = 232
    Top = 560
    Width = 75
    Height = 25
    Caption = #1054#1089#1077#1085#1100
    TabOrder = 1
    OnClick = ButtonOsenClick
  end
  object ButtonZima: TButton
    Left = 352
    Top = 560
    Width = 75
    Height = 25
    Caption = #1047#1080#1084#1072
    TabOrder = 2
    OnClick = ButtonZimaClick
  end
  object ButtonVesna: TButton
    Left = 472
    Top = 560
    Width = 75
    Height = 25
    Caption = #1042#1077#1089#1085#1072
    TabOrder = 3
    OnClick = ButtonVesnaClick
  end
end
