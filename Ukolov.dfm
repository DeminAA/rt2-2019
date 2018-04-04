object Ukolov_form: TUkolov_form
  Left = 0
  Top = 0
  Caption = 'Ukolov_form'
  ClientHeight = 599
  ClientWidth = 881
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
  object StringGrid1: TStringGrid
    Left = 8
    Top = 8
    Width = 425
    Height = 489
    ColCount = 2
    DefaultColWidth = 200
    RowCount = 19
    TabOrder = 0
  end
  object Button1: TButton
    Left = 456
    Top = 440
    Width = 225
    Height = 57
    Caption = 'Click to show'
    TabOrder = 1
    OnClick = Button1Click
  end
end
