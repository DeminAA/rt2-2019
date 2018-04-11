object SIDFORM: TSIDFORM
  Left = 0
  Top = 0
  Caption = 'SIDFORM'
  ClientHeight = 417
  ClientWidth = 413
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object StringGrid1: TStringGrid
    Left = 120
    Top = 8
    Width = 163
    Height = 345
    ColCount = 2
    RowCount = 18
    TabOrder = 0
    ColWidths = (
      64
      64)
    RowHeights = (
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24)
  end
  object Button1: TButton
    Left = 152
    Top = 376
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 1
    OnClick = Button1Click
  end
end
