object TupikaForm: TTupikaForm
  Left = 0
  Top = 0
  Caption = 'TupikaForm'
  ClientHeight = 214
  ClientWidth = 396
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
    Left = 24
    Top = 8
    Width = 137
    Height = 129
    OnMouseMove = Image1MouseMove
  end
  object Button1: TButton
    Left = 280
    Top = 104
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 0
    OnClick = Button1Click
  end
end
