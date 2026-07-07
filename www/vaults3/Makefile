PORTNAME=	vaults3
PORTVERSION=	4.3.1
PORTEPOCH=	1
CATEGORIES=	www

MAINTAINER=	bsd-ports@darkain.com
COMMENT=	Lightweight S3-compatible object storage with built-in dashboard
WWW=		https://github.com/Kodiqa-Solutions/VaultS3

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	Kodiqa-Solutions
GH_PROJECT=	VaultS3
GH_TAGNAME=	v${PORTVERSION}

BUILD_DEPENDS=	go>0:lang/go npm>0:www/npm-node20
RUN_DEPENDS=	go>0:lang/go

USE_RC_SUBR=	${PORTNAME}

USERS=			vaults3
GROUPS=			vaults3
UID_FILES=		${FILESDIR}/vaults3-users
GID_FILES=		${FILESDIR}/vaults3-groups

# Upstream Makefile handles everything: frontend (Vite) + Go binaries.
do-build:
	cd ${WRKSRC} && ${GMAKE} build

do-install:
	${STAGE_WRAPPER}mkdir -p ${STAGEDIR}${PREFIX}/bin \
	    ${STAGEDIR}${SYSCONFDIR}/${PORTNAME}
	${INSTALL_PROGRAM} ${WRKSRC}/vaults3 ${STAGEDIR}${PREFIX}/bin/vaults3
	${INSTALL_PROGRAM} ${WRKSRC}/vaults3-cli ${STAGEDIR}${PREFIX}/bin/vaults3-cli
	${INSTALL_DATA} ${WRKSRC}/configs/vaults3.yaml ${STAGEDIR}${PREFIX}/etc/vaults3.yaml.sample

.include <bsd.port.mk>
