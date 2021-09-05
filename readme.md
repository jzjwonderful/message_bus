### 工程说明
- msg_bus
	- 提供静态MessageBus对象 

- service_provider
	- 提供可被外部模块调用的服务注册及服务实现
	
- service_caller
	- 通过MessageBus对象调用服务
	- caller工程完全不依赖provider工程

- app
	- 创建provider和caller对象
	- 测试caller调用

