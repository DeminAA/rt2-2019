object sobolevForma: TsobolevForma
  Left = 0
  Top = 0
  Caption = 'sobolevForma'
  ClientHeight = 528
  ClientWidth = 641
  Color = clRed
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
    Width = 409
    Height = 512
    ColCount = 2
    DefaultColWidth = 200
    FixedColor = clAqua
    RowCount = 18
    TabOrder = 0
  end
  object Button1: TButton
    Left = 416
    Top = 8
    Width = 75
    Height = 512
    Caption = 'Don'#39't PuSh'
    TabOrder = 1
    OnClick = Button1Click
  end
end
