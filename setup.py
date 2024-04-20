from setuptools import setup, Extension

c_sources = [
    'src/module.c',
    'src/server.c'
]

setup_args = dict(
    ext_modules = [
        Extension(
            'jetflux.server',
            c_sources,
            include_dirs = ['src'],
            py_limited_api = True
        )
    ]
)

setup(**setup_args)
