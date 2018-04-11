object Borodin: TBorodin
  Left = 0
  Top = 0
  Caption = 'Borodin'
  ClientHeight = 194
  ClientWidth = 441
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
    Left = 40
    Top = 24
    Width = 25
    Height = 13
    Caption = 'Login'
  end
  object Label2: TLabel
    Left = 200
    Top = 24
    Width = 46
    Height = 13
    Caption = 'password'
  end
  object correct: TLabel
    Left = 200
    Top = 120
    Width = 34
    Height = 13
    Caption = 'correct'
  end
  object login: TEdit
    Left = 40
    Top = 56
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object pass: TEdit
    Left = 200
    Top = 56
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Button1: TButton
    Left = 352
    Top = 54
    Width = 75
    Height = 25
    Caption = 'Enter'
    TabOrder = 2
    OnClick = Button1Click
  end
end
