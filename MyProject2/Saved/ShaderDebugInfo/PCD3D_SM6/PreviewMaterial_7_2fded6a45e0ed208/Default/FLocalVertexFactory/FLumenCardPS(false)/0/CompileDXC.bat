@ECHO OFF
SET DXC="F:\UE_5.3\Engine\Binaries\ThirdParty\ShaderConductor\Win64\dxc.exe"
IF NOT EXIST %DXC% (
	ECHO Couldn't find dxc.exe under "F:\UE_5.3\Engine\Binaries\ThirdParty\ShaderConductor\Win64"
	GOTO :END
)
%DXC% -Zpr -O3 -auto-binding-space 0 -Wno-parentheses-equality -disable-lifetime-markers -T ps_6_6 -E Main -Fc LumenCardPixelShader.d3dasm -Fo LumenCardPixelShader.dxil LumenCardPixelShader
:END
PAUSE
