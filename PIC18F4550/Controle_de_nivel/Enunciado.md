# Proposta de projeto

Este projeto tem como objetivo implementar um sistema de **controle automático** do **nível** de um reservatório utilizando um microcontrolador **PIC18F4550**. O sistema deve atender aos seguintes requisitos:

- Deve haver um botão "Ligar" que ativa o controle automático do nível do reservatório.
- Deve haver um botão "Desligar" que desativa o controle automático do nível do reservatório.
- Um LED deve indicar se o controle automático está ativado ou desativado.
- Quando o controle automático estiver ativado:
    - A bomba de enchimento deve ser ligada quando o nível do reservatório estiver abaixo do mínimo.
    - A bomba deve ser desligada assim que o nível atingir o valor máximo.
    - Os níveis de água serão monitorados por dois sensores (mínimo e máximo).
- Quando o controle automático for desativado, a bomba deve ser desligada imediatamente, independentemente do nível do reservatório.