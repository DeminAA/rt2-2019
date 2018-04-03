object Shersteforma: TShersteforma
  Left = 0
  Top = 0
  Caption = 'Shersteforma'
  ClientHeight = 450
  ClientWidth = 377
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
  object Label1: TLabel
    Left = 239
    Top = 398
    Width = 108
    Height = 13
    Caption = #1050#1085#1086#1087#1082#1072' -> '#1056#1077#1079#1091#1083#1100#1090#1072#1090
  end
  object StringGrid1: TStringGrid
    Left = 8
    Top = 8
    Width = 201
    Height = 434
    ColCount = 2
    DefaultColWidth = 96
    RowCount = 17
    TabOrder = 0
  end
  object Button1: TButton
    Left = 215
    Top = 417
    Width = 154
    Height = 25
    Caption = 'Update'
    TabOrder = 1
    OnClick = Button1Click
  end
end
